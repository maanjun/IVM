/********************************************************************************
** Form generated from reading UI file 'mortgageBase.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MORTGAGEBASE_H
#define UI_MORTGAGEBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>
#include "basedialog.h"

QT_BEGIN_NAMESPACE

class Ui_mortgageBase
{
public:
    QFrame *frame;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton;

    void setupUi(BaseDialog *mortgageBase)
    {
        if (mortgageBase->objectName().isEmpty())
            mortgageBase->setObjectName(QStringLiteral("mortgageBase"));
        mortgageBase->resize(1900, 1080);
        frame = new QFrame(mortgageBase);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(630, 350, 711, 421));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        toolButton_2 = new QToolButton(frame);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setGeometry(QRect(272, 156, 100, 100));
        toolButton_3 = new QToolButton(frame);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setGeometry(QRect(429, 156, 100, 100));
        toolButton = new QToolButton(frame);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(115, 156, 100, 100));

        retranslateUi(mortgageBase);

        QMetaObject::connectSlotsByName(mortgageBase);
    } // setupUi

    void retranslateUi(BaseDialog *mortgageBase)
    {
        mortgageBase->setWindowTitle(QApplication::translate("mortgageBase", "mortgageBase", 0));
        toolButton_2->setText(QApplication::translate("mortgageBase", "\346\212\265\346\212\274\347\224\263\346\212\245", 0));
        toolButton_3->setText(QApplication::translate("mortgageBase", "\346\212\265\346\212\274\351\252\214\350\257\201", 0));
        toolButton->setText(QApplication::translate("mortgageBase", "\346\212\265\346\212\274\346\237\245\350\257\242", 0));
    } // retranslateUi

};

namespace Ui {
    class mortgageBase: public Ui_mortgageBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MORTGAGEBASE_H
