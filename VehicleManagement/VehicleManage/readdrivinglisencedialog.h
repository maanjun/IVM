#ifndef READDRIVINGLISENCEDIALOG_H
#define READDRIVINGLISENCEDIALOG_H

//#include <QDialog>
#include "basedialog.h"

namespace Ui {
class ReadDrivinglisenceDialog;
}

class ReadDrivinglisenceDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit ReadDrivinglisenceDialog(QWidget *parent = 0);
    ~ReadDrivinglisenceDialog();

private slots:
    void on_pBtnHomepage_clicked();

    void on_pBtnNext_clicked();

private:
    Ui::ReadDrivinglisenceDialog *ui;
};

#endif // READDRIVINGLISENCEDIALOG_H
