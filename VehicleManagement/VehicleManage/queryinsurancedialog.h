#ifndef QUERYINSURANCEDIALOG_H
#define QUERYINSURANCEDIALOG_H

//#include <QDialog>
#include "basedialog.h"

namespace Ui {
class QueryInsuranceDialog;
}

class QueryInsuranceDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit QueryInsuranceDialog(QWidget *parent = 0);
    ~QueryInsuranceDialog();

private slots:
	void on_pBtnHomepage_clicked();

	void on_pBtnDone_clicked();

private:
    Ui::QueryInsuranceDialog *ui;
};

#endif // QUERYINSURANCEDIALOG_H
