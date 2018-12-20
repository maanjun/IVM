#ifndef _COMMON_H_
#define _COMMON_H_

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QFile>
#include <QHttpMultiPart>
#include <QHttpPart>
#include <QTextStream>
#include <QFile>

#include "CommonFunction.h"


using namespace CommonFuncs;

typedef enum _Type
{
	CHECKVEHICLE = 0,
	SELECTLICENSE
}Type, *PType;

bool uploadFile(QString qstrLocalPath);

bool readFile(QString qstrFileName, QString &qstrContent);

#endif