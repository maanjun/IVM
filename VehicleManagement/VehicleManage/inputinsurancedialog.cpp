#include "inputinsurancedialog.h"
#include "ui_inputinsurancedialog.h"

InputInsuranceDialog::InputInsuranceDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::InputInsuranceDialog)
{
    ui->setupUi(this);
}

InputInsuranceDialog::~InputInsuranceDialog()
{
    delete ui;
}

void InputInsuranceDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void InputInsuranceDialog::on_pBtnDone_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit inputInsuranceDoneSignal();
}
