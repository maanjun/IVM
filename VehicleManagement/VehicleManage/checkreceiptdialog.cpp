#include "checkreceiptdialog.h"
#include "ui_checkreceiptdialog.h"

CheckReceiptDialog::CheckReceiptDialog(QWidget *parent) :
	QDialog(parent),
    ui(new Ui::CheckReceiptDialog)
{
    ui->setupUi(this);

	this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
	ui->labelTitle->setAttribute(Qt::WA_TranslucentBackground);
	ui->labelTitle->setStyleSheet("background:transparent");

	m_pTimer = new QTimer(this);
	m_pTimer->setSingleShot(true);
	connect(m_pTimer, SIGNAL(timeout()), this, SLOT(onTimecoutSlot()));

	ui->pBtnNext->setEnabled(false);

	QRegExp regReceipt("^[0-9]{8}$");
	QRegExpValidator *validatorReceipt = new QRegExpValidator(regReceipt, this);
	ui->lineEditReceipt->setValidator(validatorReceipt);

	QRegExp regTax("^[0-9]{8}$");
	QRegExpValidator *validatorTax = new QRegExpValidator(regTax, this);
	ui->lineEditTax->setValidator(validatorTax);

	connect(ui->lineEditReceipt, SIGNAL(textEdited(const QString &)), this, SLOT(onReceiptEdited(const QString &)));
	connect(ui->lineEditTax, SIGNAL(textEdited(const QString &)), this, SLOT(onTaxEdited(const QString &)));
}

CheckReceiptDialog::~CheckReceiptDialog()
{
    delete ui;
}

void CheckReceiptDialog::startTimer(int nMillisecond)
{
	ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/nextoff.png)");
	ui->pBtnNext->setEnabled(false);
	ui->lineEditReceipt->setText("");
	ui->lineEditTax->setText("");
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
}

void CheckReceiptDialog::on_pBtnHomepage_clicked()
{
	//this->close();
	m_pTimer->stop();
	emit goHomeSignal();
}

void CheckReceiptDialog::on_pBtnNext_clicked()
{
	m_pTimer->stop();
	// 上传至文件服务器
	uploadFile("D:\\Works\\Mine\\IVM\\Documents\\testimages\\23.jpg");
	emit receiptCheckedSingal();
	//this->close();
}

void CheckReceiptDialog::onReceiptEdited(const QString &text)
{
	QString qstrReceipt = ui->lineEditReceipt->text();
	QString qstrTax = ui->lineEditTax->text();
	if (qstrReceipt.length() >= 8 && qstrTax.length() >= 8)
	{
		ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/nexton.png)");
		ui->pBtnNext->setEnabled(true);
	}
	else {
		ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/nextoff.png)");
		ui->pBtnNext->setEnabled(false);
	}
}

void CheckReceiptDialog::onTaxEdited(const QString &text)
{
	QString qstrReceipt = ui->lineEditReceipt->text();
	QString qstrTax = ui->lineEditTax->text();
	if (qstrReceipt.length() >= 8 && qstrTax.length() >= 8)
	{
		ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/nexton.png)");
		ui->pBtnNext->setEnabled(true);
	}
	else {
		ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/nextoff.png)");
		ui->pBtnNext->setEnabled(false);
	}
}

void CheckReceiptDialog::onTimecoutSlot()
{
	emit goHomeSignal();
}

void CheckReceiptDialog::setOwnerId(QString qstrOwnerId)
{
	m_qstrOwnerId = qstrOwnerId;
}
