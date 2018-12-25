#include "common.h"

// 读取文件
bool readFile(QString qstrFileName, QString &qstrContent) 
{
	try
	{
		QFile file(qstrFileName);
		if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) 
		{
			qDebug() << "Can't open the file!" << endl;
		}
		QTextStream stream(&file);
		qstrContent = stream.readAll();
	}
	catch (std::exception &e)
	{
		return false;
	}
	return true;
}

bool writeFile(QString qstrFileName, const QString qstrContent)
{
	try
	{
		QFile file(qstrFileName);
		//---参数：QFile::Truncate表示的是 将原文件内容清空，
		//--以WriteOnly方式打开文件，如果在工程文件下没有该txt文件，那么程序将创建该文件，若存在，则将原文件内容清空，
		if (file.open(QFile::WriteOnly | QFile::Truncate))
		{
			//---创建 QTextStream流操作对象， 使与QFile对象file绑定。
			QTextStream out(&file);
			//----设置输出格式为: 居中，这里格式还可以设置为：right/left。 占10个字符；
			out << qstrContent << endl;
		}
		else
		{
			qDebug() << "open file failed";
		}
		file.close();
	}
	catch (std::exception &e)
	{
		return false;
	}
	return true;
}

bool printFile(const QString & filePath)
{
	// create a printer
	QPrinter printer;
	QString printerName = printer.printerName();
	// no default printer or no file return false
	if (printerName.size() == 0 || filePath.size() == 0)
		return false;
	QFileInfo fi(filePath);
	if (!fi.exists())
		return false;
	int ret = 0;
	ret = (int)ShellExecuteW(NULL,
		QString("print").toStdWString().c_str(),
		filePath.toStdWString().c_str(),
		NULL,
		NULL,
		SW_HIDE);
	// if return number bigger than 31 indicate succ
	if (ret > SE_ERR_NOASSOC)
		return true;
	return false;
}

bool printContent(string strContent)
{
	try
	{
		CPrintDialog m_printdlg(FALSE);	//打印对话框，用于获取打印参数
		m_printdlg.GetDefaults();		//不显示打印对话框直接获取默认设置参数
										//m_printdlg.DoModal();			//显示打印对话框设置参数
		CDC dc;
		dc.Attach(m_printdlg.GetPrinterDC());	//将打印机DC关联到我们创建的DC，就可以直接像普通绘图一样操作打印机绘制了
												//直接打印
		CString cstrContent(strContent.c_str());
		dc.StartDoc(_T("TestPrint"));	//开始打印流程
		dc.TextOut(0, 0, cstrContent);
		dc.EndDoc();	//结束打印流程
	}
	catch (std::exception* e)
	{
		return false;
	}
	return true;
}