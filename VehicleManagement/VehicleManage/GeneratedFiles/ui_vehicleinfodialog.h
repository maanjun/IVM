/********************************************************************************
** Form generated from reading UI file 'vehicleinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEINFODIALOG_H
#define UI_VEHICLEINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_VehicleInfoDialog
{
public:
    QPushButton *pBtnNext;
    QPushButton *pBtnHomepage;

    void setupUi(QDialog *VehicleInfoDialog)
    {
        if (VehicleInfoDialog->objectName().isEmpty())
            VehicleInfoDialog->setObjectName(QStringLiteral("VehicleInfoDialog"));
        VehicleInfoDialog->resize(1024, 768);
        pBtnNext = new QPushButton(VehicleInfoDialog);
        pBtnNext->setObjectName(QStringLiteral("pBtnNext"));
        pBtnNext->setGeometry(QRect(590, 570, 200, 100));
        QFont font;
        font.setPointSize(22);
        pBtnNext->setFont(font);
        pBtnNext->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        pBtnHomepage = new QPushButton(VehicleInfoDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(190, 570, 200, 100));
        QFont font1;
        font1.setFamily(QStringLiteral("Algerian"));
        font1.setPointSize(22);
        pBtnHomepage->setFont(font1);
        pBtnHomepage->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));

        retranslateUi(VehicleInfoDialog);

        QMetaObject::connectSlotsByName(VehicleInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *VehicleInfoDialog)
    {
        VehicleInfoDialog->setWindowTitle(QApplication::translate("VehicleInfoDialog", "VehicleInfoDialog", 0));
        pBtnNext->setText(QString());
        pBtnHomepage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VehicleInfoDialog: public Ui_VehicleInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEINFODIALOG_H
