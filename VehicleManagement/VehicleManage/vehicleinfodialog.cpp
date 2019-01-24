#include "vehicleinfodialog.h"
#include "ui_vehicleinfodialog.h"
#include <QMessageBox>
#include <QMovie>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonParseError>

VehicleInfoDialog::VehicleInfoDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::VehicleInfoDialog)
{
    ui->setupUi(this);

	//初始化数据
	m_vehicleInfo = { 0 };

	ui->pBtnNext->setEnabled(false);
	// 读取
	m_qstrVehicleInfoTemplateHtml = "";
	QString runPath = QCoreApplication::applicationDirPath() + "/Resources/Html/vehicleinfotemplate.html";
	readFile(runPath, m_qstrVehicleInfoTemplateHtml);

	QMovie *movieScanning = new QMovie("./Resources/Images/scanning.gif", "gif", this);
	ui->label->setMovie(movieScanning);
	ui->label->setScaledContents(true);
	movieScanning->start();

	QMovie *movieLoading = new QMovie("./Resources/Images/loading.gif", "gif", this);
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
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void VehicleInfoDialog::on_pBtnNext_clicked()
{
    // 下一步
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	// 将数据存入数据库
	m_operateMysql.init();
	m_operateMysql.begin();
	QString qstrInsertSql = QString("INSERT INTO VEHICLE(VEHICLEID, MANUFACTUREDATE, MANUFACTUREADDRESS, MANUFACTURER, COLOR, MODEL, BRAND, USERID, OWNERNO, ISVALID) VALUES('%1', '%2', '%3', '%4', '%5', '%6', '%7', %8, '%9', %10)")
		.arg(m_vehicleInfo.szVehicleId)
		.arg(m_vehicleInfo.szManufactureDate)
		.arg(QString::fromLocal8Bit(m_vehicleInfo.szManufactureAddress))
		.arg(QString::fromLocal8Bit(m_vehicleInfo.szManufacturer))
		.arg(QString::fromLocal8Bit(m_vehicleInfo.szColor))
		.arg(QString::fromLocal8Bit(m_vehicleInfo.szModel))
		.arg(QString::fromLocal8Bit(m_vehicleInfo.szBrand))
		.arg(m_vehicleInfo.nUserid)
		.arg(m_vehicleInfo.szOwnerId)
		.arg(1);
	QString qstrUpdateSql = QString("UPDATE USER SET STAGE=2 WHERE NUMBER='%1'").arg(m_vehicleInfo.szOwnerId);
	if (m_operateMysql.queryExe(qstrInsertSql) && m_operateMysql.queryExe(qstrUpdateSql))
	{
		m_operateMysql.commit();
	}
	else
	{
		m_operateMysql.rollback();
		//QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("数据插入错误！"));
	}
	m_operateMysql.close();
	emit vehicleInfoDoneSingal(m_qstrOwnerId);
}

void VehicleInfoDialog::startTimer(int nMillisecond)
{
	m_nMillisecond = nMillisecond / 1000;
	m_pCountdownTimer->start(1000); 

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
			// 读取的Json是在内存中还是以文件的方式存储在本地？

			// 读取成功
			strcpy_s(m_vehicleInfo.szBrand, "雪佛兰");
			strcpy_s(m_vehicleInfo.szColor, "红色");
			strcpy_s(m_vehicleInfo.szManufactureAddress, "重庆");
			strcpy_s(m_vehicleInfo.szManufactureDate, "2018-12-12");
			strcpy_s(m_vehicleInfo.szManufacturer, "上汽通用");
			strcpy_s(m_vehicleInfo.szModel, "科沃兹");
			strcpy_s(m_vehicleInfo.szOwnerId, m_qstrOwnerId.toStdString().c_str());
			strcpy_s(m_vehicleInfo.szVehicleId, "45678GHJK567");
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
		m_pTimer->start(30000);
	}
}
