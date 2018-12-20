#ifndef INPUTDONEDIALOG_H
#define INPUTDONEDIALOG_H

#include "basedialog.h"

namespace Ui {
class InputDoneDialog;
}

class InputDoneDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit InputDoneDialog(QWidget *parent = 0);
    ~InputDoneDialog();

private slots:
    void on_pBtnHomepage_clicked();

    void on_pBtnDone_clicked();

//signals:
//	void inputDoneSingal();

private:
    Ui::InputDoneDialog *ui;
};

#endif // INPUTDONEDIALOG_H
