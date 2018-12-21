/********************************************************************************
** Form generated from reading UI file 'inputdonedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTDONEDIALOG_H
#define UI_INPUTDONEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_InputDoneDialog
{
public:
    QPushButton *pBtnHomepage;
    QPushButton *pBtnDone;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *InputDoneDialog)
    {
        if (InputDoneDialog->objectName().isEmpty())
            InputDoneDialog->setObjectName(QStringLiteral("InputDoneDialog"));
        InputDoneDialog->resize(1024, 768);
        pBtnHomepage = new QPushButton(InputDoneDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(190, 570, 200, 100));
        QFont font;
        font.setFamily(QStringLiteral("Algerian"));
        font.setPointSize(22);
        pBtnHomepage->setFont(font);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/homepageon.png);"));
        pBtnDone = new QPushButton(InputDoneDialog);
        pBtnDone->setObjectName(QStringLiteral("pBtnDone"));
        pBtnDone->setGeometry(QRect(590, 570, 200, 100));
        QFont font1;
        font1.setPointSize(22);
        pBtnDone->setFont(font1);
        pBtnDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/finishon.png);"));
        textBrowser = new QTextBrowser(InputDoneDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(60, 250, 901, 300));
        textBrowser->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: qlineargradient(spread:pad, x1:0.3125, y1:0, x2:0.784, y2:1, stop:0 rgba(211, 217, 255, 255), stop:1 rgba(255, 255, 255, 255));"));

        retranslateUi(InputDoneDialog);

        QMetaObject::connectSlotsByName(InputDoneDialog);
    } // setupUi

    void retranslateUi(QDialog *InputDoneDialog)
    {
        InputDoneDialog->setWindowTitle(QApplication::translate("InputDoneDialog", "InputDoneDialog", 0));
        pBtnHomepage->setText(QString());
        pBtnDone->setText(QString());
        textBrowser->setHtml(QApplication::translate("InputDoneDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:20px; margin-bottom:0px; margin-left:12px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#000000;\">\350\272\253\344\273\275\344\277\241\346\201\257</span></p>\n"
"<p style=\" margin-top:4px; margin-bottom:0px; margin-left:12px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#000000;\">\345\247\223\345\220\215 \351\251\254\345\256\211\345\220\233  \345\205\254\346\260\221\350\272\253\344\273\275\350\257\201 110102198710272321</span></p>\n"
"<p style=\" margin-top:20px; margin-bottom:0px; margin-left:12px; margin-right:0px; -qt-block-indent:0; text-ind"
                        "ent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#000000;\">\350\275\246\350\276\206\344\277\241\346\201\257</span></p>\n"
"<p style=\" margin-top:4px; margin-bottom:0px; margin-left:12px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\350\275\246\346\236\266\345\217\267\357\274\232                         \347\224\237\344\272\247\346\227\266\351\227\264\357\274\232                      \347\224\237\344\272\247\345\234\260\345\235\200\357\274\232 </span></p>\n"
"<p style=\" margin-top:4px; margin-bottom:0px; margin-left:12px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\345\210\266\351\200\240\345\225\206\357\274\232                         \350\275\246\350\272\253\351\242\234\350\211\262\357\274\232                      \350\275\246\350\276\206\347\261\273\345\236\213\357\274\232 </span></p>\n"
"<p style=\" margin-top:4px; margin-bottom:0px; margin-left:12px; margin-right:0px; -qt-block-indent:0; text-ind"
                        "ent:0px;\"><span style=\" font-size:12pt;\">\350\241\214\351\251\266\350\257\201\345\217\267\357\274\232                       \350\264\255\350\275\246\346\227\266\351\227\264\357\274\232                      \350\264\255\350\275\246\351\207\221\351\242\235\357\274\232 </span></p>\n"
"<p style=\" margin-top:4px; margin-bottom:0px; margin-left:12px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\346\240\270\345\256\232\350\275\275\351\207\215\357\274\232                       \350\275\246\347\211\214\345\217\267\357\274\232                        \344\270\212\347\211\214\346\227\266\351\227\264\357\274\232 </span></p>\n"
"<p style=\" margin-top:4px; margin-bottom:0px; margin-left:12px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\345\215\226\350\275\246\345\225\206\345\256\266\357\274\232                       \350\264\255\350\275\246\347\245\250\345\217\267\357\274\232                      \350\275\246\350\276\206\345\223"
                        "\201\347\211\214\357\274\232 </span></p>\n"
"<p style=\" margin-top:4px; margin-bottom:0px; margin-left:12px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\350\275\246\350\276\206\345\236\213\345\217\267\357\274\232</span></p>\n"
"<p style=\" margin-top:20px; margin-bottom:0px; margin-left:12px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">\347\250\216\350\264\271\344\277\241\346\201\257</span></p>\n"
"<p style=\" margin-top:4px; margin-bottom:0px; margin-left:12px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\345\217\221\347\245\250\345\217\267\357\274\232                         \350\275\246\350\210\271\347\250\216\345\217\267\357\274\232</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class InputDoneDialog: public Ui_InputDoneDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTDONEDIALOG_H
