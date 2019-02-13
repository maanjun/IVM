#include <windows.h>
#include <iostream>
#include <string>
#include "USBPrinter.h"
#include <stdio.h>
#include <fcntl.h>
#include <io.h>
#include <algorithm>
#include "CommonFunction.h"
using namespace std;
using namespace CommonFuncs;

USBPrinter::USBPrinter()
{
	printer_handle_ = 0;
}


USBPrinter::~USBPrinter()
{
}

void USBPrinter::ClosePrinter()
{
	if (printer_handle_ != 0)
	{
		::ClosePrinter(printer_handle_);
		printer_handle_ = 0;
		printf("ClosePrinter\n");
	}
	

}
void USBPrinter::InitDefualtPrinter()
{
	DWORD dwSize = 0;
	string csPrinter;
	printer_handle_ = 0;
	//printf("InitDefualtPrinter 11\n");
	if ((!::GetDefaultPrinter(NULL, &dwSize)) &&
		GetLastError() == ERROR_INSUFFICIENT_BUFFER)
	{
		TCHAR *szPrinter = new TCHAR[dwSize + 1];
		if (::GetDefaultPrinter(szPrinter, &dwSize))
		{			 
			//printf("InitDefualtPrinter 22\n");
			memcpy(printerName_, szPrinter, dwSize*sizeof(TCHAR));
			if (!::OpenPrinter(szPrinter, &printer_handle_, NULL))
			{
				printer_handle_ = 0;
				//printf("DefualtPrinter %s\n", szPrinter);
			}
			else {
				PRINTER_INFO_2 * pPrinterData;
				BYTE pdBuffer[16384];
				DWORD cbBuf = sizeof(pdBuffer);
				DWORD cbNeeded = 0;
				pPrinterData = (PRINTER_INFO_2 *)&pdBuffer[0];
				//获取打印机端口名称
				GetPrinter(
					printer_handle_,
					2,
					&pdBuffer[0],
					cbBuf,
					&cbNeeded);
				memcpy(portName_, pPrinterData->pPortName, dwSize * sizeof(TCHAR));
				printf("open Printer succ \n");
			}
				
		}
		 
	}
}
// 获取文件类型
string fileType(string extention)
{
	std::string type = "";
	if (extention.length() > 0)
	{
		LPCSTR name = extention.c_str();
		SHFILEINFOA info;
		if (SHGetFileInfoA(name,
			FILE_ATTRIBUTE_NORMAL,
			&info,
			sizeof(info),
			SHGFI_TYPENAME | SHGFI_USEFILEATTRIBUTES))
		{
			type = info.szTypeName;
		}
	}

	return type;
}
void printDOC(char *filename)
{
	//ShellExecute(NULL, "print", (LPWSTR)filename, (LPWSTR)"", (LPWSTR)"", SW_HIDE);

}

int USBPrinter::printText(char *filename)
{
	DWORD dwBytesWritten = 0;
	// Send the data to the printer.   
	char lpData[10240];
	int  dwCount = 0;
	FILE *fp = fopen(filename, "r");
	struct _stat info;
	_stat(filename, &info);
	dwCount = info.st_size;
	fseek(fp, 0, SEEK_SET);
	dwCount = dwCount > 10240 ? 10240 : dwCount;
	fread(lpData, dwCount, 1, fp);
	if (!WritePrinter(printer_handle_, lpData, dwCount, &dwBytesWritten))
	{
		//printf("%d %s\n", GetLastError(), TEXT("StartPagePrinter"));
		EndPagePrinter(printer_handle_);
		EndDocPrinter(printer_handle_);
		::ClosePrinter(printer_handle_);
		return 0;
	}
	return dwBytesWritten;
}

