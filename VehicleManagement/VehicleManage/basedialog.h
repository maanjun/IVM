#ifndef BASEDIALOG_H
#define BASEDIALOG_H

#include <QDialog>
#include <QTimer>
#include <QKeyEvent>

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
	//�Ի���֮�䴫�����֤��
	QString m_qstrOwnerId;

	int m_nMillisecond;

	virtual void startTimer(int nMillisecond = 20000);

	virtual void stopTimer();

	void setOwnerId(QString qstrOwnerId);

	void setLabelContent(QString qstrContent);

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
	void inputDoneSingal();
signals:
	void selectDoneSingal();

private slots:
	void onTimecoutSlot();

	void showCountdownTimeSlot();

	void hideLabelWarningSlot();

private:
    Ui::BaseDialog *ui;
};

#endif // BASEDIALOG_H
