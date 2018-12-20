#include "vehiclemanage.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	VehicleManage w;
	w.show();
	return a.exec();
}
