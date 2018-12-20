#ifndef VEHICLEINFODIALOG_H
#define VEHICLEINFODIALOG_H

#include "basedialog.h"

namespace Ui {
class VehicleInfoDialog;
}

class VehicleInfoDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit VehicleInfoDialog(QWidget *parent = 0);
    ~VehicleInfoDialog();

private slots:
    void on_pBtnHomepage_clicked();

    void on_pBtnNext_clicked();

//signals:
//	void vehicleInfoDoneSingal();

private:
    Ui::VehicleInfoDialog *ui;
};

#endif // VEHICLEINFODIALOG_H
