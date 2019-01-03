/********************************************************************************
** Form generated from reading UI file 'selectlicensedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTLICENSEDIALOG_H
#define UI_SELECTLICENSEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SelectLicenseDialog
{
public:
    QPushButton *pBtnConfirm;
    QPushButton *pBtnHomepage;
    QPushButton *pBtnNext;
    QPushButton *pBtnSelect;
    QPushButton *pBtnScanIdSelect;

    void setupUi(QDialog *SelectLicenseDialog)
    {
        if (SelectLicenseDialog->objectName().isEmpty())
            SelectLicenseDialog->setObjectName(QStringLiteral("SelectLicenseDialog"));
        SelectLicenseDialog->resize(1920, 1080);
        pBtnConfirm = new QPushButton(SelectLicenseDialog);
        pBtnConfirm->setObjectName(QStringLiteral("pBtnConfirm"));
        pBtnConfirm->setGeometry(QRect(1310, 850, 300, 150));
        QFont font;
        font.setPointSize(22);
        pBtnConfirm->setFont(font);
        pBtnConfirm->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/confirmoff.png);"));
        pBtnHomepage = new QPushButton(SelectLicenseDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(330, 850, 300, 150));
        QFont font1;
        font1.setFamily(QStringLiteral("Algerian"));
        font1.setPointSize(22);
        pBtnHomepage->setFont(font1);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));
        pBtnNext = new QPushButton(SelectLicenseDialog);
        pBtnNext->setObjectName(QStringLiteral("pBtnNext"));
        pBtnNext->setGeometry(QRect(820, 850, 300, 150));
        pBtnNext->setMinimumSize(QSize(200, 100));
        pBtnNext->setFont(font);
        pBtnNext->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/anotheroff.png);"));
        pBtnSelect = new QPushButton(SelectLicenseDialog);
        pBtnSelect->setObjectName(QStringLiteral("pBtnSelect"));
        pBtnSelect->setGeometry(QRect(960, 150, 900, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(20);
        pBtnSelect->setFont(font2);
        pBtnSelect->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(65, 147, 252);"));
        pBtnScanIdSelect = new QPushButton(SelectLicenseDialog);
        pBtnScanIdSelect->setObjectName(QStringLiteral("pBtnScanIdSelect"));
        pBtnScanIdSelect->setGeometry(QRect(60, 150, 900, 50));
        pBtnScanIdSelect->setFont(font2);
        pBtnScanIdSelect->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(166, 205, 251);"));

        retranslateUi(SelectLicenseDialog);

        QMetaObject::connectSlotsByName(SelectLicenseDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectLicenseDialog)
    {
        SelectLicenseDialog->setWindowTitle(QApplication::translate("SelectLicenseDialog", "SelectLicenseDialog", 0));
        pBtnConfirm->setText(QString());
        pBtnHomepage->setText(QString());
        pBtnNext->setText(QString());
        pBtnSelect->setText(QApplication::translate("SelectLicenseDialog", "\350\207\252\344\270\273\351\200\211\347\211\214", 0));
        pBtnScanIdSelect->setText(QApplication::translate("SelectLicenseDialog", "\346\211\253\346\217\217\350\272\253\344\273\275\350\257\201", 0));
    } // retranslateUi

};

namespace Ui {
    class SelectLicenseDialog: public Ui_SelectLicenseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTLICENSEDIALOG_H
