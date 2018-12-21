#ifndef _COMMONDEFINE_H_
#define _COMMONDEFINE_H_

#include <windows.h>

#define MAX_MYSQLTABLENAME_LEN 256
#define MAX_FILENAME_LEN 1024
#define MAX_PATH_LEN 1024
#define MAX_EXTENSION_LEN 256
#define MAX_ATTRS_LEN 64
#define MAX_TIME_LEN 64
#define MAX_HASH_LEN 64
#define MAX_MD5_LEN 64
#define MAX_IP_LEN 32
#define MAX_PORT_LEN 16
#define MAX_USERNAME_LEN 64
#define MAX_PASSWORD_LEN 64
#define MAX_SQL_LEN 4096
#define MAX_ID_LEN 16
#define MAX_CAPTION_LEN 128
#define MAX_LIB_LEN 128
#define MAX_LOCATION_LEN 256
#define MAX_CATEGORIZEID 32
#define MAX_FILTER_LEN 1024
#define MAX_FLAG_LEN 128
#define MAX_DRIVERSERIAL_LEN 64
#define MAX_DISKMODEL_LEN 64
#define MAX_LOGCONTENT_LEN 2048
#define MAX_EVENTNAME_LEN 64

typedef enum _LogLevel
{
	INFO_LOG = 0,
	WARN_LOG,
	ERROR_LOG,
	DEBUG_LOG
}LogLevel, *PLogLevel;

#endif