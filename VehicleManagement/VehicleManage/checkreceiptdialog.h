#ifndef CHECKRECEIPTDIALOG_H
#define CHECKRECEIPTDIALOG_H

#include "common.h"
#include "basedialog.h"
#include "operateMysql.h"
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QFile>
#include <QHttpMultiPart>
#include <QHttpPart>
#include <QTextStream>
#include <QPrinter>
#include <QFileInfo>
#include <QUrlQuery>
#include <QJsonParseError>
#include <QJsonObject>
#include <QJsonDocument>

namespace Ui {
class CheckReceiptDialog;
}

class CheckReceiptDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit CheckReceiptDialog(QWidget *parent = 0);
    ~CheckReceiptDialog();

	void startTimer(int nMillisecond = 30000);

private:
	OperateMysql m_operateMysql;

	Taxation m_taxaction;

	QNetworkAccessManager *m_pAccessManager;

	bool uploadFile(QString qstrLocalPath, QString &qstrImageUrl);

	QString getUrlFromReply(QNetworkReply *pNetworkReply);

private slots:
    void on_pBtnHomepage_clicked();

    void on_pBtnNext_clicked();

	void onReceiptEdited(const QString &text);

	void onTaxEdited(const QString &text);

private:
    Ui::CheckReceiptDialog *ui;
};

#endif // CHECKRECEIPTDIALOG_H
