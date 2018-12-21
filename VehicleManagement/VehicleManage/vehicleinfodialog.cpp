﻿#include "vehicleinfodialog.h"
#include "ui_vehicleinfodialog.h"
#include <QMessageBox>
#include <QMovie>
#include <QDebug>
#include "common.h"

VehicleInfoDialog::VehicleInfoDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::VehicleInfoDialog)
{
    ui->setupUi(this);

	ui->pBtnNext->setEnabled(false);
	// 读取
	m_qstrVehicleInfoTemplateHtml = "";
	readFile("D:\\Works\\Mine\\IVM\\Codes\\IVM\\VehicleManagement\\VehicleManage\\Resources\\Html\\vehicleinfotemplate.html", m_qstrVehicleInfoTemplateHtml);

	QMovie *movieScanning = new QMovie("./Resources/Images/scanning.gif");
	ui->label->setMovie(movieScanning);
	ui->label->setScaledContents(true);
	movieScanning->start();

	QMovie *movieLoading = new QMovie("./Resources/Images/loading.gif");
	ui->labelLoading->setMovie(movieLoading);
	movieLoading->start();
}

VehicleInfoDialog::~VehicleInfoDialog()
{
    delete ui;
}

void VehicleInfoDialog::on_pBtnHomepage_clicked()
{
    // 回到主页
	//this->close();
	m_pTimer->stop();
	emit goHomeSignal();
}

void VehicleInfoDialog::on_pBtnNext_clicked()
{
    // 下一步
	m_pTimer->stop();
	emit vehicleInfoDoneSingal();
	//this->close();
}

void VehicleInfoDialog::startTimer(int nMillisecond)
{
	ui->textBrowser->setHtml("");
	ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/nextoff.png)");
	ui->pBtnNext->setEnabled(false);
	ui->labelLoading->setVisible(true);
	m_bInterrupted = false;
	// 定时关闭
	if (nMillisecond > 0)
	{
		m_pTimer->start(nMillisecond);
		// 读取身份证信息
		int nCount = nMillisecond / 50 / 2;
		do
		{
			QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
			// 读取成功
			if (150 == nCount) {
				ui->labelLoading->setVisible(false);
				ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/nexton.png)");
				ui->pBtnNext->setEnabled(true);
				//将读取的数据写成html，设置进textBrower
				QString qstrVehicleInfo = m_qstrVehicleInfoTemplateHtml;
				//.arg(QString::fromLocal8Bit("头像"))
				//.arg(QString::fromLocal8Bit("姓名"))
				//.arg(QString::fromLocal8Bit("性别"))
				//.arg(QString::fromLocal8Bit("民族"))
				//.arg(QString::fromLocal8Bit("2018"))
				//.arg(QString::fromLocal8Bit("11"))
				//.arg(QString::fromLocal8Bit("11"))
				//.arg(QString::fromLocal8Bit("住址第一行"))
				//.arg(QString::fromLocal8Bit("住址第二行"))
				//.arg(QString::fromLocal8Bit("住址第三行"))
				//.arg(QString::fromLocal8Bit("身份证号码"));
				ui->textBrowser->setHtml(qstrVehicleInfo);
				break;
			}
			// 每50ms读取一次身份证信息
			Sleep(50);
		} while (nCount-- && !m_bInterrupted);
	}
	else
	{
		// 默认60秒自动关闭
		m_pTimer->start(60000);
	}
}
