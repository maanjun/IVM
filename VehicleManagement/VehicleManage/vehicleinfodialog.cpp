#include "vehicleinfodialog.h"
#include "ui_vehicleinfodialog.h"
#include "QMessageBox"

VehicleInfoDialog::VehicleInfoDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::VehicleInfoDialog)
{
    ui->setupUi(this);
	// 设置按钮背景图片
	ui->pBtnHomepage->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Images/homepageon.png)");
	ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Images/nexton.png)");
}

VehicleInfoDialog::~VehicleInfoDialog()
{
    delete ui;
}

void VehicleInfoDialog::on_pBtnHomepage_clicked()
{
    // 回到主页
	//this->close();
	emit goHomeSignal();
}

void VehicleInfoDialog::on_pBtnNext_clicked()
{
    // 下一步
	emit vehicleInfoDoneSingal();
	//this->close();
}
