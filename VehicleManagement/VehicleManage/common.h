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
	SELECTLICENSE,
	TAXQUERY,
	TAXDECLARE,
	TAXCHECK,
	INSURANCEQUERY,
	INSURANCEDECLARE,
	INSURANCECHECK
}Caller, *PCaller;

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

//�����Ϣ�ṹ��
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

//������Ϣ�ṹ�壨������
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
	char szOwnerId[20]; //���֤��
	int nIsvalid;
}VehicleInfo, *PVehicleInfo;

//˰����Ϣ�ṹ�壨������
typedef struct _tagTaxation
{
	int nId;
	char szReceiptNo[20];
	char szTaxcode[20];
	int nUserid;
	char szOwnerId[20]; //���֤��
	char szReceiptImage[256];
	char szTaxImage[256];
	int nIsvalid;
}Taxation, *PTaxation;

bool readFile(QString qstrFileName, QString &qstrContent);

bool writeFile(QString qstrFileName, const QString qstrContent);
// �����ں���Ǵ�ӡ��������֧��Windows��
bool printFile(const QString & filePath);

bool printContent(string strContent);

#endif