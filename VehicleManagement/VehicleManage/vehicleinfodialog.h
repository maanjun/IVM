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

	void startTimer(int nMillisecond = 60000);

private slots:
    void on_pBtnHomepage_clicked();

    void on_pBtnNext_clicked();

//signals:
//	void vehicleInfoDoneSingal();

private:
    Ui::VehicleInfoDialog *ui;

	QString m_qstrVehicleInfoTemplateHtml;
};

#endif // VEHICLEINFODIALOG_H
