#include "inputdonedialog.h"
#include "ui_inputdonedialog.h"
#include "common.h"

InputDoneDialog::InputDoneDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::InputDoneDialog)
{
    ui->setupUi(this);

	// 读取模板
	m_qstrSumaryTemplateHtml = "";
	readFile("D:\\Works\\Mine\\IVM\\Codes\\IVM\\VehicleManagement\\VehicleManage\\Resources\\Html\\summarytemplate.html", m_qstrSumaryTemplateHtml);
	m_qstrDetailTemplateHtml = "";
	readFile("D:\\Works\\Mine\\IVM\\Codes\\IVM\\VehicleManagement\\VehicleManage\\Resources\\Html\\detailtemplate.html", m_qstrDetailTemplateHtml);
}

InputDoneDialog::~InputDoneDialog()
{
    delete ui;
}

void InputDoneDialog::startTimer(int nMillisecond)
{
	ui->textBrowser->setHtml("");
	ui->pBtnDone->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/finishoff.png)");
	ui->pBtnDone->setEnabled(false);
	// 定时关闭
	if (nMillisecond > 0)
	{
		m_pTimer->start(nMillisecond);
	}
	else
	{
		// 默认60秒自动关闭
		m_pTimer->start(60000);
	}
	// 从数据库读取
	if (true)
	{
		//读取的数据保存至本地以备打印,
		//保存的文件以身份证号命名
		QString qstrPrintContent = m_qstrDetailTemplateHtml;
		writeFile("", qstrPrintContent);
		//同时插入模板展示
		QString qstrShowContent = m_qstrSumaryTemplateHtml;
		ui->textBrowser->setHtml(qstrShowContent);
		ui->pBtnDone->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/finishon.png)");
		ui->pBtnDone->setEnabled(true);
	}
	else
	{
		ui->pBtnDone->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/finishoff.png)");
		ui->pBtnDone->setEnabled(false);
	}
}

void InputDoneDialog::on_pBtnHomepage_clicked()
{
	//this->close();
	m_pTimer->stop();
	emit goHomeSignal();
}

void InputDoneDialog::on_pBtnDone_clicked()
{
	m_pTimer->stop();
	emit inputDoneSingal();
	// 需将html美化
	// printFile("D:\\Works\\Mine\\IVM\\Codes\\IVM\\VehicleManagement\\VehicleManage\\Data\\detail.html");
	printContent(m_qstrDetailTemplateHtml.toStdString());
	//this->close();
}
