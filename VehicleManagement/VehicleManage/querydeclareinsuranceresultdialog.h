#ifndef QUERYDECLAREINSURANCERESULTDIALOG_H
#define QUERYDECLAREINSURANCERESULTDIALOG_H

#include <QDialog>
#include "basedialog.h"

namespace Ui {
class QueryDeclareInsuranceResultDialog;
}

class QueryDeclareInsuranceResultDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit QueryDeclareInsuranceResultDialog(QWidget *parent = 0);
    ~QueryDeclareInsuranceResultDialog();

private slots:
	void on_pBtnHomepage_clicked();

	void on_pBtnDone_clicked();

private:
    Ui::QueryDeclareInsuranceResultDialog *ui;
};

#endif // QUERYDECLAREINSURANCERESULTDIALOG_H
