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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_VehicleInfoDialog
{
public:
    QPushButton *pBtnNext;
    QPushButton *pBtnHomepage;
    QLabel *label;
    QTextBrowser *textBrowser;
    QLabel *labelLoading;
    QGraphicsView *viewScanningID;
    QLabel *labelScanningID;
    QGraphicsView *viewIDVehicle;
    QGraphicsView *viewScanningVehicle;
    QGraphicsView *viewVehicleFax;
    QLabel *labelScanningVehicle;
    QGraphicsView *viewDone_2;
    QGraphicsView *viewFaxDone;
    QLabel *labelInputFax;
    QGraphicsView *viewInputFax;
    QLabel *labelDone;

    void setupUi(QDialog *VehicleInfoDialog)
    {
        if (VehicleInfoDialog->objectName().isEmpty())
            VehicleInfoDialog->setObjectName(QStringLiteral("VehicleInfoDialog"));
        VehicleInfoDialog->resize(1920, 1085);
        pBtnNext = new QPushButton(VehicleInfoDialog);
        pBtnNext->setObjectName(QStringLiteral("pBtnNext"));
        pBtnNext->setGeometry(QRect(1290, 850, 300, 150));
        QFont font;
        font.setPointSize(22);
        pBtnNext->setFont(font);
        pBtnNext->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/nextoff.png);"));
        pBtnHomepage = new QPushButton(VehicleInfoDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(330, 850, 300, 150));
        QFont font1;
        font1.setFamily(QStringLiteral("Algerian"));
        font1.setPointSize(22);
        pBtnHomepage->setFont(font1);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));
        label = new QLabel(VehicleInfoDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 340, 400, 400));
        textBrowser = new QTextBrowser(VehicleInfoDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(620, 260, 1200, 540));
        textBrowser->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: qlineargradient(spread:pad, x1:0.3125, y1:0, x2:0.784, y2:1, stop:0 rgba(211, 217, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        labelLoading = new QLabel(VehicleInfoDialog);
        labelLoading->setObjectName(QStringLiteral("labelLoading"));
        labelLoading->setGeometry(QRect(1160, 460, 124, 124));
        labelLoading->setStyleSheet(QStringLiteral("border-image: url(:/Resources/Images/loading.gif);"));
        viewScanningID = new QGraphicsView(VehicleInfoDialog);
        viewScanningID->setObjectName(QStringLiteral("viewScanningID"));
        viewScanningID->setGeometry(QRect(50, 135, 50, 50));
        viewScanningID->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/done.png);"));
        labelScanningID = new QLabel(VehicleInfoDialog);
        labelScanningID->setObjectName(QStringLiteral("labelScanningID"));
        labelScanningID->setGeometry(QRect(50, 180, 200, 50));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(18);
        labelScanningID->setFont(font2);
        viewIDVehicle = new QGraphicsView(VehicleInfoDialog);
        viewIDVehicle->setObjectName(QStringLiteral("viewIDVehicle"));
        viewIDVehicle->setGeometry(QRect(100, 150, 540, 20));
        viewIDVehicle->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/doneline.png);"));
        viewScanningVehicle = new QGraphicsView(VehicleInfoDialog);
        viewScanningVehicle->setObjectName(QStringLiteral("viewScanningVehicle"));
        viewScanningVehicle->setGeometry(QRect(640, 135, 50, 50));
        viewScanningVehicle->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/doing.png);"));
        viewVehicleFax = new QGraphicsView(VehicleInfoDialog);
        viewVehicleFax->setObjectName(QStringLiteral("viewVehicleFax"));
        viewVehicleFax->setGeometry(QRect(690, 150, 540, 20));
        viewVehicleFax->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/undoneline.png);"));
        labelScanningVehicle = new QLabel(VehicleInfoDialog);
        labelScanningVehicle->setObjectName(QStringLiteral("labelScanningVehicle"));
        labelScanningVehicle->setGeometry(QRect(600, 180, 200, 50));
        labelScanningVehicle->setFont(font2);
        viewDone_2 = new QGraphicsView(VehicleInfoDialog);
        viewDone_2->setObjectName(QStringLiteral("viewDone_2"));
        viewDone_2->setGeometry(QRect(1820, 135, 50, 50));
        viewDone_2->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/prepared.png);"));
        viewFaxDone = new QGraphicsView(VehicleInfoDialog);
        viewFaxDone->setObjectName(QStringLiteral("viewFaxDone"));
        viewFaxDone->setGeometry(QRect(1280, 150, 540, 20));
        viewFaxDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/undoneline.png);"));
        labelInputFax = new QLabel(VehicleInfoDialog);
        labelInputFax->setObjectName(QStringLiteral("labelInputFax"));
        labelInputFax->setGeometry(QRect(1200, 180, 200, 50));
        labelInputFax->setFont(font2);
        viewInputFax = new QGraphicsView(VehicleInfoDialog);
        viewInputFax->setObjectName(QStringLiteral("viewInputFax"));
        viewInputFax->setGeometry(QRect(1230, 135, 50, 50));
        viewInputFax->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/prepared.png);"));
        labelDone = new QLabel(VehicleInfoDialog);
        labelDone->setObjectName(QStringLiteral("labelDone"));
        labelDone->setGeometry(QRect(1820, 180, 61, 50));
        labelDone->setFont(font2);

        retranslateUi(VehicleInfoDialog);

        QMetaObject::connectSlotsByName(VehicleInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *VehicleInfoDialog)
    {
        VehicleInfoDialog->setWindowTitle(QApplication::translate("VehicleInfoDialog", "VehicleInfoDialog", 0));
        pBtnNext->setText(QString());
        pBtnHomepage->setText(QString());
        label->setText(QString());
        textBrowser->setHtml(QApplication::translate("VehicleInfoDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        labelLoading->setText(QString());
        labelScanningID->setText(QApplication::translate("VehicleInfoDialog", "\346\211\253\346\217\217\350\272\253\344\273\275\350\257\201", 0));
        labelScanningVehicle->setText(QApplication::translate("VehicleInfoDialog", "\346\211\253\346\217\217\350\275\246\350\276\206\344\277\241\346\201\257", 0));
        labelInputFax->setText(QApplication::translate("VehicleInfoDialog", "\345\275\225\345\205\245\347\250\216\350\264\271\345\217\267", 0));
        labelDone->setText(QApplication::translate("VehicleInfoDialog", "\345\256\214\346\210\220", 0));
    } // retranslateUi

};

namespace Ui {
    class VehicleInfoDialog: public Ui_VehicleInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEINFODIALOG_H
