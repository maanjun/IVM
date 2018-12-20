#include "checkreceiptdialog.h"
#include "ui_checkreceiptdialog.h"
#include "common.h"

CheckReceiptDialog::CheckReceiptDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::CheckReceiptDialog)
{
    ui->setupUi(this);
	// ���ð�ť����ͼƬ
	ui->pBtnHomepage->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Images/homepageon.png)");
	ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Images/nexton.png)");
}

CheckReceiptDialog::~CheckReceiptDialog()
{
    delete ui;
}

void CheckReceiptDialog::on_pBtnHomepage_clicked()
{
	//this->close();
	emit goHomeSignal();
}

void CheckReceiptDialog::on_pBtnNext_clicked()
{
	// �ϴ����ļ�������
	uploadFile("D:\\Works\\Mine\\IVM\\Documents\\testimages\\23.jpg");
	emit receiptCheckedSingal();
	//this->close();
}
