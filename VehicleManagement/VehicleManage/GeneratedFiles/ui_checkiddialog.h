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
#include <QtWidgets/QGraphicsView>
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
    QGraphicsView *viewScanningID;
    QGraphicsView *viewScanningVehicle;
    QGraphicsView *viewInputFax;
    QGraphicsView *viewVehicleFax;
    QGraphicsView *viewDone;
    QGraphicsView *viewFaxDone;
    QLabel *labelScanningID;
    QLabel *labelScanningVehicle;
    QLabel *labelInputFax;
    QLabel *labelDone;
    QGraphicsView *viewIDVehicle;
    QGraphicsView *viewIDSelect;
    QLabel *labelSelect;

    void setupUi(QDialog *CheckIDDialog)
    {
        if (CheckIDDialog->objectName().isEmpty())
            CheckIDDialog->setObjectName(QStringLiteral("CheckIDDialog"));
        CheckIDDialog->setWindowModality(Qt::NonModal);
        CheckIDDialog->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CheckIDDialog->sizePolicy().hasHeightForWidth());
        CheckIDDialog->setSizePolicy(sizePolicy);
        pBtnHomepage = new QPushButton(CheckIDDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(330, 850, 300, 150));
        pBtnHomepage->setMinimumSize(QSize(200, 100));
        QFont font;
        font.setFamily(QStringLiteral("Algerian"));
        font.setPointSize(22);
        pBtnHomepage->setFont(font);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));
        pBtnNext = new QPushButton(CheckIDDialog);
        pBtnNext->setObjectName(QStringLiteral("pBtnNext"));
        pBtnNext->setGeometry(QRect(1290, 850, 300, 150));
        pBtnNext->setMinimumSize(QSize(200, 100));
        QFont font1;
        font1.setPointSize(22);
        pBtnNext->setFont(font1);
        pBtnNext->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/nextoff.png);"));
        textBrowser = new QTextBrowser(CheckIDDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(1020, 280, 750, 500));
        textBrowser->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:20px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/sfzzmdw.png);"));
        label = new QLabel(CheckIDDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 312, 650, 450));
        label->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/scanningid.png);"));
        labelHead = new QLabel(CheckIDDialog);
        labelHead->setObjectName(QStringLiteral("labelHead"));
        labelHead->setGeometry(QRect(1537, 359, 191, 261));
        labelLoading = new QLabel(CheckIDDialog);
        labelLoading->setObjectName(QStringLiteral("labelLoading"));
        labelLoading->setGeometry(QRect(1340, 470, 124, 124));
        labelLoading->setStyleSheet(QStringLiteral("border-image: url(:/Resources/Images/loading.gif);"));
        viewScanningID = new QGraphicsView(CheckIDDialog);
        viewScanningID->setObjectName(QStringLiteral("viewScanningID"));
        viewScanningID->setGeometry(QRect(50, 135, 50, 50));
        viewScanningID->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/doing.png);"));
        viewScanningVehicle = new QGraphicsView(CheckIDDialog);
        viewScanningVehicle->setObjectName(QStringLiteral("viewScanningVehicle"));
        viewScanningVehicle->setGeometry(QRect(640, 135, 50, 50));
        viewScanningVehicle->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/prepared.png);"));
        viewInputFax = new QGraphicsView(CheckIDDialog);
        viewInputFax->setObjectName(QStringLiteral("viewInputFax"));
        viewInputFax->setGeometry(QRect(1230, 135, 50, 50));
        viewInputFax->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/prepared.png);"));
        viewVehicleFax = new QGraphicsView(CheckIDDialog);
        viewVehicleFax->setObjectName(QStringLiteral("viewVehicleFax"));
        viewVehicleFax->setGeometry(QRect(690, 150, 540, 20));
        viewVehicleFax->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/undoneline.png);"));
        viewDone = new QGraphicsView(CheckIDDialog);
        viewDone->setObjectName(QStringLiteral("viewDone"));
        viewDone->setGeometry(QRect(1820, 135, 50, 50));
        viewDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/prepared.png);"));
        viewFaxDone = new QGraphicsView(CheckIDDialog);
        viewFaxDone->setObjectName(QStringLiteral("viewFaxDone"));
        viewFaxDone->setGeometry(QRect(1280, 150, 540, 20));
        viewFaxDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/undoneline.png);"));
        labelScanningID = new QLabel(CheckIDDialog);
        labelScanningID->setObjectName(QStringLiteral("labelScanningID"));
        labelScanningID->setGeometry(QRect(50, 180, 200, 50));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(18);
        labelScanningID->setFont(font2);
        labelScanningVehicle = new QLabel(CheckIDDialog);
        labelScanningVehicle->setObjectName(QStringLiteral("labelScanningVehicle"));
        labelScanningVehicle->setGeometry(QRect(600, 180, 200, 50));
        labelScanningVehicle->setFont(font2);
        labelInputFax = new QLabel(CheckIDDialog);
        labelInputFax->setObjectName(QStringLiteral("labelInputFax"));
        labelInputFax->setGeometry(QRect(1200, 180, 200, 50));
        labelInputFax->setFont(font2);
        labelDone = new QLabel(CheckIDDialog);
        labelDone->setObjectName(QStringLiteral("labelDone"));
        labelDone->setGeometry(QRect(1820, 180, 61, 50));
        labelDone->setFont(font2);
        viewIDVehicle = new QGraphicsView(CheckIDDialog);
        viewIDVehicle->setObjectName(QStringLiteral("viewIDVehicle"));
        viewIDVehicle->setGeometry(QRect(100, 150, 540, 20));
        viewIDVehicle->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/undoneline.png);"));
        viewIDSelect = new QGraphicsView(CheckIDDialog);
        viewIDSelect->setObjectName(QStringLiteral("viewIDSelect"));
        viewIDSelect->setGeometry(QRect(100, 150, 1721, 20));
        viewIDSelect->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/undoneline.png);"));
        labelSelect = new QLabel(CheckIDDialog);
        labelSelect->setObjectName(QStringLiteral("labelSelect"));
        labelSelect->setGeometry(QRect(1770, 180, 101, 50));
        labelSelect->setFont(font2);

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
        labelScanningID->setText(QApplication::translate("CheckIDDialog", "\346\211\253\346\217\217\350\272\253\344\273\275\350\257\201", 0));
        labelScanningVehicle->setText(QApplication::translate("CheckIDDialog", "\346\211\253\346\217\217\350\275\246\350\276\206\344\277\241\346\201\257", 0));
        labelInputFax->setText(QApplication::translate("CheckIDDialog", "\345\275\225\345\205\245\347\250\216\350\264\271\345\217\267", 0));
        labelDone->setText(QApplication::translate("CheckIDDialog", "\345\256\214\346\210\220", 0));
        labelSelect->setText(QApplication::translate("CheckIDDialog", "\350\207\252\351\200\211\350\275\246\347\211\214", 0));
    } // retranslateUi

};

namespace Ui {
    class CheckIDDialog: public Ui_CheckIDDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKIDDIALOG_H
