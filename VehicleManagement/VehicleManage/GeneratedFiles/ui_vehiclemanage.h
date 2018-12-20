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

    void setupUi(QMainWindow *VehicleManageClass)
    {
        if (VehicleManageClass->objectName().isEmpty())
            VehicleManageClass->setObjectName(QStringLiteral("VehicleManageClass"));
        VehicleManageClass->resize(1024, 768);
        VehicleManageClass->setStyleSheet(QLatin1String("border-image: url(:/Images/background.bmp);\n"
""));
        centralWidget = new QWidget(VehicleManageClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pBtnSelect = new QPushButton(centralWidget);
        pBtnSelect->setObjectName(QStringLiteral("pBtnSelect"));
        pBtnSelect->setGeometry(QRect(410, 500, 200, 100));
        QFont font;
        font.setPointSize(22);
        pBtnSelect->setFont(font);
        pBtnSelect->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Images/selecton.png);"));
        pBtnCheck = new QPushButton(centralWidget);
        pBtnCheck->setObjectName(QStringLiteral("pBtnCheck"));
        pBtnCheck->setGeometry(QRect(80, 500, 200, 100));
        pBtnCheck->setFont(font);
        pBtnCheck->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Images/checkon.png);"));
        pBtnMortgage = new QPushButton(centralWidget);
        pBtnMortgage->setObjectName(QStringLiteral("pBtnMortgage"));
        pBtnMortgage->setGeometry(QRect(740, 500, 200, 100));
        pBtnMortgage->setFont(font);
        pBtnMortgage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Images/mortgageon.png);"));
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
    } // retranslateUi

};

namespace Ui {
    class VehicleManageClass: public Ui_VehicleManageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEMANAGE_H
