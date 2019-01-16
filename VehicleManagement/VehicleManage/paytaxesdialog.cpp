﻿#include "paytaxesdialog.h"
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
	m_pCheckIDDialogQueryTax->startTimer(60000);
}

void PaytaxesDialog::on_pBtnDeclare_clicked()
{
	this->hide();
	m_pCheckIDDialogDeclare->show();
	m_pCheckIDDialogDeclare->startTimer(60000);
}

void PaytaxesDialog::on_pBtnPaytaxes_clicked()
{
	this->hide();
	m_pface_recognition->show();
	m_pface_recognition->startTimer(60000);
}

void PaytaxesDialog::init()
{

}

void PaytaxesDialog::initFrame()
{
	m_pCheckIDDialogQueryTax = new CheckIDDialog(TAXQUERY);
	m_pQueryTaxDialog = new QueryTaxDialog();

	m_pCheckIDDialogDeclare = new CheckIDDialog(DECLARE);
	m_pReadCertificateDialog = new ReadCertificateDialog();
	m_pDeclareDialog = new DeclareDialog();
	m_pConfirmPayDialog = new ConfirmPayDialog();
	m_pPaytaxDoneDialog = new PaytaxDoneDialog();

	m_pface_recognition = new face_recognition();
	m_pInputTaxDialog = new InputTaxDialog();
}
