#include "readdrivinglisencedialog.h"
#include "ui_readdrivinglisencedialog.h"
#include <QMovie>

ReadDrivinglisenceDialog::ReadDrivinglisenceDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::ReadDrivinglisenceDialog)
{
    ui->setupUi(this);

	ui->pBtnNext->setEnabled(false);
	// 读取
	m_qstrVehicleInfoTemplateHtml = "";
	QString runPath = QCoreApplication::applicationDirPath() + "/Resources/Htmls/vehicleinfotemplate.html";
	readFile(runPath, m_qstrVehicleInfoTemplateHtml);

	QMovie *movieScanning = new QMovie("./Resources/Images/scanning.gif", "gif", this);
	ui->label->setMovie(movieScanning);
	ui->label->setScaledContents(true);
	movieScanning->start();

	QMovie *movieLoading = new QMovie("./Resources/Images/loading.gif", "gif", this);
	ui->labelLoading->setMovie(movieLoading);
	movieLoading->start();
}

ReadDrivinglisenceDialog::~ReadDrivinglisenceDialog()
{
    delete ui;
}

void ReadDrivinglisenceDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void ReadDrivinglisenceDialog::on_pBtnNext_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit drivinglisenceReadSignal(m_qstrOwnerId);
}

void ReadDrivinglisenceDialog::startTimer(int nMillisecond)
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
			// 读取成功
			strcpy_s(m_vehicleInfo.szBrand, "雪佛兰");
			strcpy_s(m_vehicleInfo.szColor, "红色");
			strcpy_s(m_vehicleInfo.szManufactureAddress, "重庆");
			strcpy_s(m_vehicleInfo.szManufactureDate, "2018-12-12");
			strcpy_s(m_vehicleInfo.szManufacturer, "上汽通用");
			strcpy_s(m_vehicleInfo.szModel, "科沃兹");
			strcpy_s(m_vehicleInfo.szOwnerId, m_qstrOwnerId.toStdString().c_str());
			strcpy_s(m_vehicleInfo.szVehicleId, "45678GHJK567");
			if (250 == nCount) {
				ui->labelLoading->setVisible(false);
				ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/nexton.png)");
				ui->pBtnNext->setEnabled(true);
				//将读取的数据写成html，设置进textBrower
				QString qstrVehicleInfo = m_qstrVehicleInfoTemplateHtml;
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
