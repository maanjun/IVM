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

private:
    Ui::DeclareDialog *ui;
};

#endif // DECLAREDIALOG_H
