/********************************************************************************
** Form generated from reading UI file 'checkiddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKIDDIALOG_H
#define UI_CHECKIDDIALOG_H

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

class Ui_CheckIDDialog
{
public:
    QPushButton *pBtnHomepage;
    QPushButton *pBtnNext;
    QTextBrowser *textBrowser;
    QLabel *label;
    QLabel *labelHead;
    QLabel *labelLoading;
    QPushButton *pBtnDone;
    QPushButton *pBtnScanIdCheck;
    QPushButton *pBtnScanVehicle;
    QPushButton *pBtnReceipt;
    QPushButton *pBtnScanIdSelect;
    QPushButton *pBtnSelect;

    void setupUi(QDialog *CheckIDDialog)
    {
        if (CheckIDDialog->objectName().isEmpty())
            CheckIDDialog->setObjectName(QStringLiteral("CheckIDDialog"));
        CheckIDDialog->resize(1024, 768);
        pBtnHomepage = new QPushButton(CheckIDDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(190, 612, 200, 100));
        pBtnHomepage->setMinimumSize(QSize(200, 100));
        QFont font;
        font.setFamily(QStringLiteral("Algerian"));
        font.setPointSize(22);
        pBtnHomepage->setFont(font);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/homepageon.png);"));
        pBtnNext = new QPushButton(CheckIDDialog);
        pBtnNext->setObjectName(QStringLiteral("pBtnNext"));
        pBtnNext->setGeometry(QRect(590, 612, 200, 100));
        pBtnNext->setMinimumSize(QSize(200, 100));
        QFont font1;
        font1.setPointSize(22);
        pBtnNext->setFont(font1);
        pBtnNext->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/nextoff.png);"));
        textBrowser = new QTextBrowser(CheckIDDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(530, 302, 420, 280));
        textBrowser->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:20px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/sfzzmdw.png);"));
        label = new QLabel(CheckIDDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 312, 371, 251));
        label->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/scanningid.png);"));
        labelHead = new QLabel(CheckIDDialog);
        labelHead->setObjectName(QStringLiteral("labelHead"));
        labelHead->setGeometry(QRect(830, 352, 100, 140));
        labelLoading = new QLabel(CheckIDDialog);
        labelLoading->setObjectName(QStringLiteral("labelLoading"));
        labelLoading->setGeometry(QRect(688, 380, 124, 124));
        labelLoading->setStyleSheet(QStringLiteral("border-image: url(:/Resources/Images/loading.gif);"));
        pBtnDone = new QPushButton(CheckIDDialog);
        pBtnDone->setObjectName(QStringLiteral("pBtnDone"));
        pBtnDone->setGeometry(QRect(745, 230, 229, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(20);
        pBtnDone->setFont(font2);
        pBtnDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(166, 205, 251);"));
        pBtnScanIdCheck = new QPushButton(CheckIDDialog);
        pBtnScanIdCheck->setObjectName(QStringLiteral("pBtnScanIdCheck"));
        pBtnScanIdCheck->setGeometry(QRect(40, 230, 233, 50));
        pBtnScanIdCheck->setFont(font2);
        pBtnScanIdCheck->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(65, 147, 252);"));
        pBtnScanVehicle = new QPushButton(CheckIDDialog);
        pBtnScanVehicle->setObjectName(QStringLiteral("pBtnScanVehicle"));
        pBtnScanVehicle->setGeometry(QRect(275, 230, 233, 50));
        pBtnScanVehicle->setFont(font2);
        pBtnScanVehicle->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(166, 205, 251);"));
        pBtnReceipt = new QPushButton(CheckIDDialog);
        pBtnReceipt->setObjectName(QStringLiteral("pBtnReceipt"));
        pBtnReceipt->setGeometry(QRect(510, 230, 233, 50));
        pBtnReceipt->setFont(font2);
        pBtnReceipt->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(166, 205, 251);"));
        pBtnScanIdSelect = new QPushButton(CheckIDDialog);
        pBtnScanIdSelect->setObjectName(QStringLiteral("pBtnScanIdSelect"));
        pBtnScanIdSelect->setGeometry(QRect(40, 230, 468, 50));
        pBtnScanIdSelect->setFont(font2);
        pBtnScanIdSelect->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(65, 147, 252);"));
        pBtnSelect = new QPushButton(CheckIDDialog);
        pBtnSelect->setObjectName(QStringLiteral("pBtnSelect"));
        pBtnSelect->setGeometry(QRect(510, 230, 468, 50));
        pBtnSelect->setFont(font2);
        pBtnSelect->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(166, 205, 251);"));

        retranslateUi(CheckIDDialog);

        QMetaObject::connectSlotsByName(CheckIDDialog);
    } // setupUi

    void retranslateUi(QDialog *CheckIDDialog)
    {
        CheckIDDialog->setWindowTitle(QApplication::translate("CheckIDDialog", "CheckIDDialog", 0));
        pBtnHomepage->setText(QString());
        pBtnNext->setText(QString());
        textBrowser->setHtml(QApplication::translate("CheckIDDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        label->setText(QString());
        labelHead->setText(QString());
        labelLoading->setText(QString());
        pBtnDone->setText(QApplication::translate("CheckIDDialog", "\345\256\214\346\210\220", 0));
        pBtnScanIdCheck->setText(QApplication::translate("CheckIDDialog", "\346\211\253\346\217\217\350\272\253\344\273\275\350\257\201", 0));
        pBtnScanVehicle->setText(QApplication::translate("CheckIDDialog", "\346\211\253\346\217\217\350\275\246\350\276\206\344\277\241\346\201\257", 0));
        pBtnReceipt->setText(QApplication::translate("CheckIDDialog", "\350\276\223\345\205\245\347\250\216\350\264\271\345\217\267", 0));
        pBtnScanIdSelect->setText(QApplication::translate("CheckIDDialog", "\346\211\253\346\217\217\350\272\253\344\273\275\350\257\201", 0));
        pBtnSelect->setText(QApplication::translate("CheckIDDialog", "\350\207\252\344\270\273\351\200\211\347\211\214", 0));
    } // retranslateUi

};

namespace Ui {
    class CheckIDDialog: public Ui_CheckIDDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKIDDIALOG_H
