#include "confirmpayinsurancedialog.h"
#include "ui_confirmpayinsurancedialog.h"

ConfirmPayinsuranceDialog::ConfirmPayinsuranceDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::ConfirmPayinsuranceDialog)
{
    ui->setupUi(this);
}

ConfirmPayinsuranceDialog::~ConfirmPayinsuranceDialog()
{
    delete ui;
}

void ConfirmPayinsuranceDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void ConfirmPayinsuranceDialog::on_pBtnNext_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit payInsuranceConfirmedSignal(m_qstrOwnerId);
}
