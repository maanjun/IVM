#ifndef CHECKRECEIPTDIALOG_H
#define CHECKRECEIPTDIALOG_H

#include "basedialog.h"

namespace Ui {
class CheckReceiptDialog;
}

class CheckReceiptDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit CheckReceiptDialog(QWidget *parent = 0);
    ~CheckReceiptDialog();

private slots:
    void on_pBtnHomepage_clicked();

    void on_pBtnNext_clicked();

//signals:
//	void receiptCheckedSingal();

private:
    Ui::CheckReceiptDialog *ui;
};

#endif // CHECKRECEIPTDIALOG_H
