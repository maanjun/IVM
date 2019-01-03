#include "drivingmanage.h"
#include "ui_drivingmanage.h"
#include <QMessageBox>

DrivingManage::DrivingManage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DrivingManage)
{
    ui->setupUi(this);

	this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
}

DrivingManage::~DrivingManage()
{
    delete ui;
}

void DrivingManage::on_pushButton_clicked()
{
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("接口正在审批中 敬请期待!!!"));



}

void DrivingManage::on_pushButton_2_clicked()
{
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("接口正在审批中 敬请期待!!!"));
}

void DrivingManage::on_pushButton_3_clicked()
{
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("接口正在审批中 敬请期待!!!"));
}

void DrivingManage::on_pushButton_4_clicked()
{
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("接口正在审批中 敬请期待!!!"));
}

void DrivingManage::on_pushButton_5_clicked()
{
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("接口正在审批中 敬请期待!!!"));
}

void DrivingManage::on_pushButton_6_clicked()
{
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("电子完税功能正在完善中，敬请期待……"));
}

void DrivingManage::on_pBtnGohome_clicked()
{
	emit goHomeDrivingSignal();
}
