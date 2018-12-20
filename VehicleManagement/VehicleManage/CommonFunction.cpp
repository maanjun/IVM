#include "CommonFunction.h"
#include <fstream>
#include <sstream>

#pragma comment(lib, "Dbghelp.lib")

namespace CommonFuncs
{
	CommonFunction::CommonFunction(void)
	{
		memset(m_szModuleFileName, 0, MAX_PATH_LEN);
		memset(m_szExeFilePath, 0, MAX_PATH_LEN);
		GetModuleFileNameA(NULL, m_szModuleFileName, MAX_PATH_LEN);
		strcpy_s(m_szExeFilePath, MAX_PATH_LEN, GetPathFromFullName(m_szModuleFileName).c_str());
	}

	CommonFunction::~CommonFunction(void)
	{
	}

	string CommonFunction::GetCurTimeStr()
	{
		char szCurrentTime[MAX_TIME_LEN] = {0};
		SYSTEMTIME stLocalTime;
		GetLocalTime(&stLocalTime);
		sprintf(szCurrentTime, "%04d-%02d-%02d %02d:%02d:%02d", stLocalTime.wYear, stLocalTime.wMonth, stLocalTime.wDay, stLocalTime.wHour, stLocalTime.wMinute, stLocalTime.wSecond);
		return szCurrentTime;
	}

	string CommonFunction::GetCurTimeStrToMs()
	{
		char szCurrentTime[MAX_TIME_LEN] = {0};
		SYSTEMTIME stLocalTime;
		GetLocalTime(&stLocalTime);
		sprintf(szCurrentTime, "%04d-%02d-%02d %02d:%02d:%02d %03d", stLocalTime.wYear, stLocalTime.wMonth, stLocalTime.wDay, stLocalTime.wHour, stLocalTime.wMinute, stLocalTime.wSecond, stLocalTime.wMilliseconds);
		return szCurrentTime;
	}

	bool CommonFunction::StrTime2SystemTime(const char* pStrTime, SYSTEMTIME &st)
	{
		//传入字符串时间格式: 2017-05-12 12:45:56 023 或者 2017-05-12 12:45:56
		bool bResult = false;
		if (pStrTime && strlen(pStrTime))
		{
			int nSpaceCount = 0;
			//统计空格的个数
			while (*pStrTime++)
			{
				if (' ' == *pStrTime)
				{
					++nSpaceCount;
				}
			}

			if (2 == nSpaceCount)
			{
				if (7 == sscanf(pStrTime, "%d-%d-%d %d:%d:%d %d", &st.wYear, &st.wMonth, &st.wDay, &st.wHour, &st.wMinute, &st.wSecond, &st.wMilliseconds))
				{
					bResult = true;
				}
			}
			else if (1 == nSpaceCount)
			{
				if (6 == sscanf(pStrTime, "%d-%d-%d %d:%d:%d %d", &st.wYear, &st.wMonth, &st.wDay, &st.wHour, &st.wMinute, &st.wSecond))
				{
					st.wMilliseconds = 0;
					bResult = true;
				}
			}
		}
		return bResult;
	}

	LONGLONG CommonFunction::CompareSystemTime(SYSTEMTIME stStart, SYSTEMTIME stEnd)
	{
		FILETIME fltmStart = {0};
		SystemTimeToFileTime(&stStart, &fltmStart);
		FILETIME fltmEnd = {0};
		SystemTimeToFileTime(&stEnd, &fltmEnd);
		LONGLONG llTimeStart = (fltmStart.dwHighDateTime << 32) + fltmStart.dwLowDateTime;
		LONGLONG llTimeEnd = (fltmEnd.dwHighDateTime << 32) + fltmEnd.dwLowDateTime;
		return (llTimeEnd - llTimeStart);
	}

	void CommonFunction::FiletimeToStrtime(const FILETIME ft_, char *strTime)//时间转换: time_t 转 strtime
	{
		SYSTEMTIME  sysTime = {0};
		FileTimeToSystemTime(&ft_, &sysTime);
		if(sysTime.wHour + 8 < 24)
		{
			sprintf(strTime, "%04d-%02d-%02d %02d:%02d:%02d",
				sysTime.wYear,
				sysTime.wMonth,
				sysTime.wDay,
				sysTime.wHour + 8, //东八区
				sysTime.wMinute,
				sysTime.wSecond);
		}
		else
		{
			sprintf(strTime, "%04d-%02d-%02d %02d:%02d:%02d",
				sysTime.wYear,
				sysTime.wMonth,
				sysTime.wDay + 1,
				sysTime.wHour + 8 - 24, //东八区
				sysTime.wMinute,
				sysTime.wSecond);
		}
	}

