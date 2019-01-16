#ifndef BASEDIALOG_H
#define BASEDIALOG_H

#include <QDialog>
#include <QTimer>
#include <QKeyEvent>
#include "common.h"

namespace Ui {
class BaseDialog;
}

class BaseDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BaseDialog(QWidget *parent = 0);
    ~BaseDialog();

public:
	QTimer *m_pTimer;

	QTimer *m_pCountdownTimer;

	QTimer *m_pLabelWarningTimer;

	bool m_bInterrupted;
	//对话框之间传递身份证号
	QString m_qstrOwnerId;

	int m_nMillisecond;

	virtual void startTimer(int nMillisecond = 60000);

	virtual void stopTimer();

	void setOwnerId(QString qstrOwnerId);

	void setLabelContent(QString qstrContent, TipLevel = INFO_TIP);

	void keyPressEvent(QKeyEvent *event);

signals:
	void goHomeSignal();
signals:
	void idCheckedSignal(unsigned int nCaller, QString qstrOwnerId);
signals:
	void idScannedSignal(unsigned int nStage, QString qstrOwnerId);
signals:
	void receiptCheckedSingal(QString qstrOwnerId);
signals:
	void vehicleInfoDoneSingal(QString qstrOwnerId);
signals:
	void inputDoneSignal();
signals:
	void selectDoneSignal();
signals:
	void queryTaxDoneSignal();
signals:
	void declaredSignal(QString qstrOwnerId);
signals:
	void certificateReadSignal(QString qstrOwnerId);
signals:
	void payConfirmedSignal(QString qstrOwnerId);
signals:
	void paytaxDoneSignal(QString qstrOwnerId);
signals:
	void faceRecognicedSignal();
signals:
	void inputTaxDoneSignal();

private slots:
	void onTimecoutSlot();

	void showCountdownTimeSlot();

	void hideLabelWarningSlot();

private:
    Ui::BaseDialog *ui;
};

#endif // BASEDIALOG_H
