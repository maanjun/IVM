#include "confirmpaydialog.h"
#include "ui_confirmpaydialog.h"

ConfirmPayDialog::ConfirmPayDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::ConfirmPayDialog)
{
    ui->setupUi(this);
}

ConfirmPayDialog::~ConfirmPayDialog()
{
    delete ui;
}

void ConfirmPayDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void ConfirmPayDialog::on_pBtnNext_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	//emit payConfirmedSignal(m_qstrOwnerId);
}
