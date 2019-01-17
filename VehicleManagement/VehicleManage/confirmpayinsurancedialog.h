#ifndef CONFIRMPAYINSURANCEDIALOG_H
#define CONFIRMPAYINSURANCEDIALOG_H

#include <QDialog>
#include "basedialog.h"

namespace Ui {
class ConfirmPayinsuranceDialog;
}

class ConfirmPayinsuranceDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit ConfirmPayinsuranceDialog(QWidget *parent = 0);
    ~ConfirmPayinsuranceDialog();

private slots:
	void on_pBtnHomepage_clicked();

	void on_pBtnNext_clicked();

private:
    Ui::ConfirmPayinsuranceDialog *ui;
};

#endif // CONFIRMPAYINSURANCEDIALOG_H
