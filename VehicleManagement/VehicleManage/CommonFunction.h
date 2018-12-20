#ifndef _COMMONFUNCTION_H_
#define _COMMONFUNCTION_H_

#include <windows.h>
#include <string>
#include "CommonDefine.h"

using namespace std;

namespace CommonFuncs
{
	class CommonFunction
	{
	public:
		CommonFunction(void);
		~CommonFunction(void);
	public:
		string GetCurTimeStr();													//��ȡ��ǰʱ��	
		string GetCurTimeStrToMs();												//��ȡ��ǰʱ�䣬��ȷ������	
		bool StrTime2SystemTime(const char* pStrTime, SYSTEMTIME &st);			//ʱ��ת��Ϊϵͳʱ��
		LONGLONG CompareSystemTime(SYSTEMTIME stStart, SYSTEMTIME stEnd);		//�Ƚ�����ϵͳʱ�䣬���أ�stEnd - stStart��������
		void FiletimeToStrtime(const FILETIME ft_, char *strTime);				//ʱ��ת��: time_t ת strtime
		FILETIME FriendTimeToFileTime(const char* pFriendTime);					//�Ѻ�ʱ�䵽�ļ�ʱ��
		string FileTimeToFriendTime(FILETIME fTime);							//�ļ�ʱ�䵽�Ѻ�ʱ��
		bool GetFileExtension(const char *pFileName, char *pExtension);			//���ļ����л�ȡ��׺��
		string UnifyPath(const char *pSrcPath, char chPathStyle);				//ͳһ·���е�б�ܣ�Ĭ��ͳһ�ɡ�\��
		string ReplaceBackslash(const string strSrc);							//��'\'�滻��'\\'
		string GBKToUTF8(const std::string& strGBK);							//utf8תgbk
		string UTF8ToGBK(const std::string& strUTF8);							//gbkתutf8
		char *UTF8ToAsci(const char *pUTF8);									//utf8תansi
		char *AsciToUTF8(const char *pAsci);									//ansiתutf8
		char *UnicodeToAsci(const wchar_t *pUnicode);							//unicodeתansi
		wchar_t *AsciToUnicode(const char *pAsci);								//ansiתunicode
		char *UnicodeToUTF8(const wchar_t *pUnicode);							//unicodeתutf8
		wchar_t *UTF8ToUnicode(const char *pUTF8);								//utf8תunicode
		string GetPathFromFullName(string strFullName);							//ȫ·����ȡ�ļ�·��
		string GetFileNameFromFullName(string strFullName);						//ȫ·����ȡ�ļ���
		string GetFileExtFullName(string strFullName);							//ȫ·����ȡ�ļ���׺
		string GetFileDriverFullName(string strFullName);						//ȫ·����ȡ������
		bool IsValidFileName(const char* szFilePath);							//�ж��ļ����Ƿ���Ч
		void SetWorkDir(const char *pRelateDir);								//���ù���·����ָ��Ŀ¼����pRelateDirΪNULL��������ΪEXEĿ¼��
		//�������̣����ȴ����̽��������ȴ���ʱ��ǿ�ƽ������̣�Ĭ�ϵȴ�30�룬
		//�������´��ڣ���ִ�еĳ������̨�����ͨ���ܵ��������ǰ����Ŀ���̨��
		unsigned long ExcuteProcess(const char *pCmdParam, const char *pExePath, int iTimeout);
		//�������̣����ȴ����̽��������ȴ���ʱ��ǿ�ƽ������̣�Ĭ�ϵȴ�30�룬
		//�����´��ڣ���ִ�еĳ��򵥶�ִ�У�
		unsigned long ExcuteProcess2(const char *pCmdParam, const char *pExePath, int iTimeout);
		//�������̣����õȴ��������ɹ����ؽ���ID�����򷵻�-1��Ĭ�����ش���
		//�����´��ڣ���ִ�еĳ��򵥶�ִ�У�
		unsigned long ExcuteProcessNoWait(const char *pCmdParam, const char *pExePath, int iWindowStatus);
		//�������̣����õȴ��������ɹ����ؽ��̾����������̾����Ĭ�����ش���
		//�����´��ڣ���ִ�еĳ��򵥶�ִ�У�
		HANDLE ExcuteProcessNoWait2(const char *pCmdParam, const char *pExePath, int iWindowStatus);
		string TrimHeadTail(const string strSrc);								//ȥ��ͷ��β�Ŀո�
		string TrimBetween(const string strSrc);								//ȥ������ո�ֻ��һ���ո�
		string StringSimplify(const string strSrc);								//ȥ������ո�ֻ��һ���ո񣻻��С��س����Ʊ���滻��һ���ո��
		string TrimHead(const string strSrc);									//ȥ��β���Ŀո�
		string TrimTail(const string strSrc);									//ȥ��ͷ���Ŀո�
		int SplitStr(const char* pStrSrc, const char chSeparator, char **pDestStr);	//�����ַ��������ַ�Ϊ�ָ��������ؽ�������
		int SplitStr(const char* pStrSrc, const char *pSeparator, char **pDestStr);	//�����ַ��������ַ���Ϊ�ָ��������ؽ�������
		bool WriteLog(string strContent, LogLevel iLevel);						//��¼��־
		string SizeToHumanFormat(INT64 nBytes);									//���Ի�������С
		const char* ULongToIp(const unsigned long ulValue);						//����IPת��Ϊ�ַ���IP
		string IntToString(INT64 n, UINT64 nLen = 0);							//IntתString
		UINT64 StringToInt(const string &str);									//StringתInt
	public:
		char m_szModuleFileName[MAX_PATH_LEN];
		char m_szExeFilePath[MAX_PATH_LEN];
	};
}

#endif

