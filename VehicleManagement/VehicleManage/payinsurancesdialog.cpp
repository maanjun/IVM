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
	finit();
    delete ui;
}

void PayinsurancesDialog::on_pBtnGohome_clicked()
{
	this->hide();
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void PayinsurancesDialog::on_pBtnPaytexesQuery_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	this->hide();
	m_pCheckIDDialogQueryInsurance->show();
	m_pCheckIDDialogQueryInsurance->startTimer(30000);
}

void PayinsurancesDialog::on_pBtnDeclare_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	this->hide();
	m_pCheckIDDialogDeclareInsurance->show();
	m_pCheckIDDialogDeclareInsurance->startTimer(30000);
}

void PayinsurancesDialog::on_pBtnPayinsurances_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	this->hide();
	m_pFaceRecogniceDialog->show();
	m_pFaceRecogniceDialog->startTimer(30000);
}

void PayinsurancesDialog::init()
{

}

void PayinsurancesDialog::initFrame()
{
	m_pCheckIDDialogQueryInsurance = new CheckIDDialog(INSURANCEQUERY);
	m_pCheckIDDialogQueryInsurance->hide();
	m_pQueryInsuranceDialog = new QueryInsuranceDialog();
	m_pQueryInsuranceDialog->hide();
	m_pCheckIDDialogDeclareInsurance = new CheckIDDialog(INSURANCEDECLARE);
	m_pCheckIDDialogDeclareInsurance->hide();
	m_pReadDrivinglisenceDialog = new ReadDrivinglisenceDialog();
	m_pReadDrivinglisenceDialog->hide();
	m_pDeclareInsuranceDialog = new DeclareInsuranceDialog();
	m_pConfirmPayinsuranceDialog = new ConfirmPayinsuranceDialog();
	m_pPayinsuranceDoneDialog = new PayinsuranceDoneDialog();

	m_pFaceRecogniceDialog = new FaceRecogniceDialog(PAYINSURANCES);
	m_pInputInsuranceDialog = new InputInsuranceDialog();
	m_pQueryDeclareInsuranceResultDialog = new QueryDeclareInsuranceResultDialog();
	m_pInputVin = new InputVIN();//没有正确的车驾号时 用户手动输入
	m_pInputVin->setOwnerGUIID(INSURANCEDECLARE);
	m_pInputVin->hide();
}

void PayinsurancesDialog::finit()
{
	if (nullptr != m_pCheckIDDialogQueryInsurance)
	{
		delete m_pCheckIDDialogQueryInsurance;
	}
	if (nullptr != m_pQueryInsuranceDialog)
	{
		delete m_pQueryInsuranceDialog;
	}
	if (nullptr != m_pCheckIDDialogDeclareInsurance)
	{
		delete m_pCheckIDDialogDeclareInsurance;
	}
	if (nullptr != m_pReadDrivinglisenceDialog)
	{
		delete m_pReadDrivinglisenceDialog;
	}
	if (nullptr != m_pDeclareInsuranceDialog)
	{
		delete m_pDeclareInsuranceDialog;
		m_pDeclareInsuranceDialog = NULL;
	}
	if (nullptr != m_pDeclareInsuranceDialog)
	{
		delete m_pDeclareInsuranceDialog;
	}
	if (nullptr != m_pConfirmPayinsuranceDialog)
	{
		delete m_pConfirmPayinsuranceDialog;
	}
	if (nullptr != m_pPayinsuranceDoneDialog)
	{
		delete m_pPayinsuranceDoneDialog;
	}
	if (nullptr != m_pFaceRecogniceDialog)
	{
		delete m_pFaceRecogniceDialog;
	}
	if (nullptr != m_pInputInsuranceDialog)
	{
		delete m_pInputInsuranceDialog;
	}
	if (nullptr != m_pQueryDeclareInsuranceResultDialog)
	{
		delete m_pQueryDeclareInsuranceResultDialog;
		m_pQueryDeclareInsuranceResultDialog = nullptr;
	}

	if (nullptr != m_pInputVin)
	{
		delete m_pInputVin;
		m_pInputVin = nullptr;
	}
}
