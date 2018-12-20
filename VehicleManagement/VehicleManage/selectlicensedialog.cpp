#include "selectlicensedialog.h"
#include "ui_selectlicensedialog.h"

SelectLicenseDialog::SelectLicenseDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::SelectLicenseDialog)
{
    ui->setupUi(this);
	// 设置按钮背景图片
	ui->pBtnHomepage->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Images/homepageon.png)");
	ui->pBtnConfirm->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Images/confirmon.png)");
}

SelectLicenseDialog::~SelectLicenseDialog()
{
    delete ui;
}

void SelectLicenseDialog::on_pBtnHomepage_clicked()
{
    // 回到主页
    //this->close();
	emit goHomeSignal();
}

void SelectLicenseDialog::on_pBtnConfirm_clicked()
{
    emit selectDoneSingal();
    //this->close();
}
