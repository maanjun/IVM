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

	virtual void startTimer(int nMillisecond = 30000);

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
	void faceRecognicedSignal(unsigned int nCaller);

signals:
	void queryTaxDoneSignal();
signals:
	void taxDeclaredSignal(QString qstrOwnerId);
signals:
	void certificateReadSignal(QString qstrOwnerId);
signals:
	void payTaxConfirmedSignal(QString qstrOwnerId);
signals:
	void paytaxDoneSignal(QString qstrOwnerId);
signals:
	void inputTaxDoneSignal(QString qstrOwnerId);
signals:
	void queryDeclareTaxResultDoneSignal();

signals:
	void queryInsuranceDoneSignal();
signals:
	void insuranceDeclaredSignal(QString qstrOwnerId);
signals:
	void drivinglisenceReadSignal(QString qstrOwnerId);
signals:
	void payInsuranceConfirmedSignal(QString qstrOwnerId);
signals:
	void payinsuranceDoneSignal(QString qstrOwnerId);
signals:
	void inputInsuranceDoneSignal(QString qstrOwnerId);
signals:
	void queryDeclareInsuranceResultDoneSignal();
signals:
	void mortgageSelectSignal(int single);//查询电子抵押完成按钮
signals:
	void mortgageInputDown( );//查询电子抵押输入确认按钮
signals:
	void InputVINDone(int ownerGUI);//查询电子抵押输入确认按钮

private slots:
	void onTimecoutSlot();

	void showCountdownTimeSlot();

	void hideLabelWarningSlot();

private:
    Ui::BaseDialog *ui;
};

#endif // BASEDIALOG_H
