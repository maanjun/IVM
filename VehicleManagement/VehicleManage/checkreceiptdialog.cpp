#include "checkreceiptdialog.h"
#include "ui_checkreceiptdialog.h"
#include <QMessageBox>

CheckReceiptDialog::CheckReceiptDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::CheckReceiptDialog)
{
    ui->setupUi(this);

	m_taxaction.reset();

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

void CheckReceiptDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void CheckReceiptDialog::on_pBtnNext_clicked()
{
	// 后台上传，不用等上传完成后才返回主页面，
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit receiptCheckedSingal(m_qstrOwnerId);
	// 上传至文件服务器
	QString qstrReceiptImage = "";
	QString qstrTaxImage = "";
	uploadFile("D:\\Works\\Mine\\IVM\\Documents\\testimages\\23.jpg", qstrReceiptImage); // 发票
	uploadFile("D:\\Works\\Mine\\IVM\\Documents\\testimages\\121.jpg", qstrTaxImage); // 车船税
	// 存入数据库
	m_operateMysql.init();
	m_operateMysql.begin();
	QString qstrInsertSql = QString("INSERT INTO TAXATION(RECEIPTNO, TAXCODE, USERID, OWNERNO, RECEIPTIMAGE, TAXIMAGE, ISVALID) VALUES('%1', '%2', %3, '%4', '%5', '%6', %7)")
		.arg(ui->lineEditReceipt->text())
		.arg(ui->lineEditTax->text())
		.arg(m_taxaction.nUserid)
		.arg(m_qstrOwnerId)
		.arg(qstrReceiptImage)
		.arg(qstrTaxImage)
		.arg(1);
	QString qstrUpdateSql = QString("UPDATE USER SET STAGE=3 WHERE NUMBER='%1'").arg(m_qstrOwnerId);
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
}

void CheckReceiptDialog::startTimer(int nMillisecond)
{
	m_nMillisecond = nMillisecond / 1000;
	m_pCountdownTimer->start(1000);

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
		m_pTimer->start(30000);
	}
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

QString CheckReceiptDialog::getUrlFromReply(QNetworkReply *pNetworkReply)
{
	// todo 解析失败
	QByteArray ba = pNetworkReply->readAll();
	QJsonParseError jsonpe;
	QJsonDocument json = QJsonDocument::fromJson(ba, &jsonpe);
	if (jsonpe.error == QJsonParseError::NoError)
	{
		if (json.isObject())
		{
			QJsonObject obj = json.object();
			if (obj.contains("code"))
			{
				QString qstrCode = obj["code"].toString();
				if (0 == qstrCode.compare(QString('0'))) {
					if (obj.contains("url")) {
						return obj["url"].toString();
					}
				}
			}
		}
		else
		{
			qDebug() << "error, shoud json object";
		}
	}
	else
	{
		qDebug() << "error:" << jsonpe.errorString();
	}
	return "";
}

// 上传文件(同步方式上传)
bool CheckReceiptDialog::uploadFile(QString qstrLocalPath, QString &qstrImageUrl)
{
	try
	{
		QNetworkRequest request;
		request.setUrl(QUrl("http://127.0.0.1:7001/upload?type=image&p=0"));
		QHttpMultiPart *multiPart = new QHttpMultiPart(QHttpMultiPart::FormDataType);
		QHttpPart imagePart;
		imagePart.setHeader(QNetworkRequest::ContentTypeHeader, QVariant("image/jpeg"));//如果是png图片填image/png
		imagePart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"image\"; filename=\"image.jpg\""));
		QFile *file = new QFile(qstrLocalPath);
		file->open(QIODevice::ReadOnly);
		imagePart.setBodyDevice(file);
		multiPart->append(imagePart);
		//往该目录中上传文件
		m_pAccessManager = new QNetworkAccessManager();
		m_pAccessManager->setNetworkAccessible(QNetworkAccessManager::Accessible);
		QNetworkReply *pNetworkReply = m_pAccessManager->post(request, multiPart);
		//QByteArray responseData; 
		QEventLoop eventLoop; 
		connect(m_pAccessManager, SIGNAL(finished(QNetworkReply*)), &eventLoop, SLOT(quit())); 
		eventLoop.exec(); //block until finish
		//responseData = pNetworkReply->readAll();
		qstrImageUrl = getUrlFromReply(pNetworkReply);
		if (NULL != m_pAccessManager)
		{
			delete m_pAccessManager;
		}
	}
	catch (std::exception &e)
	{
		return false;
	}
	return true;
}