	//友好时间到文件时间，友好时间格式XXXX-XX-XX XX:XX:XX，后期可以增加
	//如果失败，则返回1970-01-01 00:00:00
	FILETIME CommonFunction::FriendTimeToFileTime(const char* pFriendTime)
	{
		SYSTEMTIME SysTime = {0};
		FILETIME FileTime = {0};
		FILETIME LocalFileTime = {0}; //当地时间
		SysTime.wYear = 1970;
		SysTime.wMonth = 1;
		SysTime.wDay = 1;
		SysTime.wHour = 0;
		SysTime.wMinute = 0;
		SysTime.wSecond = 0;
		SysTime.wMilliseconds = 0; //must init

		sscanf(pFriendTime, "%d-%d-%d %d:%d:%d", &(SysTime.wYear), &(SysTime.wMonth), &(SysTime.wDay), &(SysTime.wHour), &(SysTime.wMinute), &(SysTime.wSecond));
		SystemTimeToFileTime(&SysTime, &LocalFileTime);

		LocalFileTimeToFileTime(&LocalFileTime, &FileTime);
		return FileTime;
	}

	//文件时间到友好时间，友好时间格式XXXX/XX/XX XX:XX:XX
	string CommonFunction::FileTimeToFriendTime(FILETIME fTime)
	{
		SYSTEMTIME SysTime = {0};
		string strTime;

		FileTimeToSystemTime(&fTime, &SysTime);
		strTime = IntToString(SysTime.wYear, 4) + "-" + IntToString(SysTime.wMonth, 2) + "-" + IntToString(SysTime.wDay, 2) + " " + IntToString(SysTime.wHour, 2) + ":" + IntToString(SysTime.wMinute, 2) + ":" + IntToString(SysTime.wSecond, 2);

		return strTime;
	}

	bool CommonFunction::GetFileExtension(const char *pFileName, char *pExtension)  //从文件名中获取后缀名
	{
		int len = strlen(pFileName);
		if (0 == len)
		{
			return false;
		}
		int j = 0;
		for (int i = len - 1; i >= 0; i--)
		{
			if ('.' == pFileName[i])
			{
				while (i < len)
					pExtension[j++] = pFileName[i++];
				pExtension[j] = '\0';
				return true;
			}
		}

		memset(pExtension, 0, j);
		return false;
	}

	string CommonFunction::UnifyPath(const char *pSrcPath, char chPathStyle = '\\')
	{
		string strDst;
		if(pSrcPath &&(chPathStyle == 0x5c || chPathStyle == 0x2f))
		{
			size_t sizePathLen = strlen(pSrcPath);
			char *pUnifyPath = new char[sizePathLen + 2];
			memset(pUnifyPath, 0, sizePathLen + 2);
			memcpy(pUnifyPath, pSrcPath, sizePathLen);
			for(size_t i = 0; i< sizePathLen; ++i)
			{
				if(pUnifyPath[i] == 0x2f || pUnifyPath[i] == 0x5c)
				{
					pUnifyPath[i] = chPathStyle;
				}
			}
			strDst = pUnifyPath;
			delete []pUnifyPath;
		}
		return strDst;
	}

	string CommonFunction::ReplaceBackslash(const string strSrc)
	{
		string strTmp = strSrc;
		for (unsigned int i = 0; i < strTmp.size(); ++i)
		{
			if ('\\' == strTmp[i])
			{
				strTmp.replace(i, 1, "\\\\");
				++i;
			}
		}
		return strTmp;
	}

