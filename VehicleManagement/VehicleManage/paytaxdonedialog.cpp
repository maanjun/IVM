#include "paytaxdonedialog.h"
#include "ui_paytaxdonedialog.h"

PaytaxDoneDialog::PaytaxDoneDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::PaytaxDoneDialog)
{
    ui->setupUi(this);
}

PaytaxDoneDialog::~PaytaxDoneDialog()
{
    delete ui;
}

void PaytaxDoneDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void PaytaxDoneDialog::on_pBtnNext_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit paytaxDoneSignal(m_qstrOwnerId);
}
