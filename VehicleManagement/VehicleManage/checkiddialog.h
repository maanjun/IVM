#ifndef CHECKIDDIALOG_H
#define CHECKIDDIALOG_H

#include "common.h"
#include "idcarddata.h"
#include "basedialog.h"
#include "operateMysql.h"

namespace Ui {
class CheckIDDialog;
}

class CheckIDDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit CheckIDDialog(unsigned int caller, QWidget *parent = 0);
    ~CheckIDDialog();

	void startTimer(int nMillisecond = 30000);

//初始化时按成员变量定义的顺序初始化，与初始化列表无关，且有默认值放在最后面
private:
	unsigned int m_caller;

	QString m_qstrIDTemplateHtml;

	OperateMysql m_operateMysql;

	//IdInfo m_idInfo;

	IDCardData m_idCardData;

private slots:
    void on_pBtnHomepage_clicked();

    void on_pBtnNext_clicked();

	void getUserinfo(QString qstrId);

private:
    Ui::CheckIDDialog *ui;
};

#endif // CHECKIDDIALOG_H
