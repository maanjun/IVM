#ifndef _COMMON_H_
#define _COMMON_H_

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // 某些 CString 构造函数将是显式的

// 关闭 MFC 对某些常见但经常可放心忽略的警告消息的隐藏
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC 核心组件和标准组件
#include <afxext.h>         // MFC 扩展


#include <afxdisp.h>        // MFC 自动化类



#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC 对 Internet Explorer 4 公共控件的支持
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // MFC 对 Windows 公共控件的支持
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // 功能区和控件条的 MFC 支持


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
// 调用内核外壳打印函数（仅支持Windows）
bool printFile(const QString & filePath);

bool printContent(string strContent);

#endif