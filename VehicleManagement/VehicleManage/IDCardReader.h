#ifndef IDCARDREADER_H
#define IDCARDREADER_H
#include <windows.h>

//int IDCardReader::UCommand1(BYTE *pCmd, int IDCardReader::* parg0, int IDCardReader::* parg1,  int IDCardReader::* parg2)
typedef int (PASCAL *pUCmmand1)(BYTE *pcmd, int *p1, int *p2, int *p3);
typedef int(PASCAL *pGetName)(BYTE *buff);
typedef int(PASCAL *pGetSex)(BYTE *buff);
typedef int(PASCAL *pGetFolk)(BYTE *buff);
typedef int(PASCAL *pGetBirth)(BYTE *buff);
typedef int(PASCAL *pGetAddr)(BYTE *buff);
typedef int(PASCAL *pGetIDNum)(BYTE *buff);
typedef int(PASCAL *pGetDep)(BYTE *buff);
typedef int(PASCAL *pGetBegin)(BYTE *buff);
typedef int(PASCAL *pGetEnd)(BYTE *buff);
typedef int(PASCAL *pGetNewAddr)(BYTE *buff);
typedef int(PASCAL *pGetPicPath)(BYTE *buff);

const int CMD_IDCARD_INIT = 0x41;
const int CMD_IDCARD_FINI = 0x42;
const int CMD_IDCARD_CHECK = 0x43;
const int CMD_IDCARD_RBASE = 0x44;
const int CMD_IDCARD_NADDR = 0x45;
const int CMD_IDCARD_RONLC = 0x46;//只读文字
const int CMD_IDCARD_RBASENP = 0x47;//读基本信息，但不解图片

class IDCardReader
{
public:
	bool init(int comPort = 0);
	bool fini();
	int GetName(BYTE *buff);
	int GetSex(BYTE *buff);
	int GetFolk(BYTE *buff);
	int GetBirth(BYTE *buff);
	int GetAddr(BYTE *buff);
	int GetIDNum(BYTE *buff);
	int GetDep(BYTE *buff);
	int GetBegin(BYTE *buff);
	int GetEnd(BYTE *buff);
	int GetNewAddr(BYTE *buff);
	int GetPicPath(BYTE *buff);
public:
	IDCardReader();
	~IDCardReader();
private:
	HINSTANCE hModule;
	pUCmmand1 mycmd;
	pGetName	pGetName_;
	pGetSex	pGetSex_;
	pGetFolk pGetFolk_;
	pGetBirth	pGetBirth_;
	pGetAddr	pGetAddr_;
	pGetIDNum	pGetIDNum_;
	pGetDep	pGetDep_;
	pGetBegin pGetBegin_;
	pGetEnd	pGetEnd_;
	pGetNewAddr	pGetNewAddr_;
	pGetPicPath	pGetPicPath_;
	int port_;
	BOOL LoadDll();
	void FreeDll();

};
#endif
