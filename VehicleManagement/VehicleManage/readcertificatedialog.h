#ifndef READCERTIFICATEDIALOG_H
#define READCERTIFICATEDIALOG_H

#include "common.h"
#include "basedialog.h"
#include "operateMysql.h"

namespace Ui {
class ReadCertificateDialog;
}

class ReadCertificateDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit ReadCertificateDialog(QWidget *parent = 0);
    ~ReadCertificateDialog();

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
    Ui::ReadCertificateDialog *ui;
};

#endif // READCERTIFICATEDIALOG_H