	string CommonFunction::GBKToUTF8(const std::string& strGBK)
	{
		string strOutUTF8 = "";
		WCHAR * str1;
		int n = MultiByteToWideChar(CP_ACP, 0, strGBK.c_str(), -1, NULL, 0);
		str1 = new WCHAR[n];
		MultiByteToWideChar(CP_ACP, 0, strGBK.c_str(), -1, str1, n);
		n = WideCharToMultiByte(CP_UTF8, 0, str1, -1, NULL, 0, NULL, NULL);
		char * str2 = new char[n];
		WideCharToMultiByte(CP_UTF8, 0, str1, -1, str2, n, NULL, NULL);
		strOutUTF8 = str2;
		delete[]str1;
		str1 = NULL;
		delete[]str2;
		str2 = NULL;
		return strOutUTF8;
	}

	string CommonFunction::UTF8ToGBK(const std::string& strUTF8)
	{
		int len = MultiByteToWideChar(CP_UTF8, 0, strUTF8.c_str(), -1, NULL, 0);
		WCHAR * wszGBK = new WCHAR[len + 1];
		memset(wszGBK, 0, len * 2 + 2);
		MultiByteToWideChar(CP_UTF8, 0, strUTF8.c_str(), -1, wszGBK, len);

		len = WideCharToMultiByte(CP_ACP, 0, wszGBK, -1, NULL, 0, NULL, NULL);
		char *szGBK = new char[len + 1];
		memset(szGBK, 0, len + 1);
		WideCharToMultiByte(CP_ACP,0, wszGBK, -1, szGBK, len, NULL, NULL);
		//strUTF8 = szGBK;
		std::string strTemp(szGBK);
		delete[]szGBK;
		delete[]wszGBK;
		return strTemp;
	}

	char *CommonFunction::UTF8ToAsci(const char *pUTF8)
	{
		wchar_t *pUnicode = CommonFunction::UTF8ToUnicode(pUTF8);
		if (NULL == pUnicode)
		{
			return NULL;
		}

		char *pAsci = CommonFunction::UnicodeToAsci(pUnicode);
		delete [] pUnicode;

		return pAsci;
	}

	char *CommonFunction::AsciToUTF8(const char *pAsci)
	{
		wchar_t *pUnicode = CommonFunction::AsciToUnicode(pAsci);
		if (NULL == pUnicode)
		{
			return NULL;
		}

		char *pUtf8 = CommonFunction::UnicodeToUTF8(pUnicode);
		delete [] pUnicode;

		return pUtf8;
	}

	char *CommonFunction::UnicodeToAsci(const wchar_t *pUnicode)
	{
		if (NULL == pUnicode)
		{
			return NULL;
		}

		int nAsciLen = WideCharToMultiByte(CP_ACP, 0, pUnicode, -1, NULL, 0, NULL, NULL);
		char *pAsci = new char[nAsciLen + 1];
		WideCharToMultiByte(CP_ACP, 0, pUnicode, -1, pAsci, nAsciLen, NULL, NULL);

		return pAsci;
	}

	wchar_t *CommonFunction::AsciToUnicode(const char *pAsci)
	{
		if (NULL == pAsci)
		{
			return NULL;
		}

		int nUnicodeLen = MultiByteToWideChar(CP_ACP, 0, pAsci, -1, NULL, 0);
		wchar_t *pUniCode = new wchar_t[nUnicodeLen + 1]; 
		MultiByteToWideChar(CP_ACP, 0, pAsci, -1, pUniCode, nUnicodeLen);

		return pUniCode;
	}

	char *CommonFunction::UnicodeToUTF8(const wchar_t *pUnicode)
	{
		if (NULL == pUnicode)
		{
			return NULL;
		}

		int nUTF8Len = WideCharToMultiByte(CP_UTF8, 0, pUnicode, -1, NULL, 0, NULL, NULL);
		char *pUtf8 = new char[nUTF8Len + 1];
		WideCharToMultiByte(CP_UTF8, 0, pUnicode, -1, pUtf8, nUTF8Len, NULL, NULL);

		return pUtf8;
	}

	wchar_t *CommonFunction::UTF8ToUnicode(const char *pUTF8)
	{
		if (NULL == pUTF8)
		{
			return NULL;
		}

		int nUnicodeLen = MultiByteToWideChar(CP_UTF8, 0, pUTF8, -1, NULL, 0);
		wchar_t *pUniCode = new wchar_t[nUnicodeLen + 1]; 
		MultiByteToWideChar(CP_UTF8, 0, pUTF8, -1, pUniCode, nUnicodeLen);

		return pUniCode;
	}

