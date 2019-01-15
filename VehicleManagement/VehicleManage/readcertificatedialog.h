#ifndef READCERTIFICATEDIALOG_H
#define READCERTIFICATEDIALOG_H

//#include <QDialog>
#include "basedialog.h"

namespace Ui {
class ReadCertificateDialog;
}

class ReadCertificateDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit ReadCertificateDialog(QWidget *parent = 0);
    ~ReadCertificateDialog();

private slots:
    void on_pBtnHomepage_clicked();

    void on_pBtnNext_clicked();

private:
    Ui::ReadCertificateDialog *ui;
};

#endif // READCERTIFICATEDIALOG_H
