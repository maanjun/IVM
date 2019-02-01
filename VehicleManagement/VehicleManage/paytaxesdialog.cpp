#include "paytaxesdialog.h"
#include "ui_paytaxesdialog.h"
#include <QMessageBox>

PaytaxesDialog::PaytaxesDialog(QWidget *parent) :
    BaseDialog(parent),
    ui(new Ui::PaytaxesDialog)
{
    ui->setupUi(this);

	initFrame();
	init();
}

PaytaxesDialog::~PaytaxesDialog()
{
	finit();
    delete ui;
}

void PaytaxesDialog::on_pBtnGohome_clicked()
{
	this->hide();
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void PaytaxesDialog::on_pBtnPaytexesQuery_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	this->hide();
	m_pCheckIDDialogQueryTax->show();
	m_pCheckIDDialogQueryTax->startTimer(30000);
}

void PaytaxesDialog::on_pBtnDeclare_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	this->hide();
	m_pCheckIDDialogDeclareTax->show();
	m_pCheckIDDialogDeclareTax->startTimer(30000);
}

void PaytaxesDialog::on_pBtnPaytaxes_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	this->hide();
	m_pFaceRecogniceDialog->show();
	m_pFaceRecogniceDialog->startTimer(30000);
}

void PaytaxesDialog::init()
{

}

void PaytaxesDialog::initFrame()
{
	m_pCheckIDDialogQueryTax = new CheckIDDialog(TAXQUERY);
	m_pQueryTaxDialog = new QueryTaxDialog();

	m_pCheckIDDialogDeclareTax = new CheckIDDialog(TAXDECLARE);
	m_pReadCertificateDialog = new ReadCertificateDialog();
	m_pDeclareTaxDialog = new DeclareTaxDialog();
	m_pConfirmPaytaxDialog = new ConfirmPaytaxDialog();
	m_pPaytaxDoneDialog = new PaytaxDoneDialog();

	m_pFaceRecogniceDialog = new FaceRecogniceDialog(PAYTAXES);
	m_pInputTaxDialog = new InputTaxDialog();
	m_pQueryDeclareTaxResultDialog = new QueryDeclareTaxResultDialog();
}

void PaytaxesDialog::finit()
{
	if (nullptr != m_pCheckIDDialogQueryTax)
	{
		delete m_pCheckIDDialogQueryTax;
	}
	if (nullptr != m_pQueryTaxDialog)
	{
		delete m_pQueryTaxDialog;
	}
	if (nullptr != m_pCheckIDDialogDeclareTax)
	{
		delete m_pCheckIDDialogDeclareTax;
	}
	if (nullptr != m_pReadCertificateDialog)
	{
		delete m_pReadCertificateDialog;
	}
	if (nullptr != m_pDeclareTaxDialog)
	{
		delete m_pDeclareTaxDialog;
	}
	if (nullptr != m_pDeclareTaxDialog)
	{
		delete m_pDeclareTaxDialog;
	}
	if (nullptr != m_pConfirmPaytaxDialog)
	{
		delete m_pConfirmPaytaxDialog;
	}
	if (nullptr != m_pPaytaxDoneDialog)
	{
		delete m_pPaytaxDoneDialog;
	}
	if (nullptr != m_pFaceRecogniceDialog)
	{
		delete m_pFaceRecogniceDialog;
	}
	if (nullptr != m_pInputTaxDialog)
	{
		delete m_pInputTaxDialog;
	}
	if (nullptr != m_pQueryDeclareTaxResultDialog)
	{
		delete m_pQueryDeclareTaxResultDialog;
	}
}