	string CommonFunction::GetPathFromFullName(string strFullName) //全路径获取文件路径
	{
		string strFilePath;
		char szDriver[4] = {0};
		char szDir[MAX_PATH_LEN] = {0};
		char szFileName[MAX_PATH_LEN] = {0};
		char szFileExt[MAX_EXTENSION_LEN] = {0};
		_splitpath(strFullName.c_str(), szDriver, szDir, szFileName, szFileExt);
		strFilePath = szDriver;
		strFilePath += szDir;
		return strFilePath;
	}

	string CommonFunction::GetFileNameFromFullName(string strFullName) //全路径获取文件名
	{
		string strFileName;
		char szDriver[4] = {0};
		char szDir[MAX_PATH_LEN] = {0};
		char szFileName[MAX_PATH_LEN] = {0};
		char szFileExt[MAX_EXTENSION_LEN] = {0};
		_splitpath(strFullName.c_str(), szDriver, szDir, szFileName, szFileExt);
		strFileName = szFileName;
		strFileName += szFileExt;
		return strFileName;
	}

	string CommonFunction::GetFileExtFullName(string strFullName) //全路径获取文件后缀
	{
		string strFileExt;
		char szDriver[4] = {0};
		char szDir[MAX_PATH_LEN] = {0};
		char szFileName[MAX_PATH_LEN] = {0};
		char szFileExt[MAX_EXTENSION_LEN] = {0};
		_splitpath(strFullName.c_str(), szDriver, szDir, szFileName, szFileExt);
		strFileExt = szFileExt;
		return strFileExt;
	}

	string CommonFunction::GetFileDriverFullName(string strFullName)				//全路径获取驱动器
	{
		string strDriver;
		char szDriver[4] = {0};
		char szDir[MAX_PATH_LEN] = {0};
		char szFileName[MAX_PATH_LEN] = {0};
		char szFileExt[MAX_EXTENSION_LEN] = {0};
		_splitpath(strFullName.c_str(), szDriver, szDir, szFileName, szFileExt);
		strDriver = szDriver;
		strDriver = strDriver + "\\";
		return strDriver;
	}

	bool CommonFunction::IsValidFileName(const char* szFilePath)
	{
		//为空、长度为0、首字符为空格
		if (!szFilePath || !strlen(szFilePath) || ' ' == *szFilePath)
		{
			return false;
		}
		string strFilePath(szFilePath);
		unsigned int uiLength = strFilePath.length();
		for (unsigned int i = 0; i < uiLength; ++i)
		{
			unsigned char ucChTmp = (unsigned char)strFilePath[i];
			if (0 < ucChTmp && 32 > ucChTmp)
			{
				return false;
			}
			else if (34 == ucChTmp || 42 == ucChTmp || 47 == ucChTmp || 124 == ucChTmp || 127 == ucChTmp)
			{
				return false;
			}
			else if (58 == ucChTmp || 60 == ucChTmp || 62 == ucChTmp || 63 == ucChTmp || 92 == ucChTmp)
			{
				return false;
			}
		}
		return true;
	}

