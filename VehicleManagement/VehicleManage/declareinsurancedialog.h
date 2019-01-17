#ifndef DECLAREINSURANCEDIALOG_H
#define DECLAREINSURANCEDIALOG_H

#include <QDialog>
#include "basedialog.h"

namespace Ui {
class DeclareInsuranceDialog;
}

class DeclareInsuranceDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit DeclareInsuranceDialog(QWidget *parent = 0);
    ~DeclareInsuranceDialog();

private slots:
	void on_pBtnHomepage_clicked();

	void on_pBtnNext_clicked();

private:
    Ui::DeclareInsuranceDialog *ui;
};

#endif // DECLAREINSURANCEDIALOG_H
