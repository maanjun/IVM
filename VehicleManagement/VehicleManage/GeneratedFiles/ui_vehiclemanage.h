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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleManage
{
public:
    QWidget *centralWidget;
    QPushButton *pBtnSelect;
    QPushButton *pBtnCheck;
    QPushButton *pBtnMortgage;
    QPushButton *pBtnGohome;
    QPushButton *pBtnkTax;
    QPushButton *pBtnInsurance;

    void setupUi(QDialog *VehicleManage)
    {
        if (VehicleManage->objectName().isEmpty())
            VehicleManage->setObjectName(QStringLiteral("VehicleManage"));
        VehicleManage->resize(1920, 1080);
        VehicleManage->setStyleSheet(QStringLiteral("#centralWidget{border-image: url(:/Resources/Images/background.jpg);}"));
        centralWidget = new QWidget(VehicleManage);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pBtnSelect = new QPushButton(centralWidget);
        pBtnSelect->setObjectName(QStringLiteral("pBtnSelect"));
        pBtnSelect->setGeometry(QRect(760, 300, 400, 200));
        QFont font;
        font.setPointSize(22);
        pBtnSelect->setFont(font);
        pBtnSelect->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:14px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/selecton.png);"));
        pBtnCheck = new QPushButton(centralWidget);
        pBtnCheck->setObjectName(QStringLiteral("pBtnCheck"));
        pBtnCheck->setGeometry(QRect(200, 300, 400, 200));
        pBtnCheck->setFont(font);
        pBtnCheck->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:14px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/checkon.png);"));
        pBtnMortgage = new QPushButton(centralWidget);
        pBtnMortgage->setObjectName(QStringLiteral("pBtnMortgage"));
        pBtnMortgage->setGeometry(QRect(1320, 300, 400, 200));
        pBtnMortgage->setFont(font);
        pBtnMortgage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:14px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/mortgageon.png);"));
        pBtnGohome = new QPushButton(centralWidget);
        pBtnGohome->setObjectName(QStringLiteral("pBtnGohome"));
        pBtnGohome->setGeometry(QRect(20, 140, 120, 120));
        pBtnGohome->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/return.png);"));
        pBtnkTax = new QPushButton(centralWidget);
        pBtnkTax->setObjectName(QStringLiteral("pBtnkTax"));
        pBtnkTax->setGeometry(QRect(480, 650, 400, 200));
        pBtnkTax->setFont(font);
        pBtnkTax->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:14px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/tax.png);"));
        pBtnInsurance = new QPushButton(centralWidget);
        pBtnInsurance->setObjectName(QStringLiteral("pBtnInsurance"));
        pBtnInsurance->setGeometry(QRect(1040, 650, 400, 200));
        pBtnInsurance->setFont(font);
        pBtnInsurance->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:14px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/insurance.png);"));

        retranslateUi(VehicleManage);

        QMetaObject::connectSlotsByName(VehicleManage);
    } // setupUi

    void retranslateUi(QDialog *VehicleManage)
    {
        VehicleManage->setWindowTitle(QApplication::translate("VehicleManage", "VehicleManage", 0));
        pBtnSelect->setText(QString());
        pBtnCheck->setText(QString());
        pBtnMortgage->setText(QString());
        pBtnGohome->setText(QString());
        pBtnkTax->setText(QString());
        pBtnInsurance->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VehicleManage: public Ui_VehicleManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEMANAGE_H
