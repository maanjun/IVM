#pragma pack(push, 1)
#include <windows.h>

typedef struct IDCardData {
	char Name[32];          // ����       
	char Sex[6];            // �Ա�
	char Nation[20];        // ����
	char Born[18];          // ��������
	char Address[72];       // סַ
	char IDCardNo[38];      // ���֤��
	char GrantDept[32];     // ��֤����
	char UserLifeBegin[18]; // ��Ч��ʼ����
	char UserLifeEnd[18];   // ��Ч��ֹ����
	char reserved[38];      // ����
	char PhotoFileName[255];// ��Ƭ·��

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