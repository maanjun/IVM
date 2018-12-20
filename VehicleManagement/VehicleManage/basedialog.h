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

	virtual void startTimer(int nMillisecond = 60000);

signals:
	void goHomeSignal();
signals:
	void idCheckedSignal(unsigned int type);
signals:
	void receiptCheckedSingal();
signals:
	void vehicleInfoDoneSingal();
signals:
	void inputDoneSingal();
signals:
	void selectDoneSingal();

private slots:
	void onTimecoutSlot();

private:
    Ui::BaseDialog *ui;

public:
    QTimer *m_pTimer;

	bool m_bInterrupted;
};

#endif // BASEDIALOG_H
