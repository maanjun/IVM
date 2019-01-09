/********************************************************************************
** Form generated from reading UI file 'vehiclemanage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEMANAGE_H
#define UI_VEHICLEMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleManageClass
{
public:
    QWidget *centralWidget;
    QPushButton *pBtnMortgage;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_3;
    QPushButton *pBtnCheck;
    QPushButton *pBtnSelect;
    QPushButton *pBtnkTax_4;
    QPushButton *pBtnInsurance;
    QGraphicsView *graphicsView_4;
    QGraphicsView *graphicsView_5;
    QGraphicsView *graphicsView;
    QPushButton *pBtnHomepage;

    void setupUi(QMainWindow *VehicleManageClass)
    {
        if (VehicleManageClass->objectName().isEmpty())
            VehicleManageClass->setObjectName(QStringLiteral("VehicleManageClass"));
        VehicleManageClass->resize(1920, 1076);
        VehicleManageClass->setStyleSheet(QStringLiteral("#centralWidget{border-image: url(:/Resources/Images/background.png);}"));
        centralWidget = new QWidget(VehicleManageClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pBtnMortgage = new QPushButton(centralWidget);
        pBtnMortgage->setObjectName(QStringLiteral("pBtnMortgage"));
        pBtnMortgage->setGeometry(QRect(430, 750, 241, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(22);
        pBtnMortgage->setFont(font);
        pBtnMortgage->setStyleSheet(QStringLiteral("background-image: url(:/Resources/Images/btn.png);broder-radius:10px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Images/CarDiya.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBtnMortgage->setIcon(icon);
        pBtnMortgage->setIconSize(QSize(85, 65));
        pBtnMortgage->setFlat(true);
        graphicsView_2 = new QGraphicsView(centralWidget);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(40, 0, 111, 111));
        graphicsView_2->setStyleSheet(QStringLiteral("background-image: url(:/Resources/Images/btnPolice.png);border:0px;"));
        graphicsView_2->setViewportUpdateMode(QGraphicsView::FullViewportUpdate);
        graphicsView_3 = new QGraphicsView(centralWidget);
        graphicsView_3->setObjectName(QStringLiteral("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(210, 20, 1041, 81));
        graphicsView_3->setStyleSheet(QStringLiteral("background-image: url(:/Resources/Images/Hint2.png);border:0px;"));
        pBtnCheck = new QPushButton(centralWidget);
        pBtnCheck->setObjectName(QStringLiteral("pBtnCheck"));
        pBtnCheck->setGeometry(QRect(840, 550, 241, 81));
        pBtnCheck->setFont(font);
        pBtnCheck->setStyleSheet(QStringLiteral("background-image: url(:/Resources/Images/btn.png);broder-radius:10px;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Images/Ccheck.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBtnCheck->setIcon(icon1);
        pBtnCheck->setIconSize(QSize(85, 65));
        pBtnCheck->setFlat(true);
        pBtnSelect = new QPushButton(centralWidget);
        pBtnSelect->setObjectName(QStringLiteral("pBtnSelect"));
        pBtnSelect->setGeometry(QRect(430, 550, 241, 81));
        pBtnSelect->setFont(font);
        pBtnSelect->setStyleSheet(QStringLiteral("background-image: url(:/Resources/Images/btn.png);broder-radius:10px;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Images/carDenji.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBtnSelect->setIcon(icon2);
        pBtnSelect->setIconSize(QSize(85, 65));
        pBtnSelect->setFlat(true);
        pBtnkTax_4 = new QPushButton(centralWidget);
        pBtnkTax_4->setObjectName(QStringLiteral("pBtnkTax_4"));
        pBtnkTax_4->setGeometry(QRect(1310, 550, 241, 81));
        pBtnkTax_4->setFont(font);
        pBtnkTax_4->setStyleSheet(QStringLiteral("background-image: url(:/Resources/Images/btn.png);broder-radius:10px;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Images/carMove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBtnkTax_4->setIcon(icon3);
        pBtnkTax_4->setIconSize(QSize(85, 65));
        pBtnkTax_4->setFlat(true);
        pBtnInsurance = new QPushButton(centralWidget);
        pBtnInsurance->setObjectName(QStringLiteral("pBtnInsurance"));
        pBtnInsurance->setGeometry(QRect(840, 750, 241, 81));
        pBtnInsurance->setFont(font);
        pBtnInsurance->setStyleSheet(QStringLiteral("background-image: url(:/Resources/Images/btn.png);broder-radius:10px;"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Images/carZUxiao.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBtnInsurance->setIcon(icon4);
        pBtnInsurance->setIconSize(QSize(85, 65));
        pBtnInsurance->setFlat(true);
        graphicsView_4 = new QGraphicsView(centralWidget);
        graphicsView_4->setObjectName(QStringLiteral("graphicsView_4"));
        graphicsView_4->setGeometry(QRect(320, 300, 301, 31));
        graphicsView_4->setStyleSheet(QString::fromUtf8("border:0px;\n"
"background-image: url(:/Resources/Images/\347\237\251\345\275\242 1\357\274\210\345\267\246\357\274\211.png);"));
        graphicsView_5 = new QGraphicsView(centralWidget);
        graphicsView_5->setObjectName(QStringLiteral("graphicsView_5"));
        graphicsView_5->setGeometry(QRect(950, 200, 481, 171));
        graphicsView_5->setStyleSheet(QString::fromUtf8("border:0px;\n"
"background-image: url(:/Resources/Images/\347\237\251\345\275\242 1 \357\274\210\345\217\263\357\274\211.png);"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(630, 280, 301, 71));
        graphicsView->setStyleSheet(QString::fromUtf8("border:0px;\n"
"background-image: url(:/Resources/Images/\350\275\246\347\256\241\344\270\232\345\212\241.png);"));
        pBtnHomepage = new QPushButton(centralWidget);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(1380, 20, 241, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(20);
        pBtnHomepage->setFont(font1);
        pBtnHomepage->setStyleSheet(QLatin1String("border:0px groove gray;border-radius:10px;\n"
"background-image: url(:/Resources/Images/btn.png);\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/Images/\344\270\273\351\241\265.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBtnHomepage->setIcon(icon5);
        pBtnHomepage->setIconSize(QSize(71, 92));
        pBtnHomepage->setFlat(true);
        VehicleManageClass->setCentralWidget(centralWidget);

        retranslateUi(VehicleManageClass);

        QMetaObject::connectSlotsByName(VehicleManageClass);
    } // setupUi

    void retranslateUi(QMainWindow *VehicleManageClass)
    {
        VehicleManageClass->setWindowTitle(QApplication::translate("VehicleManageClass", "VehicleManage", 0));
        pBtnMortgage->setText(QApplication::translate("VehicleManageClass", "\347\224\265\345\255\220\346\212\265\346\212\274", 0));
        pBtnCheck->setText(QApplication::translate("VehicleManageClass", "\350\277\234\347\250\213\350\275\246\346\243\200", 0));
        pBtnSelect->setText(QApplication::translate("VehicleManageClass", "\346\263\250\345\206\214\347\231\273\350\256\260", 0));
        pBtnkTax_4->setText(QApplication::translate("VehicleManageClass", "\350\275\254\347\247\273\347\231\273\350\256\260", 0));
        pBtnInsurance->setText(QApplication::translate("VehicleManageClass", "\346\263\250\351\224\200\347\231\273\350\256\260", 0));
        pBtnHomepage->setText(QApplication::translate("VehicleManageClass", "\344\270\273\351\241\265", 0));
    } // retranslateUi

};

namespace Ui {
    class VehicleManageClass: public Ui_VehicleManageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEMANAGE_H
