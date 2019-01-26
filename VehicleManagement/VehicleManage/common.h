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

typedef enum _CheckIDCaller
{
	CHECKVEHICLE = 0,
	SELECTLICENSE,
	TAXQUERY,
	TAXDECLARE,
	TAXCHECK,
	INSURANCEQUERY,
	INSURANCEDECLARE,
	INSURANCECHECK,
	MORTGAGE_SELECT,
	MORTGAGE_INPUT
}CheckIDCaller, *PCheckIDCaller;

typedef enum _FaceRecognitionCaller
{
	PAYTAXES = 0,
	PAYINSURANCES,
	MORTGAGE
}FaceRecognitionCaller, *PFaceRecognitionCaller;

typedef enum _Stage
{
	VEHICLEMANAGE = 0,
	CHECKID,
	VEHICLEINCO,
	CHECKRECEIPT,
	INPUTDONE,
	CHECKIDSELECT,
	SELECTED,
	TAXQUERIED
}Stage, *PStage;

typedef enum _TipLevel
{
	INFO_TIP = 0,
	WARN_TIP,
	ERROR_TIP
}TipLevel, *PTipLevel;

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

	_tagIdInfo() { reset(); }

	_tagIdInfo(const _tagIdInfo &idInfo) {
		memcpy(this, &idInfo, sizeof(_tagIdInfo));
	}

	_tagIdInfo(_tagIdInfo &&idInfo) = delete;

	_tagIdInfo& operator = (const _tagIdInfo&idInfo) {
		memcpy(this, &idInfo, sizeof(_tagIdInfo));
		return *this;
	}

	void reset() { memset(this, 0, sizeof(_tagIdInfo)); }
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

	_tagVehicleInfo() { reset(); }

	_tagVehicleInfo(const _tagVehicleInfo &vehicleInfo) {
		memcpy(this, &vehicleInfo, sizeof(_tagVehicleInfo));
	}

	_tagVehicleInfo(_tagVehicleInfo &&vehicleInfo) = delete;

	_tagVehicleInfo& operator = (const _tagVehicleInfo&vehicleInfo) {
		memcpy(this, &vehicleInfo, sizeof(_tagVehicleInfo));
		return *this;
	}

	void reset() { memset(this, 0, sizeof(_tagVehicleInfo)); }
}VehicleInfo, *PVehicleInfo;

//车辆信息结构体（待定）
typedef struct _tagVehicle
{
	int nId;
	char clztxx[256];
	char gbthps[256];
	char pl[256];
	char zchgzbh[256];
	char wkg[256];
	char fzrq[256];
	char clzzqymc[256];
	char clfl[256];
	char clxh[256];
	char clpp[256];
	char clmcchar[256];
	char hxnbg[256];
	char qyid[256];
	char csys[256];
	char dpxh[256];
	char zqyzzl[256];
	char dpid[256];
	char zgcs[256];
	char dpbh[256];
	char edzk[256];
	char clsbdh[256];
	char fdjxh[256];
	char fdjh[256];
	char rlzl[256];
	char clscdwmc[256];
	char pfbz[256];
	char gl[256];
	char zxxs[256];
	char qlj[256];
	char hxnbk[256];
	char cpscdz[256];
	char lts[256];
	char zs[256];
	char ltgg[256];
	char zzl[256];
	char zj[256];
	char zzllyxs[256];
	char zh[256];
	char wkc[256];
	char edzzl[256];
	char wkk[256];
	char hxnbc[256];
	char zbzl[256];
	char bgcazzdyxzzl[256];
	char jsszcrs[256];
	char clzzrq[256];
	char bz[256];
	char qybz[256];
	char yh[256];
	char zxzs[256];
	char ggpc[256];
	int nUserid;
	char szOwnerId[20]; //身份证号
	int nIsvalid;

	_tagVehicle() { reset(); }

	_tagVehicle(const _tagVehicle &vehicle) {
		memcpy(this, &vehicle, sizeof(_tagVehicle));
	}

	_tagVehicle(_tagVehicle &&vehicle) = delete;

	_tagVehicle& operator = (const _tagVehicle&vehicle) {
		memcpy(this, &vehicle, sizeof(_tagVehicle));
		return *this;
	}

	void reset() { memset(this, 0, sizeof(_tagVehicle)); }
}Vehicle, *PVehicle;

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

	_tagTaxation() { reset(); }

	_tagTaxation(const _tagTaxation &taxation) {
		memcpy(this, &taxation, sizeof(_tagTaxation));
	}

	_tagTaxation(_tagTaxation &&taxation) = delete;

	_tagTaxation& operator = (const _tagTaxation&taxation) {
		memcpy(this, &taxation, sizeof(_tagTaxation));
		return *this;
	}

	void reset() { memset(this, 0, sizeof(_tagTaxation)); }
}Taxation, *PTaxation;

bool readFile(QString qstrFileName, QString &qstrContent);

bool writeFile(QString qstrFileName, const QString qstrContent);
// 调用内核外壳打印函数（仅支持Windows）
bool printFile(const QString & filePath);

bool printContent(string strContent);

#endif