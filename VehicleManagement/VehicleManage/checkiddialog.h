#ifndef CHECKIDDIALOG_H
#define CHECKIDDIALOG_H

#include "common.h"
#include "idcarddata.h"
#include "basedialog.h"
#include "operateMysql.h"
#include "IDCardReader.h"

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

//��ʼ��ʱ����Ա���������˳���ʼ�������ʼ���б��޹أ�����Ĭ��ֵ���������
private:
	unsigned int m_caller;

	QString m_qstrIDTemplateHtml;

	OperateMysql m_operateMysql;

	//IdInfo m_idInfo;

	IDCardData m_idCardData;

	IDCardReader *m_pIDCardReader;

private slots:
    void on_pBtnHomepage_clicked();

    void on_pBtnNext_clicked();

	void getUserinfo(QString qstrId);

private:
    Ui::CheckIDDialog *ui;
	void ShowIDInfo();
};

#endif // CHECKIDDIALOG_H
