#pragma once
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlError>

#define MYSQLCONNECTIONNAME "mysql"


// QSqlDatabase不支持数据库跨线程操作
class OperateMysql
{
public:
	OperateMysql();
	~OperateMysql();

	bool init();

	void begin();

	bool queryExe(QString qstrSql);

	void commit();

	void rollback();

	void close();

	QSqlQuery *m_pQuery;

protected:
	
private:
	QSqlDatabase m_db;
};