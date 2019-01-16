#include "inputtaxdialog.h"
#include "ui_inputtaxdialog.h"

InputTaxDialog::InputTaxDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::InputTaxDialog)
{
    ui->setupUi(this);
}

InputTaxDialog::~InputTaxDialog()
{
    delete ui;
}

void InputTaxDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void InputTaxDialog::on_pBtnDone_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit inputTaxDoneSignal();
}
