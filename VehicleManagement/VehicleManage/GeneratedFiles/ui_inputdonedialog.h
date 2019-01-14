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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_InputDoneDialog
{
public:
    QPushButton *pBtnHomepage;
    QPushButton *pBtnDone;
    QTextBrowser *textBrowser;
    QGraphicsView *viewScanningID;
    QGraphicsView *viewInputFax;
    QGraphicsView *viewVehicleFax;
    QGraphicsView *viewScanningVehicle;
    QLabel *labelScanningID;
    QLabel *labelScanningVehicle;
    QGraphicsView *viewIDVehicle;
    QLabel *labelInputFax;
    QGraphicsView *viewDone_2;
    QLabel *labelDone;
    QGraphicsView *viewFaxDone;

    void setupUi(QDialog *InputDoneDialog)
    {
        if (InputDoneDialog->objectName().isEmpty())
            InputDoneDialog->setObjectName(QStringLiteral("InputDoneDialog"));
        InputDoneDialog->resize(1920, 1080);
        pBtnHomepage = new QPushButton(InputDoneDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(330, 850, 300, 150));
        QFont font;
        font.setFamily(QStringLiteral("Algerian"));
        font.setPointSize(22);
        pBtnHomepage->setFont(font);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));
        pBtnDone = new QPushButton(InputDoneDialog);
        pBtnDone->setObjectName(QStringLiteral("pBtnDone"));
        pBtnDone->setGeometry(QRect(1290, 850, 300, 150));
        QFont font1;
        font1.setPointSize(22);
        pBtnDone->setFont(font1);
        pBtnDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/finishon.png);"));
        textBrowser = new QTextBrowser(InputDoneDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(60, 240, 1801, 591));
        textBrowser->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: qlineargradient(spread:pad, x1:0.3125, y1:0, x2:0.784, y2:1, stop:0 rgba(211, 217, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        viewScanningID = new QGraphicsView(InputDoneDialog);
        viewScanningID->setObjectName(QStringLiteral("viewScanningID"));
        viewScanningID->setGeometry(QRect(50, 135, 50, 50));
        viewScanningID->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/done.png);"));
        viewInputFax = new QGraphicsView(InputDoneDialog);
        viewInputFax->setObjectName(QStringLiteral("viewInputFax"));
        viewInputFax->setGeometry(QRect(1230, 135, 50, 50));
        viewInputFax->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/done.png);"));
        viewVehicleFax = new QGraphicsView(InputDoneDialog);
        viewVehicleFax->setObjectName(QStringLiteral("viewVehicleFax"));
        viewVehicleFax->setGeometry(QRect(690, 150, 540, 20));
        viewVehicleFax->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/doneline.png);"));
        viewScanningVehicle = new QGraphicsView(InputDoneDialog);
        viewScanningVehicle->setObjectName(QStringLiteral("viewScanningVehicle"));
        viewScanningVehicle->setGeometry(QRect(640, 135, 50, 50));
        viewScanningVehicle->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/done.png);"));
        labelScanningID = new QLabel(InputDoneDialog);
        labelScanningID->setObjectName(QStringLiteral("labelScanningID"));
        labelScanningID->setGeometry(QRect(50, 180, 200, 50));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(18);
        labelScanningID->setFont(font2);
        labelScanningVehicle = new QLabel(InputDoneDialog);
        labelScanningVehicle->setObjectName(QStringLiteral("labelScanningVehicle"));
        labelScanningVehicle->setGeometry(QRect(600, 180, 200, 50));
        labelScanningVehicle->setFont(font2);
        viewIDVehicle = new QGraphicsView(InputDoneDialog);
        viewIDVehicle->setObjectName(QStringLiteral("viewIDVehicle"));
        viewIDVehicle->setGeometry(QRect(100, 150, 540, 20));
        viewIDVehicle->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/doneline.png);"));
        labelInputFax = new QLabel(InputDoneDialog);
        labelInputFax->setObjectName(QStringLiteral("labelInputFax"));
        labelInputFax->setGeometry(QRect(1200, 180, 200, 50));
        labelInputFax->setFont(font2);
        viewDone_2 = new QGraphicsView(InputDoneDialog);
        viewDone_2->setObjectName(QStringLiteral("viewDone_2"));
        viewDone_2->setGeometry(QRect(1820, 135, 50, 50));
        viewDone_2->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/doing.png);"));
        labelDone = new QLabel(InputDoneDialog);
        labelDone->setObjectName(QStringLiteral("labelDone"));
        labelDone->setGeometry(QRect(1820, 180, 61, 50));
        labelDone->setFont(font2);
        viewFaxDone = new QGraphicsView(InputDoneDialog);
        viewFaxDone->setObjectName(QStringLiteral("viewFaxDone"));
        viewFaxDone->setGeometry(QRect(1280, 150, 540, 20));
        viewFaxDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/doneline.png);"));

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
"<p style=\" margin-top:20px; margin-bottom:0px; margin-left:28px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> </p>\n"
"<p style=\" margin-top:10px; margin-bottom:0px; margin-left:28px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt; font-weight:600; color:#000000;\">\350\272\253\344\273\275\344\277\241\346\201\257</span></p>\n"
"<p style=\" margin-top:8px; margin-bottom:0px; margin-left:28px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt; color:#000000;\">\345\247\223\345\220\215 \351\251\254\345\256\211\345\220\233  \345\205\254\346\260\221\350\272\253\344\273\275\350\257\201 1101021987102"
                        "72321</span><span style=\" font-size:8pt; color:#000000;\"> </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:8px; margin-bottom:0px; margin-left:28px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:8px; margin-bottom:0px; margin-left:28px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt; font-weight:600; color:#000000;\">\350\275\246\350\276\206\344\277\241\346\201\257</span></p>\n"
