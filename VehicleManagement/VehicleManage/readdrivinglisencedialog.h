#ifndef READDRIVINGLISENCEDIALOG_H
#define READDRIVINGLISENCEDIALOG_H

#include "common.h"
#include "basedialog.h"
#include "operateMysql.h"

namespace Ui {
class ReadDrivinglisenceDialog;
}

class ReadDrivinglisenceDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit ReadDrivinglisenceDialog(QWidget *parent = 0);
    ~ReadDrivinglisenceDialog();

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
    Ui::ReadDrivinglisenceDialog *ui;
};

#endif // READDRIVINGLISENCEDIALOG_H
