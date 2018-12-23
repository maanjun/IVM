#ifndef SELECTLICENSEDIALOG_H
#define SELECTLICENSEDIALOG_H

#include "common.h"
#include "basedialog.h"

#define LICENSECOUNT 20

namespace Ui {
class SelectLicenseDialog;
}

class SelectLicenseDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit SelectLicenseDialog(QWidget *parent = 0);
    ~SelectLicenseDialog();

	void startTimer(int nMillisecond = 60000);

private slots:
    void on_pBtnHomepage_clicked();

	void onBtnNextClicked();

    void on_pBtnConfirm_clicked();

	void onLicenseSelectedSlot();

//signals:
//    void selectDoneSingal();

private:
    Ui::SelectLicenseDialog *ui;

	QPushButton *m_qstrBtnList[LICENSECOUNT];

	QString m_qstrLicenseSelected;

	int m_nCountNextLeft;
};

#endif // SELECTLICENSEDIALOG_H
