#include "common.h"

// 上传文件
bool uploadFile(QString qstrLocalPath)
{
	try
	{
		QNetworkRequest request;
		request.setUrl(QUrl("http://127.0.0.1:7001/upload?type=image&p=1"));
		QHttpMultiPart *multiPart = new QHttpMultiPart(QHttpMultiPart::FormDataType);
		QHttpPart imagePart;
		imagePart.setHeader(QNetworkRequest::ContentTypeHeader, QVariant("image/jpeg"));//如果是png图片填image/png
		imagePart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"image\"; filename=\"image.jpg\""));
		QFile *file = new QFile(qstrLocalPath);
		file->open(QIODevice::ReadOnly);
		imagePart.setBodyDevice(file);
		multiPart->append(imagePart);
		QNetworkAccessManager *accessManager = new QNetworkAccessManager();    //往该目录中上传文件
		accessManager->setNetworkAccessible(QNetworkAccessManager::Accessible);
		accessManager->post(request, multiPart);
	}
	catch (std::exception &e)
	{
		return false;
	}
	return true;
}

// 读取文件
bool readFile(QString qstrFileName, QString &qstrContent) {
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