int USBPrinter::printHTML(char *filename)
{
	CommonFunction commonFunction;
	string exepath = commonFunction.getCurrExePath();
	string strExePath =  exepath + "Tools\\Html2Bmp2\\Html2Bmp2.exe ";
	string strCmdParam = strExePath;
	strCmdParam += filename ;
	strCmdParam += "  " + exepath + "taxdeclare.bmp";
	//commonFunction.ExcuteProcess("D:/Works/Mine/IVM/Codes/IVM/VehicleManagement/Win32/Debug/Tools/Html2Bmp2/Html2Bmp2.exe D:/Works/Mine/IVM/Codes/IVM/VehicleManagement/Win32/Debug/Resources/Htmls/taxdeclare.html D:/Works/Mine/IVM/Codes/IVM/VehicleManagement/Win32/Debug/Data/images/taxdeclare.bmp", NULL, 30000);
	commonFunction.ExcuteProcessNoWaitInNewDesktop(strCmdParam.c_str(), NULL, 30000);
	strCmdParam = exepath + "taxdeclare.bmp";
	if (access(strCmdParam.c_str(), 0) == 0)
	{
		//TCHAR szDriver[16] = { 'W','I','S','P','O','O','L' };//"WINSPOOL";
		//HDC printerdc = CreateDC(szDriver, printerName_, portName_, NULL);
		//GetDC()
		//BitBlt()
		//进行简单打印
		ShellExecuteA(NULL, "Print", strCmdParam.c_str(), NULL, NULL, SW_HIDE);
		return 1;
	}
	return 0;
}

BOOL USBPrinter::PrinterDoc(char *filename)
{
	size_t length = strlen(filename);
	if (length == 0) return false;

	char *diver = (char*)malloc(length);
	char *dir = (char*)malloc(length);
	char *files = (char*)malloc(length);
	char *extname = (char*)malloc(length);
	_splitpath(filename, diver, dir,files, extname);
	string  ext = extname;
	std::transform(ext.begin(), ext.end(),
		ext.begin(), ::tolower);
	free(diver);
	free(dir);
	free(files);
	free(extname);
	if ((ext == ".html") || (ext == ".htm"))
	{
		return printHTML(filename);		 
	}
	printf("Print ext==%s\n", ext.c_str());
	/*if (ext != ".txt")
	{
		printf("Print DOC\n");
		printDOC(filename);
		return TRUE;
	}*/
	printf("Print Txt\n");
	DOC_INFO_1 DocInfo;
	DWORD      dwJob;
	DWORD      dwBytesWritten;
	DocInfo.pDocName = TEXT("My Document");// LPWSTR(filename);
	DocInfo.pOutputFile = NULL;
	DocInfo.pDatatype = TEXT("RAW");
	//DocInfo.pDatatype = TEXT("PMJOURNAL");  
	// Inform the spooler the document is beginning.  
	if ((dwJob = StartDocPrinter(printer_handle_, 1, (LPBYTE)&DocInfo)) == 0)
	{
		printf("%d %s\n",GetLastError(), TEXT("StartDocPrinter"));
		::ClosePrinter(printer_handle_);
		return FALSE;
	}

	// Start a page.   
	if (!StartPagePrinter(printer_handle_))
	{
		printf("%d %s\n", GetLastError(), TEXT("StartPagePrinter"));
		EndDocPrinter(printer_handle_);
		::ClosePrinter(printer_handle_);
		return FALSE;
	}
	if ((ext == ".html") || (ext == ".htm"))
	{
		printHTML(filename);
	}
	else if (ext == ".txt")
	{
		printText(filename);
	 }

	PrinterCut();
	//WaitForSingleObject(printer_handle_, 10000);
	// End the page.   

	if (!EndPagePrinter(printer_handle_))
	{

		printf("%d %s\n", GetLastError(), TEXT("EndPagePrinter"));
		EndDocPrinter(printer_handle_);
		::ClosePrinter(printer_handle_);

		return FALSE;

	}

	// Inform the spooler that the document is ending.   

	if (!EndDocPrinter(printer_handle_))
	{

		printf("%d %s\n", GetLastError(), TEXT("EndPagePrinter"));
		::ClosePrinter(printer_handle_);
		return FALSE;

	}

	// Tidy up the printer handle.   

	::ClosePrinter(printer_handle_);

	// Check to see if correct number of bytes were written.   



	return TRUE;
}


//切纸
void USBPrinter::PrinterCut()
{
	BYTE lpData[4] = {0x1d, 86, 66, 0};
	int  dwCount = 3;
	DWORD      dwBytesWritten;
	if (!WritePrinter(printer_handle_, lpData, dwCount, &dwBytesWritten))
	{
		printf("write Print cut\n");
	}
}
//走纸
void USBPrinter::PrinterWalk()
{
	BYTE lpData[4] = { 27, 74, 150};
	int  dwCount = 3;
	DWORD      dwBytesWritten;
	if (!WritePrinter(printer_handle_, lpData, dwCount, &dwBytesWritten))
	{
		printf("write Print walk\n");
	}
}

