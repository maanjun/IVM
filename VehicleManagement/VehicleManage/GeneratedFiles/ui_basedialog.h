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
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_BaseDialog
{
public:
    QLabel *labelTitle;

    void setupUi(QDialog *BaseDialog)
    {
        if (BaseDialog->objectName().isEmpty())
            BaseDialog->setObjectName(QStringLiteral("BaseDialog"));
        BaseDialog->resize(1024, 768);
        BaseDialog->setStyleSheet(QStringLiteral("#BaseDialog{border-image: url(:/Resources/Images/background.png);}"));
        labelTitle = new QLabel(BaseDialog);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setGeometry(QRect(250, 60, 481, 141));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(42);
        labelTitle->setFont(font);
        labelTitle->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.3125, y1:0, x2:0.784, y2:1, stop:0 rgba(211, 217, 255, 255), stop:1 rgba(255, 255, 255, 255));"));

        retranslateUi(BaseDialog);

        QMetaObject::connectSlotsByName(BaseDialog);
    } // setupUi

    void retranslateUi(QDialog *BaseDialog)
    {
        BaseDialog->setWindowTitle(QApplication::translate("BaseDialog", "BaseDialog", 0));
        labelTitle->setText(QApplication::translate("BaseDialog", "\350\277\234\347\250\213\346\231\272\350\203\275\350\275\246\346\243\200\347\263\273\347\273\237", 0));
    } // retranslateUi

};

namespace Ui {
    class BaseDialog: public Ui_BaseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASEDIALOG_H
