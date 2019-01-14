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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SelectLicenseDialog
{
public:
    QPushButton *pBtnConfirm;
    QPushButton *pBtnHomepage;
    QPushButton *pBtnNext;
    QLabel *labelScanningID;
    QGraphicsView *viewScanningID;
    QGraphicsView *viewDone;
    QGraphicsView *viewIDSelect;
    QLabel *labelSelect;

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
        labelScanningID = new QLabel(SelectLicenseDialog);
        labelScanningID->setObjectName(QStringLiteral("labelScanningID"));
        labelScanningID->setGeometry(QRect(50, 180, 200, 50));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(18);
        labelScanningID->setFont(font2);
        viewScanningID = new QGraphicsView(SelectLicenseDialog);
        viewScanningID->setObjectName(QStringLiteral("viewScanningID"));
        viewScanningID->setGeometry(QRect(50, 135, 50, 50));
        viewScanningID->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/done.png);"));
        viewDone = new QGraphicsView(SelectLicenseDialog);
        viewDone->setObjectName(QStringLiteral("viewDone"));
        viewDone->setGeometry(QRect(1820, 135, 50, 50));
        viewDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/doing.png);"));
        viewIDSelect = new QGraphicsView(SelectLicenseDialog);
        viewIDSelect->setObjectName(QStringLiteral("viewIDSelect"));
        viewIDSelect->setGeometry(QRect(100, 150, 1721, 20));
        viewIDSelect->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/doneline.png);"));
        labelSelect = new QLabel(SelectLicenseDialog);
        labelSelect->setObjectName(QStringLiteral("labelSelect"));
        labelSelect->setGeometry(QRect(1770, 180, 101, 50));
        labelSelect->setFont(font2);

        retranslateUi(SelectLicenseDialog);

        QMetaObject::connectSlotsByName(SelectLicenseDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectLicenseDialog)
    {
        SelectLicenseDialog->setWindowTitle(QApplication::translate("SelectLicenseDialog", "SelectLicenseDialog", 0));
        pBtnConfirm->setText(QString());
        pBtnHomepage->setText(QString());
        pBtnNext->setText(QString());
        labelScanningID->setText(QApplication::translate("SelectLicenseDialog", "\346\211\253\346\217\217\350\272\253\344\273\275\350\257\201", 0));
        labelSelect->setText(QApplication::translate("SelectLicenseDialog", "\350\207\252\351\200\211\350\275\246\347\211\214", 0));
    } // retranslateUi

};

namespace Ui {
    class SelectLicenseDialog: public Ui_SelectLicenseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTLICENSEDIALOG_H
