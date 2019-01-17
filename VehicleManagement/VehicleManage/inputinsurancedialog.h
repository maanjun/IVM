#ifndef INPUTINSURANCEDIALOG_H
#define INPUTINSURANCEDIALOG_H

#include <QDialog>
#include "basedialog.h"

namespace Ui {
class InputInsuranceDialog;
}

class InputInsuranceDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit InputInsuranceDialog(QWidget *parent = 0);
    ~InputInsuranceDialog();

private slots:
    void on_pBtnHomepage_clicked();

    void on_pBtnDone_clicked();

private:
    Ui::InputInsuranceDialog *ui;
};

#endif // INPUTINSURANCEDIALOG_H
