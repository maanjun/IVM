/********************************************************************************
** Form generated from reading UI file 'vehiclemanage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEMANAGE_H
#define UI_VEHICLEMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleManageClass
{
public:
    QWidget *centralWidget;
    QPushButton *pBtnSelect;
    QPushButton *pBtnCheck;
    QPushButton *pBtnMortgage;
    QLabel *labelTitle;

    void setupUi(QMainWindow *VehicleManageClass)
    {
        if (VehicleManageClass->objectName().isEmpty())
            VehicleManageClass->setObjectName(QStringLiteral("VehicleManageClass"));
        VehicleManageClass->resize(1024, 768);
        VehicleManageClass->setStyleSheet(QLatin1String("border-image: url(:/Resources/Images/background.png);\n"
""));
        centralWidget = new QWidget(VehicleManageClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pBtnSelect = new QPushButton(centralWidget);
        pBtnSelect->setObjectName(QStringLiteral("pBtnSelect"));
        pBtnSelect->setGeometry(QRect(410, 470, 200, 100));
        QFont font;
        font.setPointSize(22);
        pBtnSelect->setFont(font);
        pBtnSelect->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/selecton.png);"));
        pBtnCheck = new QPushButton(centralWidget);
        pBtnCheck->setObjectName(QStringLiteral("pBtnCheck"));
        pBtnCheck->setGeometry(QRect(80, 470, 200, 100));
        pBtnCheck->setFont(font);
        pBtnCheck->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/checkon.png);"));
        pBtnMortgage = new QPushButton(centralWidget);
        pBtnMortgage->setObjectName(QStringLiteral("pBtnMortgage"));
        pBtnMortgage->setGeometry(QRect(740, 470, 200, 100));
        pBtnMortgage->setFont(font);
        pBtnMortgage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/mortgageon.png);"));
        labelTitle = new QLabel(centralWidget);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setGeometry(QRect(250, 60, 481, 141));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(42);
        labelTitle->setFont(font1);
        labelTitle->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.3125, y1:0, x2:0.784, y2:1, stop:0 rgba(211, 217, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        VehicleManageClass->setCentralWidget(centralWidget);

        retranslateUi(VehicleManageClass);

        QMetaObject::connectSlotsByName(VehicleManageClass);
    } // setupUi

    void retranslateUi(QMainWindow *VehicleManageClass)
    {
        VehicleManageClass->setWindowTitle(QApplication::translate("VehicleManageClass", "VehicleManage", 0));
        pBtnSelect->setText(QString());
        pBtnCheck->setText(QString());
        pBtnMortgage->setText(QString());
        labelTitle->setText(QApplication::translate("VehicleManageClass", "\350\277\234\347\250\213\346\231\272\350\203\275\350\275\246\346\243\200\347\263\273\347\273\237", 0));
    } // retranslateUi

};

namespace Ui {
    class VehicleManageClass: public Ui_VehicleManageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEMANAGE_H
