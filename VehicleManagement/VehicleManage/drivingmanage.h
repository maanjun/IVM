#ifndef DRIVINGMANAGE_H
#define DRIVINGMANAGE_H

#include <QMainWindow>
#include <QDialog>

namespace Ui {
class DrivingManage;
}

class DrivingManage : public QDialog
{
    Q_OBJECT

public:
    explicit DrivingManage(QWidget *parent = 0);
    ~DrivingManage();

signals:
	void goHomeDrivingSignal();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

	void on_pBtnGohome_clicked();

private:
    Ui::DrivingManage *ui;
};

#endif // DRIVINGMANAGE_H
