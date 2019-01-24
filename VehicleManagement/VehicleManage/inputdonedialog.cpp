#include "inputdonedialog.h"
#include "ui_inputdonedialog.h"
#include <QMessageBox>

InputDoneDialog::InputDoneDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::InputDoneDialog)
{
    ui->setupUi(this);

	// ��ȡģ��
	m_qstrSumaryTemplateHtml = "";
	QString runPath = QCoreApplication::applicationDirPath() + "/Resources/Html/summarytemplate.html";
	readFile(runPath, m_qstrSumaryTemplateHtml);
	m_qstrDetailTemplateHtml = "";
	runPath = QCoreApplication::applicationDirPath() + "/Resources/Html/detailtemplate.html";
	readFile(runPath, m_qstrDetailTemplateHtml);

	m_pUSBPrinter = new USBPrinter();
}

InputDoneDialog::~InputDoneDialog()
{
	if (nullptr != m_pUSBPrinter)
	{
		delete m_pUSBPrinter;
		m_pUSBPrinter = nullptr;
	}
    delete ui;
}

void InputDoneDialog::startTimer(int nMillisecond)
{
	m_nMillisecond = nMillisecond / 1000;
	m_pCountdownTimer->start(1000);

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
		m_pTimer->start(30000);
	}
	// �����ݿ��ȡ
	m_operateMysql.init();
	QString qstrSelect = QString("SELECT * FROM USER U LEFT JOIN VEHICLE V ON V.OWNERNO = U.NUMBER LEFT JOIN TAXATION T ON T.OWNERNO = U.NUMBER WHERE U.NUMBER = '1%'").arg(m_qstrOwnerId);
	m_operateMysql.queryExe(qstrSelect);
	if (1)
	{
		m_qstrDetailTemplateHtml.arg("").arg("");
		//��ȡ�����ݱ����������Ա���ӡ (�����ӡ�ļ�������ֱ�Ӵ�ӡ���ݣ�
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
	m_operateMysql.close();
}

void InputDoneDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void InputDoneDialog::on_pBtnDone_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit inputDoneSignal();
	// ��̨����
	// �����ݿ�ȡ����
	m_operateMysql.init();
	m_operateMysql.begin();
	QString qstrUpdateSql = QString("UPDATE USER SET STAGE=4 WHERE NUMBER='%1'").arg(m_qstrOwnerId);
	if (m_operateMysql.queryExe(qstrUpdateSql))
	{
		m_operateMysql.commit();
	}
	else
	{
		m_operateMysql.rollback();
		//QMessageBox::information(NULL, QString::fromLocal8Bit("��ʾ"), QString::fromLocal8Bit("���ݲ������"));
	}
	m_operateMysql.close();
	// �轫html����
	//printFile(".\\Data\\detail.html");
	//printContent(m_qstrDetailTemplateHtml.toStdString());
	/************************************************************************/
	/* ò��û�д�ӡ��                                                       */
	/************************************************************************/
	m_pUSBPrinter->InitDefualtPrinter();
	m_pUSBPrinter->PrinterDoc(".\\Data\\detail.html");
	m_pUSBPrinter->PrinterCut();
	m_pUSBPrinter->ClosePrinter();
}
