#include "inputdonedialog.h"
#include "ui_inputdonedialog.h"
#include "common.h"

InputDoneDialog::InputDoneDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::InputDoneDialog)
{
    ui->setupUi(this);

	// ��ȡģ��
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
	// ��ʱ�ر�
	if (nMillisecond > 0)
	{
		m_pTimer->start(nMillisecond);
	}
	else
	{
		// Ĭ��60���Զ��ر�
		m_pTimer->start(60000);
	}
	// �����ݿ��ȡ
	if (true)
	{
		//��ȡ�����ݱ����������Ա���ӡ,
		//������ļ������֤������
		QString qstrPrintContent = m_qstrDetailTemplateHtml;
		writeFile("", qstrPrintContent);
		//ͬʱ����ģ��չʾ
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
	// �轫html����
	// printFile("D:\\Works\\Mine\\IVM\\Codes\\IVM\\VehicleManagement\\VehicleManage\\Data\\detail.html");
	printContent(m_qstrDetailTemplateHtml.toStdString());
	//this->close();
}
