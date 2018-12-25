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

#include <QFile>
#include <QTextStream>
#include <QPrinter>
#include <QFileInfo>
#include <QDebug>

#include "CommonFunction.h"

using namespace CommonFuncs;

typedef enum _Caller
{
	CHECKVEHICLE = 0,
	SELECTLICENSE
}Caller, *PCaller;

typedef enum _Stage
{
	HOMEPAGE = 0,
	CHECKID,
	VEHICLEINCO,
	CHECKRECEIPT,
	INPUTDONE,
	CHECKIDSELECT,
	SELECTED
}Stage, *PStage;

//身份信息结构体
typedef struct _tagIdInfo
{
	int nId;
	char szUsername[80];
	int nGender;
	char szNation[40];
	char szBirthday[20];
	char szAddress[256];
	char szNumber[20];
	char szAuthority[256];
	char szValidSection[32];
	int nStage;
	int nIsvalid;
	char szHeadimage[256];
}IdInfo, *PIdInfo;

//车辆信息结构体（待定）
typedef struct _tagVehicleInfo
{
	int nId;
	char szVehicleId[20];
	char szManufactureDate[16];
	char szManufacturer[80];
	char szManufactureAddress[256];
	char szColor[20];
	char szModel[20];
	char szBrand[40];
	int nUserid;
	char szOwnerId[20]; //身份证号
	int nIsvalid;
}VehicleInfo, *PVehicleInfo;

//税费信息结构体（待定）
typedef struct _tagTaxation
{
	int nId;
	char szReceiptNo[20];
	char szTaxcode[20];
	int nUserid;
	char szOwnerId[20]; //身份证号
	char szReceiptImage[256];
	char szTaxImage[256];
	int nIsvalid;
}Taxation, *PTaxation;

bool readFile(QString qstrFileName, QString &qstrContent);

bool writeFile(QString qstrFileName, const QString qstrContent);
// 调用内核外壳打印函数（仅支持Windows）
bool printFile(const QString & filePath);

bool printContent(string strContent);

#endif