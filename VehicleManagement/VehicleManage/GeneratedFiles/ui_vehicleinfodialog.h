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
        pBtnNext->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/nextoff.png);"));
        pBtnHomepage = new QPushButton(VehicleInfoDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(190, 570, 200, 100));
        QFont font1;
        font1.setFamily(QStringLiteral("Algerian"));
        font1.setPointSize(22);
        pBtnHomepage->setFont(font1);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/homepageon.png);"));
        label = new QLabel(VehicleInfoDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 280, 200, 200));
        textBrowser = new QTextBrowser(VehicleInfoDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(320, 240, 650, 290));
        textBrowser->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: qlineargradient(spread:pad, x1:0.3125, y1:0, x2:0.784, y2:1, stop:0 rgba(211, 217, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        labelLoading = new QLabel(VehicleInfoDialog);
        labelLoading->setObjectName(QStringLiteral("labelLoading"));
        labelLoading->setGeometry(QRect(600, 320, 124, 124));
        labelLoading->setStyleSheet(QStringLiteral("border-image: url(:/Resources/Images/loading.gif);"));

        retranslateUi(VehicleInfoDialog);

        QMetaObject::connectSlotsByName(VehicleInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *VehicleInfoDialog)
    {
        VehicleInfoDialog->setWindowTitle(QApplication::translate("VehicleInfoDialog", "VehicleInfoDialog", 0));
        pBtnNext->setText(QString());
        pBtnHomepage->setText(QString());
        label->setText(QApplication::translate("VehicleInfoDialog", "TextLabel", 0));
        textBrowser->setHtml(QApplication::translate("VehicleInfoDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        labelLoading->setText(QApplication::translate("VehicleInfoDialog", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class VehicleInfoDialog: public Ui_VehicleInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEINFODIALOG_H
