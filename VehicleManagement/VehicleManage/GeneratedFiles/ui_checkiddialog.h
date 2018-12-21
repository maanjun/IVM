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

    void setupUi(QDialog *CheckIDDialog)
    {
        if (CheckIDDialog->objectName().isEmpty())
            CheckIDDialog->setObjectName(QStringLiteral("CheckIDDialog"));
        CheckIDDialog->resize(1024, 768);
        pBtnHomepage = new QPushButton(CheckIDDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(190, 570, 200, 100));
        pBtnHomepage->setMinimumSize(QSize(200, 100));
        QFont font;
        font.setFamily(QStringLiteral("Algerian"));
        font.setPointSize(22);
        pBtnHomepage->setFont(font);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/homepageon.png);"));
        pBtnNext = new QPushButton(CheckIDDialog);
        pBtnNext->setObjectName(QStringLiteral("pBtnNext"));
        pBtnNext->setGeometry(QRect(590, 570, 200, 100));
        pBtnNext->setMinimumSize(QSize(200, 100));
        QFont font1;
        font1.setPointSize(22);
        pBtnNext->setFont(font1);
        pBtnNext->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/nextoff.png);"));
        textBrowser = new QTextBrowser(CheckIDDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(530, 250, 420, 280));
        textBrowser->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:20px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/sfzzmdw.png);"));
        label = new QLabel(CheckIDDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 260, 371, 251));
        label->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/scanningid.png);"));
        labelHead = new QLabel(CheckIDDialog);
        labelHead->setObjectName(QStringLiteral("labelHead"));
        labelHead->setGeometry(QRect(830, 300, 100, 140));
        labelLoading = new QLabel(CheckIDDialog);
        labelLoading->setObjectName(QStringLiteral("labelLoading"));
        labelLoading->setGeometry(QRect(688, 328, 124, 124));
        labelLoading->setStyleSheet(QStringLiteral("border-image: url(:/Resources/Images/loading.gif);"));

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
        label->setText(QApplication::translate("CheckIDDialog", "TextLabel", 0));
        labelHead->setText(QApplication::translate("CheckIDDialog", "TextLabel", 0));
        labelLoading->setText(QApplication::translate("CheckIDDialog", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class CheckIDDialog: public Ui_CheckIDDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKIDDIALOG_H
