#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

	init();
}

MainWindow::~MainWindow()
{
	finit();

    delete ui;
}

void MainWindow::init()
{
#ifndef _DEBUG
	this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
#endif

	m_pVehicleManage = new VehicleManage(this);
	connect(m_pVehicleManage, SIGNAL(goHomeVehicleSignal()), this, SLOT(onGohomeVehicleSlot()));

	m_pDrivingManage = new DrivingManage(this);
	connect(m_pDrivingManage, SIGNAL(goHomeDrivingSignal()), this, SLOT(onGohomeDrivingSlot()));
}

void MainWindow::finit()
{

}

void MainWindow::on_pBtnVehicle_clicked()
{
	this->hide();
	m_pVehicleManage->show();
	m_pDrivingManage->hide();
}

void MainWindow::on_pBtnDrive_clicked()
{
	this->hide();
	m_pVehicleManage->hide();
	m_pDrivingManage->show();
}

void MainWindow::onGohomeVehicleSlot()
{
	this->show();
	m_pVehicleManage->hide();
	m_pDrivingManage->hide();
}

void MainWindow::onGohomeDrivingSlot()
{
	this->show();
	m_pVehicleManage->hide();
	m_pDrivingManage->hide();
}
