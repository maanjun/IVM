#include "IDCardReader.h"


IDCardReader::IDCardReader()
{
}


IDCardReader::~IDCardReader()
{
}

bool IDCardReader::init(int comPort)
{
	hModule = NULL;
	BOOL b = LoadDll();
	if (b)
	{
		int para1, para2;
		BYTE cmd = CMD_IDCARD_INIT;
		para1 = 8811;
		para2 = 9986;
		int nRet;
		port_ = comPort;
		nRet = mycmd(&cmd, &comPort, &para1, &para2);
		printf(" ret = %d \n", nRet);
		cmd = CMD_IDCARD_RBASE;	
		para1 = 8811;
		para2 = 9986;
		nRet = mycmd(&cmd, &port_, &para1, &para2);
		printf(" ret2 = %d \n", nRet);

	}
	return b;
}
bool IDCardReader::fini(){
	if (hModule != NULL)
	{ 
		int para, para1, para2;
		BYTE cmd = CMD_IDCARD_FINI;
		para = port_;
		para1 = 8811;
		para2 = 9986;
		int nRet;
		mycmd(&cmd, &para, &para1, &para2);
		FreeDll();
	}
	
	return true;
}
int IDCardReader::GetName(BYTE *buff)
{
	return pGetName_(buff);
}
int IDCardReader::GetSex(BYTE *buff){
	return pGetSex_(buff);
}

int IDCardReader::GetFolk(BYTE *buff){
	return pGetFolk_(buff);
}
int IDCardReader::GetBirth(BYTE *buff){
	return pGetBirth_(buff);
}
int IDCardReader::GetAddr(BYTE *buff){
	return pGetAddr_(buff);
}
int IDCardReader::GetIDNum(BYTE *buff){
	return pGetIDNum_(buff);
}
int IDCardReader::GetDep(BYTE *buff){
	return pGetDep_(buff);
}
int IDCardReader::GetBegin(BYTE *buff){
	return pGetBegin_(buff);
}
int IDCardReader::GetEnd(BYTE *buff){
	return pGetEnd_(buff);
}
int IDCardReader::GetNewAddr(BYTE *buff){
	return pGetNewAddr_(buff);
}
int IDCardReader::GetPicPath(BYTE *buff){
	return pGetPicPath_(buff);
}

BOOL IDCardReader::LoadDll() {
	hModule = LoadLibrary(_T("RdCard.dll"));
	if (hModule == NULL)
	{
		//AfxMessageBox(_T("º”‘ÿ∂ØÃ¨ø‚ ß∞‹"));
		return FALSE;
	}
	mycmd = (pUCmmand1)GetProcAddress(hModule, "UCommand1");
	pGetName_ = (pGetName)GetProcAddress(hModule, "GetName");
	pGetSex_ = (pGetSex)GetProcAddress(hModule, "GetSex");
	pGetFolk_ = (pGetFolk)GetProcAddress(hModule, "GetFolk");
	pGetBirth_ = (pGetBirth)GetProcAddress(hModule, "GetBirth");
	pGetAddr_ = (pGetAddr)GetProcAddress(hModule, "GetAddr");
	pGetIDNum_ = (pGetIDNum)GetProcAddress(hModule, "GetIDNum");
	pGetDep_ = (pGetDep)GetProcAddress(hModule, "GetDep");
	pGetBegin_ = (pGetBegin)GetProcAddress(hModule, "GetBegin");
	pGetEnd_ = (pGetEnd)GetProcAddress(hModule, "GetEnd");
	pGetNewAddr_ = (pGetNewAddr)GetProcAddress(hModule, "GetNewAddr");
	pGetPicPath_ = (pGetPicPath)GetProcAddress(hModule, "GetPicPath");

	if ((mycmd == NULL))
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}
void IDCardReader::FreeDll() 
{
	if (hModule != NULL)
	{
		FreeLibrary(hModule);
		hModule = NULL;
	}

}
