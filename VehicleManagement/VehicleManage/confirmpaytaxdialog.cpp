#include "confirmpaytaxdialog.h"
#include "ui_confirmpaytaxdialog.h"

ConfirmPaytaxDialog::ConfirmPaytaxDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::ConfirmPaytaxDialog)
{
    ui->setupUi(this);
}

ConfirmPaytaxDialog::~ConfirmPaytaxDialog()
{
    delete ui;
}

void ConfirmPaytaxDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void ConfirmPaytaxDialog::on_pBtnNext_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit payTaxConfirmedSignal(m_qstrOwnerId);
}
