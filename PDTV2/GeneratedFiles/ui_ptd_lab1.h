/********************************************************************************
** Form generated from reading UI file 'ptd_lab1.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PTD_LAB1_H
#define UI_PTD_LAB1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_PTD_lab1
{
public:
    QCustomPlot *customPlot;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *zad1Button;
    QPushButton *zad2aButton;
    QPushButton *zad2bButton;
    QPushButton *zad3Button;
    QPushButton *zad4aButton;
    QPushButton *zad4bButton;
    QPushButton *zad4cButton;

    void setupUi(QDialog *PTD_lab1)
    {
        if (PTD_lab1->objectName().isEmpty())
            PTD_lab1->setObjectName(QStringLiteral("PTD_lab1"));
        PTD_lab1->resize(905, 700);
        customPlot = new QCustomPlot(PTD_lab1);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(70, 169, 731, 451));
        widget = new QWidget(PTD_lab1);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 881, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        zad1Button = new QPushButton(widget);
        zad1Button->setObjectName(QStringLiteral("zad1Button"));

        horizontalLayout->addWidget(zad1Button);

        zad2aButton = new QPushButton(widget);
        zad2aButton->setObjectName(QStringLiteral("zad2aButton"));

        horizontalLayout->addWidget(zad2aButton);

        zad2bButton = new QPushButton(widget);
        zad2bButton->setObjectName(QStringLiteral("zad2bButton"));

        horizontalLayout->addWidget(zad2bButton);

        zad3Button = new QPushButton(widget);
        zad3Button->setObjectName(QStringLiteral("zad3Button"));

        horizontalLayout->addWidget(zad3Button);

        zad4aButton = new QPushButton(widget);
        zad4aButton->setObjectName(QStringLiteral("zad4aButton"));

        horizontalLayout->addWidget(zad4aButton);

        zad4bButton = new QPushButton(widget);
        zad4bButton->setObjectName(QStringLiteral("zad4bButton"));

        horizontalLayout->addWidget(zad4bButton);

        zad4cButton = new QPushButton(widget);
        zad4cButton->setObjectName(QStringLiteral("zad4cButton"));

        horizontalLayout->addWidget(zad4cButton);


        retranslateUi(PTD_lab1);

        QMetaObject::connectSlotsByName(PTD_lab1);
    } // setupUi

    void retranslateUi(QDialog *PTD_lab1)
    {
        PTD_lab1->setWindowTitle(QApplication::translate("PTD_lab1", "PTD_lab1", nullptr));
        zad1Button->setText(QApplication::translate("PTD_lab1", "zad1", nullptr));
        zad2aButton->setText(QApplication::translate("PTD_lab1", "zad2a", nullptr));
        zad2bButton->setText(QApplication::translate("PTD_lab1", "zad2b", nullptr));
        zad3Button->setText(QApplication::translate("PTD_lab1", "zad3", nullptr));
        zad4aButton->setText(QApplication::translate("PTD_lab1", "zad4a", nullptr));
        zad4bButton->setText(QApplication::translate("PTD_lab1", "zad4b", nullptr));
        zad4cButton->setText(QApplication::translate("PTD_lab1", "zad4c", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PTD_lab1: public Ui_PTD_lab1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PTD_LAB1_H
