/********************************************************************************
** Form generated from reading UI file 'confirmpaytaxdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMPAYTAXDIALOG_H
#define UI_CONFIRMPAYTAXDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_ConfirmPaytaxDialog
{
public:
    QPushButton *pBtnNext;
    QPushButton *pBtnHomepage;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *ConfirmPaytaxDialog)
    {
        if (ConfirmPaytaxDialog->objectName().isEmpty())
            ConfirmPaytaxDialog->setObjectName(QStringLiteral("ConfirmPaytaxDialog"));
        ConfirmPaytaxDialog->resize(1920, 1080);
        ConfirmPaytaxDialog->setStyleSheet(QStringLiteral(""));
        pBtnNext = new QPushButton(ConfirmPaytaxDialog);
        pBtnNext->setObjectName(QStringLiteral("pBtnNext"));
        pBtnNext->setGeometry(QRect(1290, 850, 300, 150));
        QFont font;
        font.setPointSize(22);
        pBtnNext->setFont(font);
        pBtnNext->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/nextoff.png);"));
        pBtnHomepage = new QPushButton(ConfirmPaytaxDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(330, 850, 300, 150));
        QFont font1;
        font1.setFamily(QStringLiteral("Algerian"));
        font1.setPointSize(22);
        pBtnHomepage->setFont(font1);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));
        textBrowser = new QTextBrowser(ConfirmPaytaxDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(60, 140, 1801, 591));
        textBrowser->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: qlineargradient(spread:pad, x1:0.3125, y1:0, x2:0.784, y2:1, stop:0 rgba(211, 217, 255, 255), stop:1 rgba(255, 255, 255, 255));"));

        retranslateUi(ConfirmPaytaxDialog);

        QMetaObject::connectSlotsByName(ConfirmPaytaxDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfirmPaytaxDialog)
    {
        ConfirmPaytaxDialog->setWindowTitle(QApplication::translate("ConfirmPaytaxDialog", "ConfirmPaytaxDialog", 0));
        pBtnNext->setText(QString());
        pBtnHomepage->setText(QString());
        textBrowser->setHtml(QApplication::translate("ConfirmPaytaxDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class ConfirmPaytaxDialog: public Ui_ConfirmPaytaxDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMPAYTAXDIALOG_H
