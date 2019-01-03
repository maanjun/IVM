/********************************************************************************
** Form generated from reading UI file 'drivingmanage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVINGMANAGE_H
#define UI_DRIVINGMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DrivingManage
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pBtnGohome;

    void setupUi(QMainWindow *DrivingManage)
    {
        if (DrivingManage->objectName().isEmpty())
            DrivingManage->setObjectName(QStringLiteral("DrivingManage"));
        DrivingManage->resize(1920, 1080);
        DrivingManage->setStyleSheet(QStringLiteral("border-image: url(:/Resources/Images/background.jpg);"));
        centralWidget = new QWidget(DrivingManage);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(400, 200, 400, 200));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(48);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/developing.png);"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1120, 200, 400, 200));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image: url(:/Resources/Images/developing.png);"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(400, 480, 400, 200));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image: url(:/Resources/Images/developing.png);"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(1120, 480, 400, 200));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image: url(:/Resources/Images/developing.png);"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(400, 760, 400, 200));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image: url(:/Resources/Images/developing.png);"));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(1120, 760, 400, 200));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image: url(:/Resources/Images/developing.png);"));
        pBtnGohome = new QPushButton(centralWidget);
        pBtnGohome->setObjectName(QStringLiteral("pBtnGohome"));
        pBtnGohome->setGeometry(QRect(20, 140, 120, 120));
        pBtnGohome->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/return.png);"));
        DrivingManage->setCentralWidget(centralWidget);

        retranslateUi(DrivingManage);

        QMetaObject::connectSlotsByName(DrivingManage);
    } // setupUi

    void retranslateUi(QMainWindow *DrivingManage)
    {
        DrivingManage->setWindowTitle(QApplication::translate("DrivingManage", "DrivingManage", 0));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pBtnGohome->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DrivingManage: public Ui_DrivingManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVINGMANAGE_H
