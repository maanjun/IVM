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
		QSettings *configIniRead = new QSettings("database.ini", QSettings::IniFormat);
		//����ȡ����ini�ļ�������QString�У���ȡֵ��Ȼ��ͨ��toString()����ת����QString����
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
		m_db.setDatabaseName(strDbName);       //��������������ݿ���
		m_db.setPort(strPort.toInt());
		m_db.setUserName(strUserName);
		m_db.setPassword(strPassword);
		if (!m_db.open()) {
			QMessageBox::critical(0, QObject::tr("�޷������ݿ�"), "�޷��������ݿ����ӣ�", QMessageBox::Cancel);
		}
		m_pQuery = new QSqlQuery(m_db);
		return true;
	}
	catch (std::exception &e)
	{
		QMessageBox::critical(0, QObject::tr("�޷������ݿ�"), "�޷��������ݿ����ӣ�", QMessageBox::Cancel);
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
	//�ر����ݿ�����
	if (m_db.isOpen())
	{
		m_db.close();
	}
	//�Ƴ����ݿ�
	QSqlDatabase::removeDatabase(MYSQLCONNECTIONNAME);
}