#ifndef BASEDIALOG_H
#define BASEDIALOG_H

#include <QDialog>
#include <QTimer>

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

	bool m_bInterrupted;
	//对话框之间传递身份证号
	QString m_qstrOwnerId;

	virtual void startTimer(int nMillisecond = 60000);

	virtual void stopTimer();

	void setOwnerId(QString qstrOwnerId);

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

private:
    Ui::BaseDialog *ui;
};

#endif // BASEDIALOG_H
