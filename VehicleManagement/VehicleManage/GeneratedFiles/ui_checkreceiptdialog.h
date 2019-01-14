/********************************************************************************
** Form generated from reading UI file 'checkreceiptdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKRECEIPTDIALOG_H
#define UI_CHECKRECEIPTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CheckReceiptDialog
{
public:
    QPushButton *pBtnNext;
    QPushButton *pBtnHomepage;
    QLineEdit *lineEditReceipt;
    QLabel *label;
    QLabel *label_2;
    QLabel *labelReceipt;
    QLabel *labelTax;
    QLineEdit *lineEditTax;
    QGraphicsView *viewFaxDone;
    QGraphicsView *viewIDVehicle;
    QLabel *labelInputFax;
    QGraphicsView *viewVehicleFax;
    QGraphicsView *viewScanningVehicle;
    QGraphicsView *viewScanningID;
    QGraphicsView *viewInputFax;
    QLabel *labelScanningID;
    QLabel *labelScanningVehicle;
    QGraphicsView *viewDone_2;
    QLabel *labelDone;

    void setupUi(QDialog *CheckReceiptDialog)
    {
        if (CheckReceiptDialog->objectName().isEmpty())
            CheckReceiptDialog->setObjectName(QStringLiteral("CheckReceiptDialog"));
        CheckReceiptDialog->resize(1925, 1080);
        pBtnNext = new QPushButton(CheckReceiptDialog);
        pBtnNext->setObjectName(QStringLiteral("pBtnNext"));
        pBtnNext->setGeometry(QRect(1290, 850, 300, 150));
        QFont font;
        font.setPointSize(22);
        pBtnNext->setFont(font);
        pBtnNext->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/nextoff.png);"));
        pBtnHomepage = new QPushButton(CheckReceiptDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(330, 850, 300, 150));
        QFont font1;
        font1.setFamily(QStringLiteral("Algerian"));
        font1.setPointSize(22);
        pBtnHomepage->setFont(font1);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));
        lineEditReceipt = new QLineEdit(CheckReceiptDialog);
        lineEditReceipt->setObjectName(QStringLiteral("lineEditReceipt"));
        lineEditReceipt->setGeometry(QRect(440, 350, 540, 80));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(36);
        lineEditReceipt->setFont(font2);
        lineEditReceipt->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px"));
        label = new QLabel(CheckReceiptDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1290, 260, 450, 450));
        label->setStyleSheet(QStringLiteral("border-image: url(:/Resources/Images/printguide.png);"));
        label_2 = new QLabel(CheckReceiptDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(1320, 740, 401, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font3.setPointSize(36);
        label_2->setFont(font3);
        labelReceipt = new QLabel(CheckReceiptDialog);
        labelReceipt->setObjectName(QStringLiteral("labelReceipt"));
        labelReceipt->setGeometry(QRect(190, 370, 231, 60));
        labelReceipt->setFont(font3);
        labelTax = new QLabel(CheckReceiptDialog);
        labelTax->setObjectName(QStringLiteral("labelTax"));
        labelTax->setGeometry(QRect(190, 560, 231, 60));
        labelTax->setFont(font3);
        lineEditTax = new QLineEdit(CheckReceiptDialog);
        lineEditTax->setObjectName(QStringLiteral("lineEditTax"));
        lineEditTax->setGeometry(QRect(440, 540, 540, 86));
        lineEditTax->setFont(font2);
        lineEditTax->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px"));
        viewFaxDone = new QGraphicsView(CheckReceiptDialog);
        viewFaxDone->setObjectName(QStringLiteral("viewFaxDone"));
        viewFaxDone->setGeometry(QRect(1280, 150, 540, 20));
        viewFaxDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/undoneline.png);"));
        viewIDVehicle = new QGraphicsView(CheckReceiptDialog);
        viewIDVehicle->setObjectName(QStringLiteral("viewIDVehicle"));
        viewIDVehicle->setGeometry(QRect(100, 150, 540, 20));
        viewIDVehicle->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/doneline.png);"));
        labelInputFax = new QLabel(CheckReceiptDialog);
        labelInputFax->setObjectName(QStringLiteral("labelInputFax"));
        labelInputFax->setGeometry(QRect(1200, 180, 200, 50));
        QFont font4;
        font4.setFamily(QStringLiteral("Times New Roman"));
        font4.setPointSize(18);
        labelInputFax->setFont(font4);
        viewVehicleFax = new QGraphicsView(CheckReceiptDialog);
        viewVehicleFax->setObjectName(QStringLiteral("viewVehicleFax"));
        viewVehicleFax->setGeometry(QRect(690, 150, 540, 20));
        viewVehicleFax->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/doneline.png);"));
        viewScanningVehicle = new QGraphicsView(CheckReceiptDialog);
        viewScanningVehicle->setObjectName(QStringLiteral("viewScanningVehicle"));
        viewScanningVehicle->setGeometry(QRect(640, 135, 50, 50));
        viewScanningVehicle->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/done.png);"));
        viewScanningID = new QGraphicsView(CheckReceiptDialog);
        viewScanningID->setObjectName(QStringLiteral("viewScanningID"));
        viewScanningID->setGeometry(QRect(50, 135, 50, 50));
        viewScanningID->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/done.png);"));
        viewInputFax = new QGraphicsView(CheckReceiptDialog);
        viewInputFax->setObjectName(QStringLiteral("viewInputFax"));
        viewInputFax->setGeometry(QRect(1230, 135, 50, 50));
        viewInputFax->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/doing.png);"));
        labelScanningID = new QLabel(CheckReceiptDialog);
        labelScanningID->setObjectName(QStringLiteral("labelScanningID"));
        labelScanningID->setGeometry(QRect(50, 180, 200, 50));
        labelScanningID->setFont(font4);
        labelScanningVehicle = new QLabel(CheckReceiptDialog);
        labelScanningVehicle->setObjectName(QStringLiteral("labelScanningVehicle"));
        labelScanningVehicle->setGeometry(QRect(600, 180, 200, 50));
        labelScanningVehicle->setFont(font4);
        viewDone_2 = new QGraphicsView(CheckReceiptDialog);
        viewDone_2->setObjectName(QStringLiteral("viewDone_2"));
        viewDone_2->setGeometry(QRect(1820, 135, 50, 50));
        viewDone_2->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/prepared.png);"));
        labelDone = new QLabel(CheckReceiptDialog);
        labelDone->setObjectName(QStringLiteral("labelDone"));
        labelDone->setGeometry(QRect(1820, 180, 61, 50));
        labelDone->setFont(font4);

        retranslateUi(CheckReceiptDialog);

        QMetaObject::connectSlotsByName(CheckReceiptDialog);
    } // setupUi

    void retranslateUi(QDialog *CheckReceiptDialog)
    {
        CheckReceiptDialog->setWindowTitle(QApplication::translate("CheckReceiptDialog", "CheckReceiptDialog", 0));
        pBtnNext->setText(QString());
        pBtnHomepage->setText(QString());
        label->setText(QString());
        label_2->setText(QApplication::translate("CheckReceiptDialog", "\350\257\267\346\214\211\346\217\220\347\244\272\345\244\215\345\215\260\347\225\231\345\272\225", 0));
        labelReceipt->setText(QApplication::translate("CheckReceiptDialog", "\345\217\221\347\245\250\345\217\267\357\274\232", 0));
        labelTax->setText(QApplication::translate("CheckReceiptDialog", "\350\275\246\350\210\271\347\250\216\345\217\267\357\274\232", 0));
        labelInputFax->setText(QApplication::translate("CheckReceiptDialog", "\345\275\225\345\205\245\347\250\216\350\264\271\345\217\267", 0));
        labelScanningID->setText(QApplication::translate("CheckReceiptDialog", "\346\211\253\346\217\217\350\272\253\344\273\275\350\257\201", 0));
        labelScanningVehicle->setText(QApplication::translate("CheckReceiptDialog", "\346\211\253\346\217\217\350\275\246\350\276\206\344\277\241\346\201\257", 0));
        labelDone->setText(QApplication::translate("CheckReceiptDialog", "\345\256\214\346\210\220", 0));
    } // retranslateUi

};

namespace Ui {
    class CheckReceiptDialog: public Ui_CheckReceiptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKRECEIPTDIALOG_H
