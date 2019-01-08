/********************************************************************************
** Form generated from reading UI file 'ptd_lab2.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PTD_LAB2_H
#define UI_PTD_LAB2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_PTD_lab2
{
public:
    QCustomPlot *customPlot;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Wyk1LButton;
    QPushButton *Wyk2LButton;
    QPushButton *Wyk3LButton;
    QPushButton *Wyk4LButton;
    QPushButton *Wyk5LButton;
    QPushButton *Wyk6LButton;
    QPushButton *Wyk7LButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Wyk1LogButton;
    QPushButton *Wyk2LogButton;
    QPushButton *Wyk3LogButton;
    QPushButton *Wyk4LogButton;
    QPushButton *Wyk5LogButton;
    QPushButton *Wyk6LogButton;
    QPushButton *Wyk7LogButton;
    QLabel *label;

    void setupUi(QDialog *PTD_lab2)
    {
        if (PTD_lab2->objectName().isEmpty())
            PTD_lab2->setObjectName(QStringLiteral("PTD_lab2"));
        PTD_lab2->resize(995, 575);
        customPlot = new QCustomPlot(PTD_lab2);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(90, 50, 831, 441));
        layoutWidget = new QWidget(PTD_lab2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 971, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Wyk1LButton = new QPushButton(layoutWidget);
        Wyk1LButton->setObjectName(QStringLiteral("Wyk1LButton"));

        horizontalLayout->addWidget(Wyk1LButton);

        Wyk2LButton = new QPushButton(layoutWidget);
        Wyk2LButton->setObjectName(QStringLiteral("Wyk2LButton"));

        horizontalLayout->addWidget(Wyk2LButton);

        Wyk3LButton = new QPushButton(layoutWidget);
        Wyk3LButton->setObjectName(QStringLiteral("Wyk3LButton"));

        horizontalLayout->addWidget(Wyk3LButton);

        Wyk4LButton = new QPushButton(layoutWidget);
        Wyk4LButton->setObjectName(QStringLiteral("Wyk4LButton"));

        horizontalLayout->addWidget(Wyk4LButton);

        Wyk5LButton = new QPushButton(layoutWidget);
        Wyk5LButton->setObjectName(QStringLiteral("Wyk5LButton"));

        horizontalLayout->addWidget(Wyk5LButton);

        Wyk6LButton = new QPushButton(layoutWidget);
        Wyk6LButton->setObjectName(QStringLiteral("Wyk6LButton"));

        horizontalLayout->addWidget(Wyk6LButton);

        Wyk7LButton = new QPushButton(layoutWidget);
        Wyk7LButton->setObjectName(QStringLiteral("Wyk7LButton"));

        horizontalLayout->addWidget(Wyk7LButton);

        layoutWidget1 = new QWidget(PTD_lab2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 540, 971, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Wyk1LogButton = new QPushButton(layoutWidget1);
        Wyk1LogButton->setObjectName(QStringLiteral("Wyk1LogButton"));

        horizontalLayout_2->addWidget(Wyk1LogButton);

        Wyk2LogButton = new QPushButton(layoutWidget1);
        Wyk2LogButton->setObjectName(QStringLiteral("Wyk2LogButton"));

        horizontalLayout_2->addWidget(Wyk2LogButton);

        Wyk3LogButton = new QPushButton(layoutWidget1);
        Wyk3LogButton->setObjectName(QStringLiteral("Wyk3LogButton"));

        horizontalLayout_2->addWidget(Wyk3LogButton);

        Wyk4LogButton = new QPushButton(layoutWidget1);
        Wyk4LogButton->setObjectName(QStringLiteral("Wyk4LogButton"));

        horizontalLayout_2->addWidget(Wyk4LogButton);

        Wyk5LogButton = new QPushButton(layoutWidget1);
        Wyk5LogButton->setObjectName(QStringLiteral("Wyk5LogButton"));

        horizontalLayout_2->addWidget(Wyk5LogButton);

        Wyk6LogButton = new QPushButton(layoutWidget1);
        Wyk6LogButton->setObjectName(QStringLiteral("Wyk6LogButton"));

        horizontalLayout_2->addWidget(Wyk6LogButton);

        Wyk7LogButton = new QPushButton(layoutWidget1);
        Wyk7LogButton->setObjectName(QStringLiteral("Wyk7LogButton"));

        horizontalLayout_2->addWidget(Wyk7LogButton);

        label = new QLabel(PTD_lab2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(430, 500, 91, 31));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        retranslateUi(PTD_lab2);

        QMetaObject::connectSlotsByName(PTD_lab2);
    } // setupUi

    void retranslateUi(QDialog *PTD_lab2)
    {
        PTD_lab2->setWindowTitle(QApplication::translate("PTD_lab2", "PTD_lab2", nullptr));
        Wyk1LButton->setText(QApplication::translate("PTD_lab2", "Wykres 1 liniowy", nullptr));
        Wyk2LButton->setText(QApplication::translate("PTD_lab2", "Wykres 2 liniowy", nullptr));
        Wyk3LButton->setText(QApplication::translate("PTD_lab2", "Wykres 3 liniowy", nullptr));
        Wyk4LButton->setText(QApplication::translate("PTD_lab2", "Wykres 4 liniowy", nullptr));
        Wyk5LButton->setText(QApplication::translate("PTD_lab2", "Wykres 5 liniowy", nullptr));
        Wyk6LButton->setText(QApplication::translate("PTD_lab2", "Wykres 6 liniowy", nullptr));
        Wyk7LButton->setText(QApplication::translate("PTD_lab2", "Wykres 7 liniowy", nullptr));
        Wyk1LogButton->setText(QApplication::translate("PTD_lab2", "Wykres 1 logarytm", nullptr));
        Wyk2LogButton->setText(QApplication::translate("PTD_lab2", "Wykres 2 logarytm", nullptr));
        Wyk3LogButton->setText(QApplication::translate("PTD_lab2", "Wykres 3 logarytm", nullptr));
        Wyk4LogButton->setText(QApplication::translate("PTD_lab2", "Wykres 4 logarytm", nullptr));
        Wyk5LogButton->setText(QApplication::translate("PTD_lab2", "Wykres 5 logarytm", nullptr));
        Wyk6LogButton->setText(QApplication::translate("PTD_lab2", "Wykres 6 logarytm", nullptr));
        Wyk7LogButton->setText(QApplication::translate("PTD_lab2", "Wykres 7 logarytm", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PTD_lab2: public Ui_PTD_lab2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PTD_LAB2_H
