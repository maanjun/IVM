#include "queryinsurancedialog.h"
#include "ui_queryinsurancedialog.h"

QueryInsuranceDialog::QueryInsuranceDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::QueryInsuranceDialog)
{
    ui->setupUi(this);
}

QueryInsuranceDialog::~QueryInsuranceDialog()
{
    delete ui;
}

void QueryInsuranceDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void QueryInsuranceDialog::on_pBtnDone_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit queryInsuranceDoneSignal();
}
