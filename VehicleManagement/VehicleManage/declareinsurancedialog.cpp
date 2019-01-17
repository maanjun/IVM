#include "declareinsurancedialog.h"
#include "ui_declareinsurancedialog.h"

DeclareInsuranceDialog::DeclareInsuranceDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::DeclareInsuranceDialog)
{
    ui->setupUi(this);
}

DeclareInsuranceDialog::~DeclareInsuranceDialog()
{
    delete ui;
}

void DeclareInsuranceDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void DeclareInsuranceDialog::on_pBtnNext_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit insuranceDeclaredSignal(m_qstrOwnerId);
}
