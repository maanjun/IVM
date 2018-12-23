#ifndef CHECKRECEIPTDIALOG_H
#define CHECKRECEIPTDIALOG_H

#include "common.h"
#include "basedialog.h"

namespace Ui {
class CheckReceiptDialog;
}

class CheckReceiptDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CheckReceiptDialog(QWidget *parent = 0);
    ~CheckReceiptDialog();

	void startTimer(int nMillisecond = 60000);

	void setOwnerId(QString qstrOwnerId);

	QTimer *m_pTimer;
	//对话框之间传递身份证号
	QString m_qstrOwnerId;

private slots:
    void on_pBtnHomepage_clicked();

    void on_pBtnNext_clicked();

	void onReceiptEdited(const QString &text);

	void onTaxEdited(const QString &text);

	void onTimecoutSlot();

signals:
	void goHomeSignal();
signals:
	void receiptCheckedSingal();

private:
    Ui::CheckReceiptDialog *ui;
};

#endif // CHECKRECEIPTDIALOG_H
