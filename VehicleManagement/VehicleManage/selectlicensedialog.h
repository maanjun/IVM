#ifndef SELECTLICENSEDIALOG_H
#define SELECTLICENSEDIALOG_H

#include "basedialog.h"

namespace Ui {
class SelectLicenseDialog;
}

class SelectLicenseDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit SelectLicenseDialog(QWidget *parent = 0);
    ~SelectLicenseDialog();

private slots:
    void on_pBtnHomepage_clicked();

    void on_pBtnConfirm_clicked();

//signals:
//    void selectDoneSingal();

private:
    Ui::SelectLicenseDialog *ui;
};

#endif // SELECTLICENSEDIALOG_H
