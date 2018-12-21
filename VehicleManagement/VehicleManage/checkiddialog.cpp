#include "checkiddialog.h"
#include "ui_checkiddialog.h"
#include "common.h"
#include <QMessageBox>
#include <QLabel>
#include <QImage>
#include <QPixmap>
#include <QMovie>
#include <QDebug>

CheckIDDialog::CheckIDDialog(QWidget *parent) :
    BaseDialog(parent),
    ui(new Ui::CheckIDDialog)
{
    ui->setupUi(this);

	// 默认远程验车
	m_caller = CHECKVEHICLE;

	QMovie *movie = new QMovie("./Resources/Images/loading.gif");
	ui->labelLoading->setMovie(movie);
	movie->start();

	// 读取
	m_qstrIDTemplateHtml = "";
	readFile("D:\\Works\\Mine\\IVM\\Codes\\IVM\\VehicleManagement\\VehicleManage\\Resources\\Html\\sfztemplate.html", m_qstrIDTemplateHtml);
}

CheckIDDialog::~CheckIDDialog()
{
    delete ui;
}

void CheckIDDialog::startTimer(int nMillisecond)
{
	ui->textBrowser->setHtml("");
	ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/nextoff.png)");
	ui->pBtnNext->setEnabled(false);
	ui->labelLoading->setVisible(true);
	ui->labelHead->setVisible(false);
	m_bInterrupted = false;
	// 定时关闭
	if (nMillisecond > 0)
	{
		m_pTimer->start(nMillisecond);
		// 读取身份证信息
		int nCount = nMillisecond / (50 * 2);
		do
		{
			QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
			// 读取成功
			if (150 == nCount) {
				ui->labelLoading->setVisible(false);
				ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/nexton.png)");
				ui->pBtnNext->setEnabled(true);
				//将读取的数据写成html，设置进textBrower
				QString qstrIDInfo = m_qstrIDTemplateHtml;
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
				ui->textBrowser->setHtml(qstrIDInfo);
				ui->labelHead->setPixmap(QPixmap("./Resources/Images/head.png"));
				ui->labelHead->setScaledContents(true);
				ui->labelHead->setVisible(true);
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

void CheckIDDialog::on_pBtnHomepage_clicked()
{
    // 回到主页
	//this->close();
	m_bInterrupted = true;
	m_pTimer->stop();
	emit goHomeSignal();
}

void CheckIDDialog::on_pBtnNext_clicked()
{
    // 下一步
	m_pTimer->stop();
	emit idCheckedSignal(m_caller);
	//this->close();
}

void CheckIDDialog::setCaller(unsigned int type)
{
	m_caller = type;
}
