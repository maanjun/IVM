/********************************************************************************
** Form generated from reading UI file 'paytaxesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYTAXESDIALOG_H
#define UI_PAYTAXESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PaytaxesDialog
{
public:
    QPushButton *pBtnPaytexesQuery;
    QPushButton *pBtnDeclare;
    QPushButton *pBtnPaytaxes;

    void setupUi(QDialog *PaytaxesDialog)
    {
        if (PaytaxesDialog->objectName().isEmpty())
            PaytaxesDialog->setObjectName(QStringLiteral("PaytaxesDialog"));
        PaytaxesDialog->resize(1920, 988);
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(18);
        PaytaxesDialog->setFont(font);
        pBtnPaytexesQuery = new QPushButton(PaytaxesDialog);
        pBtnPaytexesQuery->setObjectName(QStringLiteral("pBtnPaytexesQuery"));
        pBtnPaytexesQuery->setGeometry(QRect(330, 400, 250, 90));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(22);
        font1.setBold(false);
        font1.setWeight(50);
        pBtnPaytexesQuery->setFont(font1);
        pBtnPaytexesQuery->setStyleSheet(QStringLiteral("background-image: url(:/Resources/Images/btn.png);broder-radius:10px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Images/\345\256\214\347\250\216\346\237\245\350\257\242.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBtnPaytexesQuery->setIcon(icon);
        pBtnPaytexesQuery->setIconSize(QSize(85, 65));
        pBtnDeclare = new QPushButton(PaytaxesDialog);
        pBtnDeclare->setObjectName(QStringLiteral("pBtnDeclare"));
        pBtnDeclare->setGeometry(QRect(800, 400, 250, 90));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(22);
        pBtnDeclare->setFont(font2);
        pBtnDeclare->setStyleSheet(QStringLiteral("background-image: url(:/Resources/Images/btn.png);broder-radius:10px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Images/\345\256\214\347\250\216\347\224\263\346\212\245.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBtnDeclare->setIcon(icon1);
        pBtnDeclare->setIconSize(QSize(85, 65));
        pBtnPaytaxes = new QPushButton(PaytaxesDialog);
        pBtnPaytaxes->setObjectName(QStringLiteral("pBtnPaytaxes"));
        pBtnPaytaxes->setGeometry(QRect(1280, 400, 250, 90));
        pBtnPaytaxes->setFont(font2);
        pBtnPaytaxes->setStyleSheet(QStringLiteral("background-image: url(:/Resources/Images/btn.png);broder-radius:10px;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Images/\345\256\214\347\250\216\346\243\200\346\237\245.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBtnPaytaxes->setIcon(icon2);
        pBtnPaytaxes->setIconSize(QSize(85, 65));

        retranslateUi(PaytaxesDialog);

        QMetaObject::connectSlotsByName(PaytaxesDialog);
    } // setupUi

    void retranslateUi(QDialog *PaytaxesDialog)
    {
        PaytaxesDialog->setWindowTitle(QApplication::translate("PaytaxesDialog", "PaytaxesDialog", 0));
        pBtnPaytexesQuery->setText(QApplication::translate("PaytaxesDialog", "\345\256\214\347\250\216\346\237\245\350\257\242", 0));
        pBtnDeclare->setText(QApplication::translate("PaytaxesDialog", "\345\256\214\347\250\216\347\224\263\346\212\245", 0));
        pBtnPaytaxes->setText(QApplication::translate("PaytaxesDialog", "\345\256\214\347\250\216\346\243\200\346\237\245", 0));
    } // retranslateUi

};

namespace Ui {
    class PaytaxesDialog: public Ui_PaytaxesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYTAXESDIALOG_H
