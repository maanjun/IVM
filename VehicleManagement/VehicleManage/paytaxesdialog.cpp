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
    delete ui;
}

void PaytaxesDialog::on_pBtnGohome_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void PaytaxesDialog::on_pBtnPaytexesQuery_clicked()
{
	this->hide();
	m_pCheckIDDialogQueryTax->show();
	m_pCheckIDDialogQueryTax->startTimer(30000);
}

void PaytaxesDialog::on_pBtnDeclare_clicked()
{
	this->hide();
	m_pCheckIDDialogDeclare->show();
	m_pCheckIDDialogDeclare->startTimer(30000);
}

void PaytaxesDialog::on_pBtnPaytaxes_clicked()
{
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

	m_pCheckIDDialogDeclare = new CheckIDDialog(TAXDECLARE);
	m_pReadCertificateDialog = new ReadCertificateDialog();
	m_pDeclareTaxDialog = new DeclareTaxDialog();
	m_pConfirmPaytaxDialog = new ConfirmPaytaxDialog();
	m_pPaytaxDoneDialog = new PaytaxDoneDialog();

	m_pFaceRecogniceDialog = new FaceRecogniceDialog(PAYTAXES);
	m_pInputTaxDialog = new InputTaxDialog();
	m_pQueryDeclareTaxResultDialog = new QueryDeclareTaxResultDialog();
}
