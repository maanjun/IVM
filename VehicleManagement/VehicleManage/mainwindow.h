#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "vehiclemanage.h"
#include "drivingmanage.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
	VehicleManage *m_pVehicleManage;

	DrivingManage *m_pDrivingManage;

	void init();

	void finit();

private slots:

    void on_pBtnVehicle_clicked();

    void on_pBtnDrive_clicked();

	void onGohomeVehicleSlot();

	void onGohomeDrivingSlot();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