"<p style=\" margin-top:8px; margin-bottom:0px; margin-left:28px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">\350\275\246\346\236\266\345\217\267\357\274\232                         \347\224\237\344\272\247\346\227\266\351\227\264\357\274\232                      \347\224\237\344\272\247\345\234\260\345\235\200\357\274\232 </span></p>\n"
"<p style=\" margin-top:8px; margin-bottom:0px; margin-left:28px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"
                        "\"><span style=\" font-size:24pt;\">\345\210\266\351\200\240\345\225\206\357\274\232                         \350\275\246\350\272\253\351\242\234\350\211\262\357\274\232                      \350\275\246\350\276\206\347\261\273\345\236\213\357\274\232 </span></p>\n"
"<p style=\" margin-top:8px; margin-bottom:0px; margin-left:28px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">\350\241\214\351\251\266\350\257\201\345\217\267\357\274\232                       \350\264\255\350\275\246\346\227\266\351\227\264\357\274\232                      \350\264\255\350\275\246\351\207\221\351\242\235\357\274\232 </span></p>\n"
"<p style=\" margin-top:8px; margin-bottom:0px; margin-left:28px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">\346\240\270\345\256\232\350\275\275\351\207\215\357\274\232                       \350\275\246\347\211\214\345\217\267\357\274\232                        \344\270\212\347\211\214\346\227\266\351\227\264\357"
                        "\274\232 </span></p>\n"
"<p style=\" margin-top:8px; margin-bottom:0px; margin-left:28px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">\345\215\226\350\275\246\345\225\206\345\256\266\357\274\232                       \350\264\255\350\275\246\347\245\250\345\217\267\357\274\232                      \350\275\246\350\276\206\345\223\201\347\211\214\357\274\232 </span></p>\n"
"<p style=\" margin-top:8px; margin-bottom:0px; margin-left:28px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">\350\275\246\350\276\206\345\236\213\345\217\267\357\274\232</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:8px; margin-bottom:0px; margin-left:28px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:8px; margin-bottom:0px; margin-left:28px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt; fo"
                        "nt-weight:600;\">\347\250\216\350\264\271\344\277\241\346\201\257</span></p>\n"
"<p style=\" margin-top:8px; margin-bottom:0px; margin-left:28px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">\345\217\221\347\245\250\345\217\267\357\274\232                         \350\275\246\350\210\271\347\250\216\345\217\267\357\274\232</span></p></body></html>", 0));
        labelScanningID->setText(QApplication::translate("InputDoneDialog", "\346\211\253\346\217\217\350\272\253\344\273\275\350\257\201", 0));
        labelScanningVehicle->setText(QApplication::translate("InputDoneDialog", "\346\211\253\346\217\217\350\275\246\350\276\206\344\277\241\346\201\257", 0));
        labelInputFax->setText(QApplication::translate("InputDoneDialog", "\345\275\225\345\205\245\347\250\216\350\264\271\345\217\267", 0));
        labelDone->setText(QApplication::translate("InputDoneDialog", "\345\256\214\346\210\220", 0));
    } // retranslateUi

};

namespace Ui {
    class InputDoneDialog: public Ui_InputDoneDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTDONEDIALOG_H
