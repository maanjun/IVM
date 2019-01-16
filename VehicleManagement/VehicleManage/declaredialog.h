#ifndef DECLAREDIALOG_H
#define DECLAREDIALOG_H

#include <QDialog>
#include "basedialog.h"

namespace Ui {
class DeclareDialog;
}

class DeclareDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit DeclareDialog(QWidget *parent = 0);
    ~DeclareDialog();

private slots:
	void on_pBtnHomepage_clicked();

	void on_pBtnNext_clicked();

private:
    Ui::DeclareDialog *ui;
};

#endif // DECLAREDIALOG_H
