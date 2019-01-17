#ifndef DECLARETAXDIALOG_H
#define DECLARETAXDIALOG_H

#include <QDialog>
#include "basedialog.h"

namespace Ui {
class DeclareTaxDialog;
}

class DeclareTaxDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit DeclareTaxDialog(QWidget *parent = 0);
    ~DeclareTaxDialog();

private slots:
	void on_pBtnHomepage_clicked();

	void on_pBtnNext_clicked();

private:
    Ui::DeclareTaxDialog *ui;
};

#endif // DECLARETAXDIALOG_H
