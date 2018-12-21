#ifndef _COMMON_H_
#define _COMMON_H_

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // ĳЩ CString ���캯��������ʽ��

// �ر� MFC ��ĳЩ�����������ɷ��ĺ��Եľ�����Ϣ������
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC ��������ͱ�׼���
#include <afxext.h>         // MFC ��չ


#include <afxdisp.h>        // MFC �Զ�����



#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC �� Internet Explorer 4 �����ؼ���֧��
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // MFC �� Windows �����ؼ���֧��
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // �������Ϳؼ����� MFC ֧��


#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QFile>
#include <QHttpMultiPart>
#include <QHttpPart>
#include <QTextStream>
#include <QFile>
#include <QPrinter>
#include <QFileInfo>

#include "CommonFunction.h"

using namespace CommonFuncs;

typedef enum _Type
{
	CHECKVEHICLE = 0,
	SELECTLICENSE
}Type, *PType;

bool uploadFile(QString qstrLocalPath);

bool readFile(QString qstrFileName, QString &qstrContent);

bool writeFile(QString qstrFileName, const QString qstrContent);
// �����ں���Ǵ�ӡ��������֧��Windows��
bool printFile(const QString & filePath);

bool printContent(string strContent);

#endif