void USBPrinter::tesetPrinter()
{
	/*
	string hello = "!!! Hello Printer !!!\f";
	HANDLE hPrinter = NULL;
	DOC_INFO_1 DocInfo;
	DWORD      dwJob;
	DWORD      dwBytesWritten = 0L;


	if (OpenPrinter((LPTSTR)_T(PRINTER_NAME), &hPrinter, NULL)) {
		cout << "printer opened" << endl;
		DocInfo.pDocName = (LPTSTR)_T("My Document");
		DocInfo.pOutputFile = NULL;
		DocInfo.pDatatype = (LPTSTR)_T("RAW");
		dwJob = StartDocPrinter(hPrinter, 1, (LPBYTE)&DocInfo);
		if (dwJob != 0) {
			cout << "Print job open" << endl;
			if (StartPagePrinter(hPrinter)) {
				cout << "Page started" << endl;
				// Send the data to the printer.
				if (WritePrinter(hPrinter, (void*)hello.c_str(), hello.length(), &dwBytesWritten)) {
					if (dwBytesWritten == hello.length()) { cout << "Message sent to printer" << endl; }
				}

				cout << "Page Closed" << endl;
			}
			// Inform the spooler that the document is ending.
			EndDocPrinter(hPrinter);
			
			//WritePrinter(hPrinter, )
			cout << "Print job open" << endl;
		}
		else {
			cout << "Could not create print job" << endl;
		}
		// Close the printer handle.
		ClosePrinter(hPrinter);
		cout << "printer closed" << endl;
	}
	else {
		cout << "Could not open Printer" << endl;
	}
	cout << "done";
	//return 0;
	*/
}


//重点测试内容 用于在该区域进行图片打印 
/*
void PrintBitmap(LPCTSTR filename) {
	CPrintDialog printDlg(FALSE);
	printDlg.GetDefaults();
	// Or get from user:
	// if (printDlg.DoModal() == IDCANCEL)   
	//        return; 
	CDC dc;
	if (!dc.Attach(printDlg.GetPrinterDC())) {
		AfxMessageBox(_T("No printer found!")); return;
	}

	dc.m_bPrinting = TRUE;
	DOCINFO di;
	// Initialise print document details
	::ZeroMemory(&di, sizeof(DOCINFO));
	di.cbSize = sizeof(DOCINFO);
	di.lpszDocName = filename;
	BOOL bPrintingOK = dc.StartDoc(&di); // Begin a new print job 
										 // Get the printing extents
										 // and store in the m_rectDraw field of a 
										 // CPrintInfo object
	CPrintInfo Info;
	Info.SetMaxPage(1); // just one page 
	int maxw = dc.GetDeviceCaps(HORZRES);
	int maxh = dc.GetDeviceCaps(VERTRES);
	Info.m_rectDraw.SetRect(0, 0, maxw, maxh);
	for (UINT page = Info.GetMinPage(); page <=
		Info.GetMaxPage() && bPrintingOK; page++) {
		dc.StartPage();    // begin new page
		Info.m_nCurPage = page;
		CBitmap bitmap;
		// LoadImage does the trick here, it creates a DIB section
		// You can also use a resource here
		// by using MAKEINTRESOURCE() ... etc. 
		if (!bitmap.Attach(::LoadImage(
			::GetModuleHandle(NULL), filename, IMAGE_BITMAP, 0, 0,
			LR_LOADFROMFILE | LR_CREATEDIBSECTION | LR_DEFAULTSIZE))) {
			AfxMessageBox(_T("Error loading bitmap!")); return;
		}
		BITMAP bm;
		bitmap.GetBitmap(&bm);
		int w = bm.bmWidth;
		int h = bm.bmHeight;
		// create memory device context
		CDC memDC;
		memDC.CreateCompatibleDC(&dc);
		CBitmap *pBmp = memDC.SelectObject(&bitmap);
		memDC.SetMapMode(dc.GetMapMode());
		dc.SetStretchBltMode(HALFTONE);
		// now stretchblt to maximum width on page
		dc.StretchBlt(0, 0, maxw, maxh, &memDC, 0, 0, w, h, SRCCOPY);
		// clean up
		memDC.SelectObject(pBmp);
		bPrintingOK = (dc.EndPage() > 0);   // end page
	}
	if (bPrintingOK)
		dc.EndDoc(); // end a print job
	else dc.AbortDoc();           // abort job. 
}
*/