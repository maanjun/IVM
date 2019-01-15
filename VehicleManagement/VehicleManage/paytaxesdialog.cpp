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

void PaytaxesDialog::on_pBtnPaytexesQuery_clicked()
{
	this->hide();
	m_pCheckIDDialogQueryTax->show();
	m_pCheckIDDialogQueryTax->startTimer(20000);
}

void PaytaxesDialog::on_pBtnDeclare_clicked()
{
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("申报功能正在完善中，敬请期待……"));
}

void PaytaxesDialog::on_pBtnPaytaxes_clicked()
{
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("缴税功能正在完善中，敬请期待……"));
}

void PaytaxesDialog::init()
{

}

void PaytaxesDialog::initFrame()
{
	m_pCheckIDDialogQueryTax = new CheckIDDialog(TAXQUERY);
	m_pQueryTaxDialog = new QueryTaxDialog();
	m_pCheckIDDialogDeclare = new CheckIDDialog(DECLARE);
}
