#ifndef VEHICLEINFODIALOG_H
#define VEHICLEINFODIALOG_H

#include "common.h"
#include "basedialog.h"
#include "operateMysql.h"

namespace Ui {
class VehicleInfoDialog;
}

class VehicleInfoDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit VehicleInfoDialog(QWidget *parent = 0);
    ~VehicleInfoDialog();

	void startTimer(int nMillisecond = 30000);

private:
	QString m_qstrIdNumber;

	QString m_qstrVehicleInfoTemplateHtml;

	OperateMysql m_operateMysql;

	VehicleInfo m_vehicleInfo;

private slots:
    void on_pBtnHomepage_clicked();

    void on_pBtnNext_clicked();

private:
    Ui::VehicleInfoDialog *ui;
};

#endif // VEHICLEINFODIALOG_H