	unsigned long CommonFunction::ExcuteProcess(const char *pCmdParam, const char *pExePath, int iTimeout = 30*1000)
	{
		unsigned long uExitCode = -1;
		if(pCmdParam)
		{
			do 
			{
				STARTUPINFOA startupinfo;
				PROCESS_INFORMATION processinfo;
				ZeroMemory(&startupinfo, sizeof(startupinfo));
				startupinfo.cb = sizeof(startupinfo);
				startupinfo.dwFlags = STARTF_USESHOWWINDOW;
				startupinfo.wShowWindow = SW_HIDE;
				ZeroMemory(&processinfo, sizeof(processinfo));
				char* pParams = new char[strlen(pCmdParam) + 10];
				memset(pParams, 0, strlen(pCmdParam) + 10);
				strcpy(pParams, pCmdParam);	
				if(!CreateProcessA(pExePath, (LPSTR)pParams, NULL, NULL, FALSE, 0, NULL, NULL, &startupinfo, &processinfo)) 
				{
					break;
				}
				delete []pParams;
				if (WAIT_TIMEOUT == WaitForSingleObject(processinfo.hProcess, iTimeout))
				{
					//终止线程，指定退出码为-1，否则一直占用资源，无法删除
					TerminateProcess(processinfo.hProcess, -1);
				}
				GetExitCodeProcess(processinfo.hProcess, &uExitCode);
				CloseHandle(processinfo.hProcess);
				CloseHandle(processinfo.hThread);
			} while (0);
		}
		return uExitCode;
	}
	unsigned long CommonFunction::ExcuteProcess2(const char *pCmdParam, const char *pExePath, int iTimeout = 30*1000)
	{
		unsigned long uExitCode = -1;
		if(pCmdParam)
		{
			do 
			{
				STARTUPINFOA startupinfo;
				PROCESS_INFORMATION processinfo;
				ZeroMemory(&startupinfo, sizeof(startupinfo));
				startupinfo.cb = sizeof(startupinfo);
				startupinfo.dwFlags = STARTF_USESHOWWINDOW;
				startupinfo.wShowWindow = SW_HIDE;
				ZeroMemory(&processinfo, sizeof(processinfo));
				char* pParams = new char[strlen(pCmdParam) + 10];
				memset(pParams, 0, strlen(pCmdParam) + 10);
				strcpy(pParams, pCmdParam);	
				if(!CreateProcessA(pExePath, (LPSTR)pParams, NULL, NULL, FALSE, CREATE_NEW_CONSOLE, NULL, NULL, &startupinfo, &processinfo)) 
				{
					break;
				}
				delete []pParams;
				if (WAIT_TIMEOUT == WaitForSingleObject(processinfo.hProcess, iTimeout))
				{
					//终止线程，指定退出码为-1，否则一直占用资源，无法删除
					TerminateProcess(processinfo.hProcess, -1);
				}
				GetExitCodeProcess(processinfo.hProcess, &uExitCode);
				CloseHandle(processinfo.hProcess);
				CloseHandle(processinfo.hThread);
			} while (0);
		}
		return uExitCode;
	}

	unsigned long CommonFunction::ExcuteProcessNoWait(const char *pCmdParam, const char *pExePath, int iWindowStatus = SW_HIDE)
	{
		unsigned long uResult = -1;
		if(pCmdParam)
		{
			do 
			{
				STARTUPINFOA startupinfo;
				PROCESS_INFORMATION processinfo;
				ZeroMemory(&startupinfo, sizeof(startupinfo));
				startupinfo.cb = sizeof(startupinfo);
				startupinfo.dwFlags = STARTF_USESHOWWINDOW;
				startupinfo.wShowWindow = iWindowStatus;
				ZeroMemory(&processinfo, sizeof(processinfo));
				char* pParams = new char[strlen(pCmdParam) + 10];
				memset(pParams, 0, strlen(pCmdParam) + 10);
				strcpy(pParams, pCmdParam);	
				if(!CreateProcessA(pExePath, (LPSTR)pParams, NULL, NULL, FALSE, CREATE_NEW_CONSOLE, NULL, NULL, &startupinfo, &processinfo)) 
				{
					break;
				}
				else
				{
					uResult = processinfo.dwProcessId;
				}
				delete []pParams;
			} while (0);
		}
		return uResult;
	}

	HANDLE CommonFunction::ExcuteProcessNoWait2(const char *pCmdParam, const char *pExePath, int iWindowStatus = SW_HIDE)
	{
		HANDLE hThread = INVALID_HANDLE_VALUE;
		if(pCmdParam)
		{
			do 
			{
				STARTUPINFOA startupinfo;
				PROCESS_INFORMATION processinfo;
				ZeroMemory(&startupinfo, sizeof(startupinfo));
				startupinfo.cb = sizeof(startupinfo);
				startupinfo.dwFlags = STARTF_USESHOWWINDOW;
				startupinfo.wShowWindow = iWindowStatus;
				ZeroMemory(&processinfo, sizeof(processinfo));
				char* pParams = new char[strlen(pCmdParam) + 10];
				memset(pParams, 0, strlen(pCmdParam) + 10);
				strcpy(pParams, pCmdParam);	
				
				if(!CreateProcessA(pExePath, (LPSTR)pParams, NULL, NULL, FALSE, CREATE_NEW_CONSOLE, NULL, NULL, &startupinfo, &processinfo)) 
				{
					break;
				}
				else
				{
					hThread = processinfo.hProcess;
				}
				delete []pParams;
			} while (0);
		}
		return hThread;
	}

