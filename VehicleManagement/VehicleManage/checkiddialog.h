#ifndef CHECKIDDIALOG_H
#define CHECKIDDIALOG_H

#include "basedialog.h"

namespace Ui {
class CheckIDDialog;
}

class CheckIDDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit CheckIDDialog(QWidget *parent = 0);
    ~CheckIDDialog();

	void setCaller(unsigned int type);

	void startTimer(int nMillisecond = 60000);

private slots:
    void on_pBtnHomepage_clicked();

    void on_pBtnNext_clicked();

//signals:
//	void idCheckedSignal(unsigned int type);

private:
    Ui::CheckIDDialog *ui;

	unsigned int m_caller;

	unsigned int m_seconds;

	QString m_qstrIDTemplateHtml;
};

#endif // CHECKIDDIALOG_H
