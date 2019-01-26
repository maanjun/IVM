#include <windows.h>
#include <iostream>
#include <string>
#include "USBPrinter.h"
#include <stdio.h>
#include <fcntl.h>
#include <io.h>

using namespace std;

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

			if (!::OpenPrinter(szPrinter, &printer_handle_, NULL))
			{
				printer_handle_ = 0;
				//printf("DefualtPrinter %s\n", szPrinter);
			} else printf("open Printer succ \n");
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
	ShellExecute(NULL, LPWSTR("print"), (LPWSTR)filename, (LPWSTR)"", (LPWSTR)"", SW_HIDE);

}
BOOL USBPrinter::PrinterDoc(char *filename)
{
	string  ext = fileType(filename);
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
	char lpData[10240];
	int  dwCount = 0;
	FILE *fp = fopen(filename, "r");
	struct _stat info;
	_stat(filename, &info);
	dwCount = info.st_size;
	fseek(fp, 0, SEEK_SET);
	dwCount = dwCount > 10240 ? 10240 : dwCount;
	fread(lpData, dwCount, 1, fp);

	// Start a page.   
	if (!StartPagePrinter(printer_handle_))
	{
		printf("%d %s\n", GetLastError(), TEXT("StartPagePrinter"));
		EndDocPrinter(printer_handle_);
		::ClosePrinter(printer_handle_);
		return FALSE;
	}

	// Send the data to the printer.   

	if (!WritePrinter(printer_handle_, lpData, dwCount, &dwBytesWritten))
	{
		printf("%d %s\n", GetLastError(), TEXT("StartPagePrinter"));
		EndPagePrinter(printer_handle_);
		EndDocPrinter(printer_handle_);
		::ClosePrinter(printer_handle_);
		return FALSE;

	}
	PrinterCut();
	WaitForSingleObject(printer_handle_, 10000);
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

	if (dwBytesWritten != dwCount)
	{
		//printf(TEXT("Wrote %d bytes instead of requested %d bytes.\n"), dwBytesWritten, dwCount);
		return FALSE;
	}

	return TRUE;
}


//切纸
void USBPrinter::PrinterCut()
{
	BYTE lpData[4] = {0x1d, 86, 66, 0};
	int  dwCount = 4;
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
