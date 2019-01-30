#include "querytaxdialog.h"
#include "ui_querytaxdialog.h"

QueryTaxDialog::QueryTaxDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::QueryTaxDialog)
{
    ui->setupUi(this);
}

QueryTaxDialog::~QueryTaxDialog()
{
    delete ui;
}

void QueryTaxDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void QueryTaxDialog::on_pBtnDone_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit queryTaxDoneSignal();
	// 打印

}
