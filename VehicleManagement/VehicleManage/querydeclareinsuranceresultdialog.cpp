#include "querydeclareinsuranceresultdialog.h"
#include "ui_querydeclareinsuranceresultdialog.h"

QueryDeclareInsuranceResultDialog::QueryDeclareInsuranceResultDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::QueryDeclareInsuranceResultDialog)
{
    ui->setupUi(this);
}

QueryDeclareInsuranceResultDialog::~QueryDeclareInsuranceResultDialog()
{
    delete ui;
}

void QueryDeclareInsuranceResultDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void QueryDeclareInsuranceResultDialog::on_pBtnDone_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit queryDeclareInsuranceResultDoneSignal();
}
