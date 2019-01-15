#include "readcertificatedialog.h"
#include "ui_readcertificatedialog.h"

ReadCertificateDialog::ReadCertificateDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::ReadCertificateDialog)
{
    ui->setupUi(this);
}

ReadCertificateDialog::~ReadCertificateDialog()
{
    delete ui;
}

void ReadCertificateDialog::on_pBtnHomepage_clicked()
{

}

void ReadCertificateDialog::on_pBtnNext_clicked()
{

}