	string CommonFunction::TrimHeadTail(const string strSrc)
	{
		string strDst = strSrc;
		int indexHead = strDst.find_first_not_of(" ");
		int indexTail = strDst.find_last_not_of(" ");
		if (-1 == indexHead || -1 == indexTail)
		{
			return strDst;
		}
		strDst = strDst.substr(indexHead, indexTail - indexHead + 1);
		return strDst;
	}
	//去掉多个空格只留一个空格
	string CommonFunction::TrimBetween(const string strSrc)
	{
		string strDst = strSrc;
		int index = -1;
		do
		{
			index = strDst.find("  ");
			if (-1 == index)
			{
				break;
			}
			strDst = strDst.replace(index, strlen("  "), " ");
		}while (true);

		return strDst;
	}

	string CommonFunction::StringSimplify(const string strSrc)
	{
		string strDst = strSrc;
		int iLength = strDst.size();
		for (int i = 0; i < iLength; ++i)
		{
			if (0 < strDst[i] && strDst[i] < 0x20)
			{
				strDst[i] = 0x20;
			}
			else if (strDst[i] == 0x7f)
			{
				strDst[i] = 0x20;
			}
		}
		strDst = TrimBetween(strDst);
		strDst = TrimHeadTail(strDst);
		return strDst;
	}

	string CommonFunction::TrimHead(const string strSrc)
	{
		string strDst = strSrc;
		size_t nSpaceIndex = strDst.find_first_not_of(' ');
		if (nSpaceIndex != strDst.npos)
		{
			strDst.erase(0, nSpaceIndex);
		}
		return strDst;
	}

	string CommonFunction::TrimTail(const string strSrc)
	{
		string strDst = strSrc;
		size_t nSpaceIndex = strDst.find_last_not_of(' ');
		if (nSpaceIndex != strDst.npos)
		{
			strDst.erase(nSpaceIndex + 1, strDst.size() - nSpaceIndex);
		}
		return strDst;
	}

	int CommonFunction::SplitStr(const char* pStrSrc, const char chSeparator, char **pDestStr)
	{
		int nResult = 0;
		if (pStrSrc && strlen(pStrSrc))
		{
			string strSrc = pStrSrc;
			int nIndex = -1;
			while (-1 != (nIndex = strSrc.find(chSeparator))) 
			{
				string strTemp = strSrc.substr(0, nIndex);
				pDestStr[nResult] = new char[strTemp.length() + 1];
				memset(pDestStr[nResult], 0, strTemp.length() + 1);
				strcpy(pDestStr[nResult], strTemp.c_str());
				strSrc = strSrc.substr(nIndex + 1, strSrc.length());
				++nResult;
			}
			pDestStr[nResult] = new char[strSrc.length() + 1];
			memset(pDestStr[nResult], 0, strSrc.length() + 1);
			strcpy(pDestStr[nResult], strSrc.c_str());
			++nResult;
		}
		return nResult;
	}

	int CommonFunction::SplitStr(const char* pStrSrc, const char *pSeparator, char **pDestStr)
	{
		int nResult = 0;
		if (pStrSrc && strlen(pStrSrc))
		{
			if (pSeparator && strlen(pSeparator))
			{
				string strSrc = pStrSrc;
				int nIndex = -1;

				while (-1 != (nIndex = strSrc.find(pSeparator))) 
				{
					string strTemp = strSrc.substr(0, nIndex);
					pDestStr[nResult] = new char[strTemp.length() + 1];
					memset(pDestStr[nResult], 0, strTemp.length() + 1);
					strcpy(pDestStr[nResult], strTemp.c_str());
					strSrc = strSrc.substr(nIndex + 1, strSrc.length());
					++nResult;
				}
				pDestStr[nResult] = new char[strSrc.length() + 1];
				memset(pDestStr[nResult], 0, strSrc.length() + 1);
				strcpy(pDestStr[nResult], strSrc.c_str());
				++nResult;
			}
		}
		return nResult;
	}

