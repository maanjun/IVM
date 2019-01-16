#ifndef FACE_RECOGNITION_H
#define FACE_RECOGNITION_H

#include "common.h"
#include "basedialog.h"
#include "operateMysql.h"

namespace Ui {
	class face_recognition;
}

class face_recognition :
	public BaseDialog
{

	Q_OBJECT

public:
	face_recognition(QWidget *parent = 0);
	~face_recognition();

public:
private:
	OperateMysql m_operateMysql;

	QString m_qstrSumaryTemplateHtml;

	QString m_qstrDetailTemplateHtml;

private slots:
	void on_pBtnHomepage_clicked();

	void on_pBtnDone_clicked();

private:
	Ui::face_recognition *ui;
};

#endif