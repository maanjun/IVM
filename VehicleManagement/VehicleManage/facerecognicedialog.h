#ifndef FACERECOGNICEDIALOG_H
#define FACERECOGNICEDIALOG_H

#include "basedialog.h"

namespace Ui {
class FaceRecogniceDialog;
}

class FaceRecogniceDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit FaceRecogniceDialog(unsigned int caller, QWidget *parent = 0);
    ~FaceRecogniceDialog();

private:
	unsigned int m_caller;

private slots:
    void on_pBtnHomepage_clicked();

    void on_pBtnNext_clicked();

private:
    Ui::FaceRecogniceDialog *ui;
};

#endif // FACERECOGNICEDIALOG_H
