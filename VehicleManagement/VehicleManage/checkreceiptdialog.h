#ifndef CHECKRECEIPTDIALOG_H
#define CHECKRECEIPTDIALOG_H

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

private slots:
    void on_pBtnHomepage_clicked();

    void on_pBtnNext_clicked();

	void onReceiptEdited(const QString &text);

	void onTaxEdited(const QString &text);

private:
    Ui::CheckReceiptDialog *ui;

signals:
	void goHomeSignal();
signals:
	void receiptCheckedSingal();

private slots:
	void onTimecoutSlot();

public:
	QTimer *m_pTimer;
};

#endif // CHECKRECEIPTDIALOG_H
