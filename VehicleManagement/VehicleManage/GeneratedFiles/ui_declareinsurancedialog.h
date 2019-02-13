/********************************************************************************
** Form generated from reading UI file 'declareinsurancedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DECLAREINSURANCEDIALOG_H
#define UI_DECLAREINSURANCEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_DeclareInsuranceDialog
{
public:
    QPushButton *pBtnHomepage;
    QPushButton *pBtnNext;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *DeclareInsuranceDialog)
    {
        if (DeclareInsuranceDialog->objectName().isEmpty())
            DeclareInsuranceDialog->setObjectName(QStringLiteral("DeclareInsuranceDialog"));
        DeclareInsuranceDialog->resize(1920, 1080);
        DeclareInsuranceDialog->setStyleSheet(QStringLiteral("#DeclareInsuranceDialog{border-image: url(:/Resources/Images/background.png);}"));
        pBtnHomepage = new QPushButton(DeclareInsuranceDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(330, 850, 300, 150));
        QFont font;
        font.setFamily(QStringLiteral("Algerian"));
        font.setPointSize(22);
        pBtnHomepage->setFont(font);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));
        pBtnNext = new QPushButton(DeclareInsuranceDialog);
        pBtnNext->setObjectName(QStringLiteral("pBtnNext"));
        pBtnNext->setGeometry(QRect(1290, 850, 300, 150));
        QFont font1;
        font1.setPointSize(22);
        pBtnNext->setFont(font1);
        pBtnNext->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/nexton.png);"));
        textBrowser = new QTextBrowser(DeclareInsuranceDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(630, 290, 661, 501));
        textBrowser->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: qlineargradient(spread:pad, x1:0.3125, y1:0, x2:0.784, y2:1, stop:0 rgba(211, 217, 255, 255), stop:1 rgba(255, 255, 255, 255));"));

        retranslateUi(DeclareInsuranceDialog);

        QMetaObject::connectSlotsByName(DeclareInsuranceDialog);
    } // setupUi

    void retranslateUi(QDialog *DeclareInsuranceDialog)
    {
        DeclareInsuranceDialog->setWindowTitle(QApplication::translate("DeclareInsuranceDialog", "DeclareInsuranceDialog", 0));
        pBtnHomepage->setText(QString());
        pBtnNext->setText(QString());
        textBrowser->setHtml(QApplication::translate("DeclareInsuranceDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">\346\202\250\351\234\200\350\246\201\347\274\264\347\272\263</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; "
                        "margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">\344\272\244\345\274\272\351\231\251 </span><span style=\" font-size:48pt; color:#ff0000;\">856 </span><span style=\" font-size:36pt;\">\345\205\203,</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">\345\225\206\344\270\232\351\231\251 </span><span style=\" font-size:48pt; color:#ff0000;\">3120 </span><span style=\" font-size:36pt;\">\345\205\203</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margi"
                        "n-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">\345\205\261\350\256\241 </span><span style=\" font-size:48pt; color:#ff0000;\">3976\345\205\203 </span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class DeclareInsuranceDialog: public Ui_DeclareInsuranceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECLAREINSURANCEDIALOG_H
