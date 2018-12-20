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

    void setupUi(QDialog *SelectLicenseDialog)
    {
        if (SelectLicenseDialog->objectName().isEmpty())
            SelectLicenseDialog->setObjectName(QStringLiteral("SelectLicenseDialog"));
        SelectLicenseDialog->resize(1024, 768);
        pBtnConfirm = new QPushButton(SelectLicenseDialog);
        pBtnConfirm->setObjectName(QStringLiteral("pBtnConfirm"));
        pBtnConfirm->setGeometry(QRect(590, 570, 200, 100));
        QFont font;
        font.setPointSize(22);
        pBtnConfirm->setFont(font);
        pBtnConfirm->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        pBtnHomepage = new QPushButton(SelectLicenseDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(190, 570, 200, 100));
        QFont font1;
        font1.setFamily(QStringLiteral("Algerian"));
        font1.setPointSize(22);
        pBtnHomepage->setFont(font1);
        pBtnHomepage->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));

        retranslateUi(SelectLicenseDialog);

        QMetaObject::connectSlotsByName(SelectLicenseDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectLicenseDialog)
    {
        SelectLicenseDialog->setWindowTitle(QApplication::translate("SelectLicenseDialog", "SelectLicenseDialog", 0));
        pBtnConfirm->setText(QString());
        pBtnHomepage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SelectLicenseDialog: public Ui_SelectLicenseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTLICENSEDIALOG_H
