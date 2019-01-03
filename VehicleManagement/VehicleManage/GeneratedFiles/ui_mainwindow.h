/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pBtnVehicle;
    QPushButton *pBtnDrive;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1920, 1080);
        MainWindow->setStyleSheet(QStringLiteral("border-image: url(:/Resources/Images/background.jpg);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pBtnVehicle = new QPushButton(centralWidget);
        pBtnVehicle->setObjectName(QStringLiteral("pBtnVehicle"));
        pBtnVehicle->setGeometry(QRect(350, 400, 400, 300));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(48);
        pBtnVehicle->setFont(font);
        pBtnVehicle->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/vehiclemanage.png);"));
        pBtnDrive = new QPushButton(centralWidget);
        pBtnDrive->setObjectName(QStringLiteral("pBtnDrive"));
        pBtnDrive->setGeometry(QRect(1170, 400, 400, 300));
        pBtnDrive->setFont(font);
        pBtnDrive->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/drivingmanage.png);"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pBtnVehicle->setText(QString());
        pBtnDrive->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
