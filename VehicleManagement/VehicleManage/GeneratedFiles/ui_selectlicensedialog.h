/********************************************************************************
** Form generated from reading UI file 'selectlicensedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTLICENSEDIALOG_H
#define UI_SELECTLICENSEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SelectLicenseDialog
{
public:
    QPushButton *pBtnConfirm;
    QPushButton *pBtnHomepage;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;

    void setupUi(QDialog *SelectLicenseDialog)
    {
        if (SelectLicenseDialog->objectName().isEmpty())
            SelectLicenseDialog->setObjectName(QStringLiteral("SelectLicenseDialog"));
        SelectLicenseDialog->resize(1024, 768);
        pBtnConfirm = new QPushButton(SelectLicenseDialog);
        pBtnConfirm->setObjectName(QStringLiteral("pBtnConfirm"));
        pBtnConfirm->setGeometry(QRect(590, 570, 200, 100));
        QFont font;
        font.setPointSize(22);
        pBtnConfirm->setFont(font);
        pBtnConfirm->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/confirmoff.png);"));
        pBtnHomepage = new QPushButton(SelectLicenseDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(190, 570, 200, 100));
        QFont font1;
        font1.setFamily(QStringLiteral("Algerian"));
        font1.setPointSize(22);
        pBtnHomepage->setFont(font1);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/homepageon.png);"));
        pushButton = new QPushButton(SelectLicenseDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 320, 160, 70));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(36);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QLatin1String("color:rgb(255,255,255);\n"
"border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: rgb(0, 0, 255);"));
        pushButton_2 = new QPushButton(SelectLicenseDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 240, 160, 70));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QLatin1String("color:rgb(255,255,255);\n"
"border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: rgb(0, 0, 255);"));
        pushButton_3 = new QPushButton(SelectLicenseDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(50, 480, 160, 70));
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QLatin1String("color:rgb(255,255,255);\n"
"border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: rgb(0, 0, 255);"));
        pushButton_4 = new QPushButton(SelectLicenseDialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(50, 400, 160, 70));
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QLatin1String("color:rgb(255,255,255);\n"
"border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: rgb(0, 0, 255);"));
        pushButton_5 = new QPushButton(SelectLicenseDialog);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(240, 320, 160, 70));
        pushButton_5->setFont(font2);
        pushButton_5->setStyleSheet(QLatin1String("color:rgb(255,255,255);\n"
"border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: rgb(0, 0, 255);"));
        pushButton_6 = new QPushButton(SelectLicenseDialog);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(240, 400, 160, 70));
        pushButton_6->setFont(font2);
        pushButton_6->setStyleSheet(QLatin1String("color:rgb(255,255,255);\n"
"border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: rgb(0, 0, 255);"));
        pushButton_7 = new QPushButton(SelectLicenseDialog);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(240, 480, 160, 70));
        pushButton_7->setFont(font2);
        pushButton_7->setStyleSheet(QLatin1String("color:rgb(255,255,255);\n"
"border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: rgb(0, 0, 255);"));
        pushButton_8 = new QPushButton(SelectLicenseDialog);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(240, 240, 160, 70));
        pushButton_8->setFont(font2);
        pushButton_8->setStyleSheet(QLatin1String("color:rgb(255,255,255);\n"
"border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: rgb(0, 0, 255);"));
        pushButton_9 = new QPushButton(SelectLicenseDialog);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(430, 320, 160, 70));
        pushButton_9->setFont(font2);
        pushButton_9->setStyleSheet(QLatin1String("color:rgb(255,255,255);\n"
"border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: rgb(0, 0, 255);"));
        pushButton_10 = new QPushButton(SelectLicenseDialog);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(430, 400, 160, 70));
        pushButton_10->setFont(font2);
        pushButton_10->setStyleSheet(QLatin1String("color:rgb(255,255,255);\n"
"border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: rgb(0, 0, 255);"));
        pushButton_11 = new QPushButton(SelectLicenseDialog);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(430, 480, 160, 70));
        pushButton_11->setFont(font2);
        pushButton_11->setStyleSheet(QLatin1String("color:rgb(255,255,255);\n"
"border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: rgb(0, 0, 255);"));
        pushButton_12 = new QPushButton(SelectLicenseDialog);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(430, 240, 160, 70));
        pushButton_12->setFont(font2);
        pushButton_12->setStyleSheet(QLatin1String("color:rgb(255,255,255);\n"
"border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: rgb(0, 0, 255);"));
        pushButton_13 = new QPushButton(SelectLicenseDialog);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(620, 320, 160, 70));
        pushButton_13->setFont(font2);
        pushButton_13->setStyleSheet(QLatin1String("color:rgb(255,255,255);\n"
"border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: rgb(0, 0, 255);"));
        pushButton_14 = new QPushButton(SelectLicenseDialog);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(620, 400, 160, 70));
        pushButton_14->setFont(font2);
        pushButton_14->setStyleSheet(QLatin1String("color:rgb(255,255,255);\n"
"border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: rgb(0, 0, 255);"));
        pushButton_15 = new QPushButton(SelectLicenseDialog);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(620, 480, 160, 70));
        pushButton_15->setFont(font2);
        pushButton_15->setStyleSheet(QLatin1String("color:rgb(255,255,255);\n"
"border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: rgb(0, 0, 255);"));
        pushButton_16 = new QPushButton(SelectLicenseDialog);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(620, 240, 160, 70));
        pushButton_16->setFont(font2);
        pushButton_16->setStyleSheet(QLatin1String("color:rgb(255,255,255);\n"
"border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: rgb(0, 0, 255);"));
        pushButton_17 = new QPushButton(SelectLicenseDialog);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(810, 320, 160, 70));
        pushButton_17->setFont(font2);
        pushButton_17->setStyleSheet(QLatin1String("color:rgb(255,255,255);\n"
"border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: rgb(0, 0, 255);"));
        pushButton_18 = new QPushButton(SelectLicenseDialog);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(810, 400, 160, 70));
        pushButton_18->setFont(font2);
        pushButton_18->setStyleSheet(QLatin1String("color:rgb(255,255,255);\n"
"border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: rgb(0, 0, 255);"));
        pushButton_19 = new QPushButton(SelectLicenseDialog);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setGeometry(QRect(810, 480, 160, 70));
        pushButton_19->setFont(font2);
        pushButton_19->setStyleSheet(QLatin1String("color:rgb(255,255,255);\n"
"border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: rgb(0, 0, 255);"));
        pushButton_20 = new QPushButton(SelectLicenseDialog);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setGeometry(QRect(810, 240, 160, 70));
        pushButton_20->setFont(font2);
        pushButton_20->setStyleSheet(QLatin1String("color:rgb(255,255,255);\n"
"border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: rgb(0, 0, 255);"));

        retranslateUi(SelectLicenseDialog);

        QMetaObject::connectSlotsByName(SelectLicenseDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectLicenseDialog)
    {
        SelectLicenseDialog->setWindowTitle(QApplication::translate("SelectLicenseDialog", "SelectLicenseDialog", 0));
        pBtnConfirm->setText(QString());
        pBtnHomepage->setText(QString());
        pushButton->setText(QApplication::translate("SelectLicenseDialog", "12345", 0));
        pushButton_2->setText(QApplication::translate("SelectLicenseDialog", "12345", 0));
        pushButton_3->setText(QApplication::translate("SelectLicenseDialog", "12345", 0));
        pushButton_4->setText(QApplication::translate("SelectLicenseDialog", "12345", 0));
        pushButton_5->setText(QApplication::translate("SelectLicenseDialog", "12345", 0));
        pushButton_6->setText(QApplication::translate("SelectLicenseDialog", "12345", 0));
        pushButton_7->setText(QApplication::translate("SelectLicenseDialog", "12345", 0));
        pushButton_8->setText(QApplication::translate("SelectLicenseDialog", "12345", 0));
        pushButton_9->setText(QApplication::translate("SelectLicenseDialog", "12345", 0));
        pushButton_10->setText(QApplication::translate("SelectLicenseDialog", "12345", 0));
        pushButton_11->setText(QApplication::translate("SelectLicenseDialog", "12345", 0));
        pushButton_12->setText(QApplication::translate("SelectLicenseDialog", "12345", 0));
        pushButton_13->setText(QApplication::translate("SelectLicenseDialog", "12345", 0));
        pushButton_14->setText(QApplication::translate("SelectLicenseDialog", "12345", 0));
        pushButton_15->setText(QApplication::translate("SelectLicenseDialog", "12345", 0));
        pushButton_16->setText(QApplication::translate("SelectLicenseDialog", "12345", 0));
        pushButton_17->setText(QApplication::translate("SelectLicenseDialog", "12345", 0));
        pushButton_18->setText(QApplication::translate("SelectLicenseDialog", "12345", 0));
        pushButton_19->setText(QApplication::translate("SelectLicenseDialog", "12345", 0));
        pushButton_20->setText(QApplication::translate("SelectLicenseDialog", "12345", 0));
    } // retranslateUi

};

namespace Ui {
    class SelectLicenseDialog: public Ui_SelectLicenseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTLICENSEDIALOG_H
