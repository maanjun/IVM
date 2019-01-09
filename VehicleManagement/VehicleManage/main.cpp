#include "mainwindow.h"
#include <QtWidgets/QApplication>
#include<process.h>
#include<windows.h>
#include<stdio.h>

int main(int argc, char *argv[])
{
	// 单进程运行
	HANDLE hEvent = CreateEvent(NULL, FALSE, TRUE, L"764e16c4-c1c1-47a3-a419-1d7cccf1a892");
	if (GetLastError() == ERROR_ALREADY_EXISTS)
	{
		CloseHandle(hEvent);
		return 0;
	}
	QApplication::setQuitOnLastWindowClosed(false);
	QApplication a(argc, argv);
	MainWindow m;
	m.show();
	return a.exec();
}
