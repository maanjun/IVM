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
		string GetCurTimeStr();													//获取当前时间	
		string GetCurTimeStrToMs();												//获取当前时间，精确到毫秒	
		bool StrTime2SystemTime(const char* pStrTime, SYSTEMTIME &st);			//时间转换为系统时间
		LONGLONG CompareSystemTime(SYSTEMTIME stStart, SYSTEMTIME stEnd);		//比较两个系统时间，返回（stEnd - stStart）毫秒数
		void FiletimeToStrtime(const FILETIME ft_, char *strTime);				//时间转换: time_t 转 strtime
		FILETIME FriendTimeToFileTime(const char* pFriendTime);					//友好时间到文件时间
		string FileTimeToFriendTime(FILETIME fTime);							//文件时间到友好时间
		bool GetFileExtension(const char *pFileName, char *pExtension);			//从文件名中获取后缀名
		string UnifyPath(const char *pSrcPath, char chPathStyle);				//统一路径中的斜杠，默认统一成‘\’
		string ReplaceBackslash(const string strSrc);							//把'\'替换成'\\'
		string GBKToUTF8(const std::string& strGBK);							//utf8转gbk
		string UTF8ToGBK(const std::string& strUTF8);							//gbk转utf8
		char *UTF8ToAsci(const char *pUTF8);									//utf8转ansi
		char *AsciToUTF8(const char *pAsci);									//ansi转utf8
		char *UnicodeToAsci(const wchar_t *pUnicode);							//unicode转ansi
		wchar_t *AsciToUnicode(const char *pAsci);								//ansi转unicode
		char *UnicodeToUTF8(const wchar_t *pUnicode);							//unicode转utf8
		wchar_t *UTF8ToUnicode(const char *pUTF8);								//utf8转unicode
		string GetPathFromFullName(string strFullName);							//全路径获取文件路径
		string GetFileNameFromFullName(string strFullName);						//全路径获取文件名
		string GetFileExtFullName(string strFullName);							//全路径获取文件后缀
		string GetFileDriverFullName(string strFullName);						//全路径获取驱动器
		bool IsValidFileName(const char* szFilePath);							//判断文件名是否有效
		void SetWorkDir(const char *pRelateDir);								//重置工作路径到指定目录，若pRelateDir为NULL，则重置为EXE目录。
		//启动进程，并等待进程结束，若等待超时则强制结束进程，默认等待30秒，
		//不创建新窗口，所执行的程序控制台输出会通过管道输出到当前程序的控制台，
		unsigned long ExcuteProcess(const char *pCmdParam, const char *pExePath, int iTimeout);
		//启动进程，并等待进程结束，若等待超时则强制结束进程，默认等待30秒，
		//创建新窗口，所执行的程序单独执行；
		unsigned long ExcuteProcess2(const char *pCmdParam, const char *pExePath, int iTimeout);
		//启动进程，不用等待，启动成功返回进程ID，否则返回-1，默认隐藏窗口
		//创建新窗口，所执行的程序单独执行；
		unsigned long ExcuteProcessNoWait(const char *pCmdParam, const char *pExePath, int iWindowStatus);
		//启动进程，不用等待，启动成功返回进程句柄，否则进程句柄，默认隐藏窗口
		//创建新窗口，所执行的程序单独执行；
		HANDLE ExcuteProcessNoWait2(const char *pCmdParam, const char *pExePath, int iWindowStatus);
		string TrimHeadTail(const string strSrc);								//去掉头和尾的空格
		string TrimBetween(const string strSrc);								//去掉多个空格只留一个空格
		string StringSimplify(const string strSrc);								//去掉多个空格只留一个空格；换行、回车、制表符替换成一个空格等
		string TrimHead(const string strSrc);									//去掉尾部的空格
		string TrimTail(const string strSrc);									//去掉头部的空格
		int SplitStr(const char* pStrSrc, const char chSeparator, char **pDestStr);	//解析字符串，以字符为分隔符，返回解析个数
		int SplitStr(const char* pStrSrc, const char *pSeparator, char **pDestStr);	//解析字符串，以字符串为分隔符，返回解析个数
		bool WriteLog(string strContent, LogLevel iLevel);						//记录日志
		bool WriteFile(string strContent, string strFilepath);					//写文件
		string SizeToHumanFormat(INT64 nBytes);									//人性化描述大小
		const char* ULongToIp(const unsigned long ulValue);						//数字IP转换为字符串IP
		string IntToString(INT64 n, UINT64 nLen = 0);							//Int转String
		UINT64 StringToInt(const string &str);									//String转Int
	public:
		char m_szModuleFileName[MAX_PATH_LEN];
		char m_szExeFilePath[MAX_PATH_LEN];
	};
}

#endif

