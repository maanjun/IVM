#include "payinsurancesdialog.h"
#include "ui_payinsurancesdialog.h"
#include <QMessageBox>

PayinsurancesDialog::PayinsurancesDialog(QWidget *parent) :
    BaseDialog(parent),
    ui(new Ui::PayinsurancesDialog)
{
    ui->setupUi(this);

	initFrame();
	init();
}

PayinsurancesDialog::~PayinsurancesDialog()
{
    delete ui;
}

void PayinsurancesDialog::on_pBtnPaytexesQuery_clicked()
{
	this->hide();
	m_pCheckIDDialogQueryInsurance->show();
	m_pCheckIDDialogQueryInsurance->startTimer(30000);
}

void PayinsurancesDialog::on_pBtnDeclare_clicked()
{
	this->hide();
	m_pCheckIDDialogDeclare->show();
	m_pCheckIDDialogDeclare->startTimer(30000);
}

void PayinsurancesDialog::on_pBtnPayinsurances_clicked()
{
	this->hide();
	m_pface_recognition->show();
	m_pface_recognition->startTimer(30000);
}

void PayinsurancesDialog::init()
{

}

void PayinsurancesDialog::initFrame()
{
	m_pCheckIDDialogQueryInsurance = new CheckIDDialog(INSURANCEQUERY);
	m_pQueryInsuranceDialog = new QueryInsuranceDialog();

	m_pCheckIDDialogDeclare = new CheckIDDialog(INSURANCEDECLARE);
	m_pReadCertificateDialog = new ReadCertificateDialog();
	m_pDeclareInsuranceDialog = new DeclareInsuranceDialog();
	m_pConfirmPayinsuranceDialog = new ConfirmPayinsuranceDialog();
	m_pPayinsuranceDoneDialog = new PayinsuranceDoneDialog();

	m_pface_recognition = new face_recognition();
	m_pInputInsuranceDialog = new InputInsuranceDialog();
}
