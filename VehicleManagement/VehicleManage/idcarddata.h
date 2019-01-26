#ifndef IDCARDDATA_H
#define IDCARDDATA_H

#pragma pack(push, 1)
#include <windows.h>

typedef struct IDCardData {
	char Name[32];          // 姓名       
	char Sex[6];            // 性别
	char Nation[20];        // 名族
	char Born[18];          // 出生日期
	char Address[72];       // 住址
	char IDCardNo[38];      // 身份证号
	char GrantDept[32];     // 发证机关
	char UserLifeBegin[18]; // 有效开始日期
	char UserLifeEnd[18];   // 有效截止日期
	char reserved[38];      // 保留
	char PhotoFileName[256];// 照片路径

	IDCardData() { reset(); }

	IDCardData(const IDCardData &iddata) {
		memcpy(this, &iddata, sizeof(IDCardData));
	}

	IDCardData(IDCardData &&iddata) = delete;

	IDCardData& operator = (const IDCardData&iddata) {
		memcpy(this, &iddata, sizeof(IDCardData));
		return *this;
	}

	void reset() { memset(this, 0, sizeof(IDCardData)); }
}*PIDCardData;

#pragma pack(pop)
#endif