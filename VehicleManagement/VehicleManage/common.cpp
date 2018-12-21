#include "common.h"

// �ϴ��ļ�
bool uploadFile(QString qstrLocalPath)
{
	try
	{
		QNetworkRequest request;
		request.setUrl(QUrl("http://127.0.0.1:7001/upload?type=image&p=1"));
		QHttpMultiPart *multiPart = new QHttpMultiPart(QHttpMultiPart::FormDataType);
		QHttpPart imagePart;
		imagePart.setHeader(QNetworkRequest::ContentTypeHeader, QVariant("image/jpeg"));//�����pngͼƬ��image/png
		imagePart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"image\"; filename=\"image.jpg\""));
		QFile *file = new QFile(qstrLocalPath);
		file->open(QIODevice::ReadOnly);
		imagePart.setBodyDevice(file);
		multiPart->append(imagePart);
		QNetworkAccessManager *accessManager = new QNetworkAccessManager();    //����Ŀ¼���ϴ��ļ�
		accessManager->setNetworkAccessible(QNetworkAccessManager::Accessible);
		accessManager->post(request, multiPart);
	}
	catch (std::exception &e)
	{
		return false;
	}
	return true;
}

// ��ȡ�ļ�
bool readFile(QString qstrFileName, QString &qstrContent) 
{
	try
	{
		QFile file(qstrFileName);
		if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
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
		//---������QFile::Truncate��ʾ���� ��ԭ�ļ�������գ�
		//--��WriteOnly��ʽ���ļ�������ڹ����ļ���û�и�txt�ļ�����ô���򽫴������ļ��������ڣ���ԭ�ļ�������գ�
		if (file.open(QFile::WriteOnly | QFile::Truncate))
		{
			//---���� QTextStream���������� ʹ��QFile����file�󶨡�
			QTextStream out(&file);
			//----���������ʽΪ: ���У������ʽ����������Ϊ��right/left�� ռ10���ַ���
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
		CPrintDialog m_printdlg(FALSE);	//��ӡ�Ի������ڻ�ȡ��ӡ����
		m_printdlg.GetDefaults();		//����ʾ��ӡ�Ի���ֱ�ӻ�ȡĬ�����ò���
										//m_printdlg.DoModal();			//��ʾ��ӡ�Ի������ò���
		CDC dc;
		dc.Attach(m_printdlg.GetPrinterDC());	//����ӡ��DC���������Ǵ�����DC���Ϳ���ֱ������ͨ��ͼһ��������ӡ��������
												//ֱ�Ӵ�ӡ
		CString cstrContent(strContent.c_str());
		dc.StartDoc(_T("TestPrint"));	//��ʼ��ӡ����
		dc.TextOut(0, 0, cstrContent);
		dc.EndDoc();	//������ӡ����
	}
	catch (std::exception* e)
	{
		return false;
	}
	return true;
}