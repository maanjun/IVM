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
	QApplication::setQuitOnLastWindowClosed(false);
	
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("电子保单功能正在完善中，敬请期待……"));

}

void DrivingManage::on_pushButton_2_clicked()
{
	QApplication::setQuitOnLastWindowClosed(false);
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("电子保单功能正在完善中，敬请期待……"));
}

void DrivingManage::on_pushButton_3_clicked()
{
	QApplication::setQuitOnLastWindowClosed(false);
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("电子保单功能正在完善中，敬请期待……"));
}

void DrivingManage::on_pushButton_4_clicked()
{
	QApplication::setQuitOnLastWindowClosed(false);
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("电子保单功能正在完善中，敬请期待……"));
}

void DrivingManage::on_pushButton_5_clicked()
{
	QApplication::setQuitOnLastWindowClosed(false);
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("电子保单功能正在完善中，敬请期待……"));
}

void DrivingManage::on_pushButton_6_clicked()
{
	QApplication::setQuitOnLastWindowClosed(false);
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("电子保单功能正在完善中，敬请期待……"));
}

void DrivingManage::on_pBtnGohome_clicked()
{
	emit goHomeDrivingSignal();
}
