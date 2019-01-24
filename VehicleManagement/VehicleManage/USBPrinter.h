#ifndef USBPRINTER_H
#define USBPRINTER_H

#include <windows.h>
#include <iostream>
#include <string>

class USBPrinter
{
public:
	USBPrinter();
	~USBPrinter();
public:
	void tesetPrinter();

	void InitDefualtPrinter();

	BOOL PrinterDoc(char *filename);
	//ÇÐÖ½
	void PrinterCut();
	//×ßÖ½
	void PrinterWalk();
	//¹Ø±Õ
	void ClosePrinter();
private:
	//´òÓ¡»ú¾ä±ú
	HANDLE printer_handle_;
};

#endif
