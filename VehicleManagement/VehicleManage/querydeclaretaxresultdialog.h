#ifndef QUERYDECLARETAXRESULTDIALOG_H
#define QUERYDECLARETAXRESULTDIALOG_H

#include <QDialog>
#include "basedialog.h"

namespace Ui {
class QueryDeclareTaxResultDialog;
}

class QueryDeclareTaxResultDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit QueryDeclareTaxResultDialog(QWidget *parent = 0);
    ~QueryDeclareTaxResultDialog();

private slots:
	void on_pBtnHomepage_clicked();

	void on_pBtnDone_clicked();

private:
    Ui::QueryDeclareTaxResultDialog *ui;
};

#endif // QUERYDECLARETAXRESULTDIALOG_H
