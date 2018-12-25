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
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

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
"border-image: url(:/Resources/Images/homepageon.png);"));
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
        pushButton_2 = new QPushButton(VehicleInfoDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(510, 150, 450, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(20);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(65, 147, 252);"));
        pushButton = new QPushButton(VehicleInfoDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 150, 450, 50));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(166, 205, 251);"));
        pushButton_3 = new QPushButton(VehicleInfoDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(960, 150, 450, 50));
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(166, 205, 251);"));
        pushButton_4 = new QPushButton(VehicleInfoDialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(1410, 150, 450, 50));
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(166, 205, 251);"));

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
        pushButton_2->setText(QApplication::translate("VehicleInfoDialog", "\346\211\253\346\217\217\350\275\246\350\276\206\344\277\241\346\201\257", 0));
        pushButton->setText(QApplication::translate("VehicleInfoDialog", "\346\211\253\346\217\217\350\272\253\344\273\275\350\257\201", 0));
        pushButton_3->setText(QApplication::translate("VehicleInfoDialog", "\350\276\223\345\205\245\347\250\216\350\264\271\345\217\267", 0));
        pushButton_4->setText(QApplication::translate("VehicleInfoDialog", "\345\256\214\346\210\220", 0));
    } // retranslateUi

};

namespace Ui {
    class VehicleInfoDialog: public Ui_VehicleInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEINFODIALOG_H
