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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ConfirmPaytaxDialog
{
public:
    QPushButton *pBtnNext;
    QPushButton *pBtnHomepage;
    QGraphicsView *graphicsView;
    QLabel *label;

    void setupUi(QDialog *ConfirmPaytaxDialog)
    {
        if (ConfirmPaytaxDialog->objectName().isEmpty())
            ConfirmPaytaxDialog->setObjectName(QStringLiteral("ConfirmPaytaxDialog"));
        ConfirmPaytaxDialog->resize(1920, 1080);
        ConfirmPaytaxDialog->setStyleSheet(QStringLiteral("#ConfirmPaytaxDialog{border-image: url(:/Resources/Images/background.png);}"));
        pBtnNext = new QPushButton(ConfirmPaytaxDialog);
        pBtnNext->setObjectName(QStringLiteral("pBtnNext"));
        pBtnNext->setGeometry(QRect(1290, 850, 300, 150));
        QFont font;
        font.setPointSize(22);
        pBtnNext->setFont(font);
        pBtnNext->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/nexton.png);"));
        pBtnHomepage = new QPushButton(ConfirmPaytaxDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(330, 850, 300, 150));
        QFont font1;
        font1.setFamily(QStringLiteral("Algerian"));
        font1.setPointSize(22);
        pBtnHomepage->setFont(font1);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));
        graphicsView = new QGraphicsView(ConfirmPaytaxDialog);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(810, 290, 260, 260));
        graphicsView->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/TaxQRcode.png);"));
        label = new QLabel(ConfirmPaytaxDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(590, 590, 741, 121));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(24);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        retranslateUi(ConfirmPaytaxDialog);

        QMetaObject::connectSlotsByName(ConfirmPaytaxDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfirmPaytaxDialog)
    {
        ConfirmPaytaxDialog->setWindowTitle(QApplication::translate("ConfirmPaytaxDialog", "ConfirmPaytaxDialog", 0));
        pBtnNext->setText(QString());
        pBtnHomepage->setText(QString());
        label->setText(QApplication::translate("ConfirmPaytaxDialog", "* \350\257\267\346\211\253\347\240\201\346\224\257\344\273\230\357\274\214\345\276\205\346\224\257\344\273\230\345\256\214\346\210\220\345\220\216\357\274\214\350\257\267\347\202\271\345\207\273\342\200\234\344\270\213\344\270\200\346\255\245\342\200\235\343\200\202", 0));
    } // retranslateUi

};

namespace Ui {
    class ConfirmPaytaxDialog: public Ui_ConfirmPaytaxDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMPAYTAXDIALOG_H
