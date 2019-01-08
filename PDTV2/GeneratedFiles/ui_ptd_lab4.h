/********************************************************************************
** Form generated from reading UI file 'ptd_lab4.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PTD_LAB4_H
#define UI_PTD_LAB4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_PTD_lab4
{
public:
    QCustomPlot *customPlot;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Wykr1Button;
    QPushButton *Wykr2Button;
    QPushButton *Wykr3Button;
    QPushButton *Wykr4Button;
    QPushButton *Wykr5Button;
    QPushButton *Wykr6Button;
    QPushButton *Wykr7Button;

    void setupUi(QWidget *PTD_lab4)
    {
        if (PTD_lab4->objectName().isEmpty())
            PTD_lab4->setObjectName(QStringLiteral("PTD_lab4"));
        PTD_lab4->resize(1104, 763);
        customPlot = new QCustomPlot(PTD_lab4);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(20, 100, 1061, 651));
        widget = new QWidget(PTD_lab4);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(42, 22, 981, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Wykr1Button = new QPushButton(widget);
        Wykr1Button->setObjectName(QStringLiteral("Wykr1Button"));

        horizontalLayout->addWidget(Wykr1Button);

        Wykr2Button = new QPushButton(widget);
        Wykr2Button->setObjectName(QStringLiteral("Wykr2Button"));

        horizontalLayout->addWidget(Wykr2Button);

        Wykr3Button = new QPushButton(widget);
        Wykr3Button->setObjectName(QStringLiteral("Wykr3Button"));

        horizontalLayout->addWidget(Wykr3Button);

        Wykr4Button = new QPushButton(widget);
        Wykr4Button->setObjectName(QStringLiteral("Wykr4Button"));

        horizontalLayout->addWidget(Wykr4Button);

        Wykr5Button = new QPushButton(widget);
        Wykr5Button->setObjectName(QStringLiteral("Wykr5Button"));

        horizontalLayout->addWidget(Wykr5Button);

        Wykr6Button = new QPushButton(widget);
        Wykr6Button->setObjectName(QStringLiteral("Wykr6Button"));

        horizontalLayout->addWidget(Wykr6Button);

        Wykr7Button = new QPushButton(widget);
        Wykr7Button->setObjectName(QStringLiteral("Wykr7Button"));

        horizontalLayout->addWidget(Wykr7Button);


        retranslateUi(PTD_lab4);

        QMetaObject::connectSlotsByName(PTD_lab4);
    } // setupUi

    void retranslateUi(QWidget *PTD_lab4)
    {
        PTD_lab4->setWindowTitle(QApplication::translate("PTD_lab4", "PTD_lab4", nullptr));
        Wykr1Button->setText(QApplication::translate("PTD_lab4", "Wykres 1", nullptr));
        Wykr2Button->setText(QApplication::translate("PTD_lab4", "Wykres 2", nullptr));
        Wykr3Button->setText(QApplication::translate("PTD_lab4", "Wykres 3", nullptr));
        Wykr4Button->setText(QApplication::translate("PTD_lab4", "Wykres 4", nullptr));
        Wykr5Button->setText(QApplication::translate("PTD_lab4", "Wykres 5", nullptr));
        Wykr6Button->setText(QApplication::translate("PTD_lab4", "Wykres 6", nullptr));
        Wykr7Button->setText(QApplication::translate("PTD_lab4", "Wykres 7", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PTD_lab4: public Ui_PTD_lab4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PTD_LAB4_H
