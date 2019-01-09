#include "common.h"
#include "operateMysql.h"
#include "QMessageBox"
#include <QSettings>
#include <exception>

OperateMysql::OperateMysql()
{
}

OperateMysql::~OperateMysql()
{

}

bool OperateMysql::init()
{
	try
	{
		QSettings *configIniRead = new QSettings("settings.ini", QSettings::IniFormat);
		//将读取到的ini文件保存在QString中，先取值，然后通过toString()函数转换成QString类型
		QString strHostName = configIniRead->value("/database/host").toString();
		QString strDbName = configIniRead->value("/database/database").toString();
		QString strPort = configIniRead->value("/database/port").toString();
		QString strUserName = configIniRead->value("/database/username").toString();
		QString strPassword = configIniRead->value("/database/password").toString();
		delete configIniRead;
		m_db = QSqlDatabase::addDatabase("QMYSQL", MYSQLCONNECTIONNAME);
		if (QSqlDatabase::contains(MYSQLCONNECTIONNAME)) {
			m_db = QSqlDatabase::database(MYSQLCONNECTIONNAME);
		}
		else {
			m_db = QSqlDatabase::addDatabase("QMYSQL", MYSQLCONNECTIONNAME);
		}
		m_db.setHostName(strHostName);
		m_db.setDatabaseName(strDbName);       //这里输入你的数据库名
		m_db.setPort(strPort.toInt());
		m_db.setUserName(strUserName);
		m_db.setPassword(strPassword);
		if (!m_db.open()) {
			//QMessageBox::critical(0, QObject::tr("无法打开数据库"), "无法创建数据库连接！", QMessageBox::Cancel);
		}
		m_pQuery = new QSqlQuery(m_db);
		return true;
	}
	catch (std::exception &e)
	{
		//QMessageBox::critical(0, QObject::tr("无法打开数据库"), "无法创建数据库连接！", QMessageBox::Cancel);
	}
	return false;
}

void OperateMysql::begin()
{
	m_pQuery->exec("START TRANSACTION");
}

bool OperateMysql::queryExe(QString qstrSql)
{
	return m_pQuery->exec(qstrSql);
}

void OperateMysql::commit()
{
	m_pQuery->exec("COMMIT");
}

void OperateMysql::rollback()
{
	m_pQuery->exec("ROLLBACK");
}

void OperateMysql::close()
{
	//关闭数据库连接
	if (m_db.isOpen())
	{
		m_db.close();
	}
	//移除数据库
	QSqlDatabase::removeDatabase(MYSQLCONNECTIONNAME);
}