#include "payinsurancedonedialog.h"
#include "ui_payinsurancedonedialog.h"

PayinsuranceDoneDialog::PayinsuranceDoneDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::PayinsuranceDoneDialog)
{
    ui->setupUi(this);
}

PayinsuranceDoneDialog::~PayinsuranceDoneDialog()
{
    delete ui;
}

void PayinsuranceDoneDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void PayinsuranceDoneDialog::on_pBtnNext_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit payinsuranceDoneSignal(m_qstrOwnerId);
}
