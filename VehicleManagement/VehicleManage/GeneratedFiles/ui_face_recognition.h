/********************************************************************************
** Form generated from reading UI file 'face_recognition.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACE_RECOGNITION_H
#define UI_FACE_RECOGNITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QLabel *label;
    QLabel *lb_mask;
    QLabel *lb_capture_frame;
    QLabel *lb_tips;
    QLabel *lb_message;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1900, 1080);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(380, 120, 994, 602));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        frame = new QFrame(layoutWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(900, 600));
        frame->setMaximumSize(QSize(700, 550));
        frame->setStyleSheet(QLatin1String("QFrame#frame{\n"
"border-radius:8px;\n"
"background-color:rgba(231,243,255,100);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 900, 50));
        label->setStyleSheet(QLatin1String("color: red;\n"
"font: bold 20px \"Microsoft YaHei\";"));
        label->setAlignment(Qt::AlignCenter);
        lb_mask = new QLabel(frame);
        lb_mask->setObjectName(QStringLiteral("lb_mask"));
        lb_mask->setGeometry(QRect(160, 60, 480, 360));
        lb_mask->setMinimumSize(QSize(480, 360));
        lb_mask->setPixmap(QPixmap(QString::fromUtf8(":/1/Resources/Images/outline1.png")));
        lb_mask->setScaledContents(true);
        lb_capture_frame = new QLabel(frame);
        lb_capture_frame->setObjectName(QStringLiteral("lb_capture_frame"));
        lb_capture_frame->setGeometry(QRect(170, 70, 480, 360));
        lb_capture_frame->setMinimumSize(QSize(480, 360));
        lb_tips = new QLabel(frame);
        lb_tips->setObjectName(QStringLiteral("lb_tips"));
        lb_tips->setGeometry(QRect(0, 450, 900, 30));
        lb_tips->setStyleSheet(QLatin1String("color: red;\n"
"font: bold 16px \"Microsoft YaHei\";"));
        lb_tips->setAlignment(Qt::AlignCenter);
        lb_message = new QLabel(frame);
        lb_message->setObjectName(QStringLiteral("lb_message"));
        lb_message->setGeometry(QRect(0, 520, 900, 31));
        lb_message->setStyleSheet(QLatin1String("color: red;\n"
"font: bold 18px \"Microsoft YaHei\";"));
        lb_message->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(frame);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label->setText(QApplication::translate("Dialog", "\346\255\243\345\234\250\350\277\233\350\241\214\344\272\272\350\204\270\350\257\206\345\210\253", 0));
        lb_mask->setText(QString());
        lb_capture_frame->setText(QString());
        lb_tips->setText(QApplication::translate("Dialog", "\350\257\267\347\234\250\347\234\274", 0));
        lb_message->setText(QApplication::translate("Dialog", "( \346\263\250\346\204\217\357\274\232\350\257\267\346\212\254\345\244\264\347\234\213\351\225\234\345\244\264\357\274\214\346\213\215\347\205\247\351\234\200\346\230\276\347\244\272\345\205\250\345\244\264\345\203\217 )", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACE_RECOGNITION_H
