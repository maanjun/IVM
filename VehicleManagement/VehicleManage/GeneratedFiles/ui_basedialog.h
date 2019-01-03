/********************************************************************************
** Form generated from reading UI file 'basedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASEDIALOG_H
#define UI_BASEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>

QT_BEGIN_NAMESPACE

class Ui_BaseDialog
{
public:
    QLCDNumber *lcdNumber;

    void setupUi(QDialog *BaseDialog)
    {
        if (BaseDialog->objectName().isEmpty())
            BaseDialog->setObjectName(QStringLiteral("BaseDialog"));
        BaseDialog->resize(1920, 1080);
        BaseDialog->setStyleSheet(QStringLiteral("#BaseDialog{border-image: url(:/Resources/Images/background.jpg);}"));
        lcdNumber = new QLCDNumber(BaseDialog);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(10, 940, 131, 131));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(48);
        lcdNumber->setFont(font);
        lcdNumber->setStyleSheet(QStringLiteral("color: rgb(74, 162, 255);"));
        lcdNumber->setDigitCount(2);
        lcdNumber->setSegmentStyle(QLCDNumber::Filled);
        lcdNumber->setProperty("value", QVariant(60));
        lcdNumber->setProperty("intValue", QVariant(60));

        retranslateUi(BaseDialog);

        QMetaObject::connectSlotsByName(BaseDialog);
    } // setupUi

    void retranslateUi(QDialog *BaseDialog)
    {
        BaseDialog->setWindowTitle(QApplication::translate("BaseDialog", "BaseDialog", 0));
    } // retranslateUi

};

namespace Ui {
    class BaseDialog: public Ui_BaseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASEDIALOG_H
