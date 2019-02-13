#ifndef CONFIRMPAYDIALOG_H
#define CONFIRMPAYDIALOG_H

#include <QDialog>
#include "basedialog.h"

namespace Ui {
class ConfirmPayDialog;
}

class ConfirmPayDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit ConfirmPayDialog(QWidget *parent = 0);
    ~ConfirmPayDialog();

private slots:
	void on_pBtnHomepage_clicked();

	void on_pBtnNext_clicked();

private:
    Ui::ConfirmPayDialog *ui;
};

#endif // CONFIRMPAYDIALOG_H