	bool CommonFunction::WriteLog(string strContent, LogLevel iLevel)
	{
		if (!strContent.size())
		{
			return false;
		}
		//日志名称：当前模块名.log，路径：当前模块路径
		//模块、时间、等级（一般、警告、错误、调试）、内容（自定义）；
		string strLogFilePath = m_szModuleFileName;
		strLogFilePath = strLogFilePath + ".log";
		string strFullContent = GetFileNameFromFullName(m_szModuleFileName);
		strFullContent = strFullContent + "  " + GetCurTimeStr();
		switch (iLevel)
		{
		case INFO_LOG:
			strFullContent = strFullContent + "  " + "Info";
			break;
		case WARN_LOG:
			strFullContent = strFullContent + "  " + "Warn";
			break;
		case ERROR_LOG:
			strFullContent = strFullContent + "  " + "Error";
			break;
		case DEBUG_LOG:
			strFullContent = strFullContent + "  " + "Debug";
			break;
		default:
			strFullContent = strFullContent + "  " + "Debug";
			break;
		}
		strFullContent = strFullContent + "  " + strContent;
		strFullContent = strFullContent + "\n";
		ofstream fstrWrite(strLogFilePath.c_str(), ios::app);
		fstrWrite << strFullContent.c_str();
		fstrWrite.close();
		return true;
	}

	string CommonFunction::SizeToHumanFormat(INT64 nBytes)
	{
		//人性化描述之后不会超过32个字符
		char szHumanSize[32] = {0};

		float dBytes = (float)nBytes;
		//double dBytes = (double)nBytes;
		if (dBytes < 1024) //字节
		{
			sprintf_s(szHumanSize, sizeof(szHumanSize), "%.0f B", dBytes);
			goto END;
		}

		dBytes /= 1024;
		if (dBytes < 1024) //KB
		{
			sprintf_s(szHumanSize, sizeof(szHumanSize), "%.2f KB", dBytes);
			goto END;
		}

		dBytes /= 1024;
		if (dBytes < 1024) //MB
		{
			sprintf_s(szHumanSize, sizeof(szHumanSize), "%.2f MB", dBytes);
			goto END;
		}

		dBytes /= 1024;
		if (dBytes < 1024) //GB
		{
			sprintf_s(szHumanSize, sizeof(szHumanSize), "%.2f GB", dBytes);
			goto END;
		}

		dBytes /= 1024;
		if (dBytes >= 1)
		{
			sprintf_s(szHumanSize, sizeof(szHumanSize), "%.2f TB", dBytes);
		}

END:
		return string(szHumanSize);
	}

	const char* CommonFunction::ULongToIp(const unsigned long ulValue)
	{
		char *pStringIp = new char[MAX_IP_LEN];
		memset(pStringIp, 0, MAX_IP_LEN);
		sprintf(pStringIp, "%d.%d.%d.%d", (ulValue & 0xff000000) >> 24, (ulValue & 0x00ff0000) >> 16, (ulValue & 0x0000ff00) >> 8, (ulValue & 0x000000ff));
		return pStringIp;
	}

	//Int转String，nLen指定位数，位数不够时以前置0填充。
	string CommonFunction::IntToString(INT64 n, UINT64 nLen)
	{
		stringstream ss;
		ss << n;

		string str = ss.str();

		if (nLen > str.size())
		{
			nLen -= str.size();
			while (nLen--)
			{
				str = "0" + str;
			}
		}

		return str;
	}

	//String转Int
	UINT64 CommonFunction::StringToInt(const string &str)
	{
		stringstream ss;
		ss << str;

		UINT64 nReturn;
		ss >> nReturn;

		return nReturn;
	}

	//重置工作路径到指定目录，若pRelateDir为NULL，则重置为EXE目录。
	void CommonFunction::SetWorkDir(const char *pRelateDir)
	{
		//SetCurrentDirectory()支持相对路径和全路径
		//若传入相对路径，则会被自动计算为全路径
		//传入路径必须必须以'\\'结尾，否则系统自动添加
		if (NULL != pRelateDir && 0 != strlen(pRelateDir))
		{
			SetCurrentDirectoryA(pRelateDir);
		}
		else
		{
			SetCurrentDirectoryA(m_szExeFilePath);
		}
	}
}
