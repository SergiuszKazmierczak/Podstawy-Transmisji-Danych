/********************************************************************************
** Form generated from reading UI file 'ptd_lab3.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PTD_LAB3_H
#define UI_PTD_LAB3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_PTD_lab3
{
public:
    QCustomPlot *customPlot;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *wykr1Button;
    QPushButton *amp1Button;
    QPushButton *amp2Button;
    QPushButton *amp3Button;
    QPushButton *fm1Button;
    QPushButton *fm2Button;
    QPushButton *fm3Button;

    void setupUi(QDialog *PTD_lab3)
    {
        if (PTD_lab3->objectName().isEmpty())
            PTD_lab3->setObjectName(QStringLiteral("PTD_lab3"));
        PTD_lab3->resize(1172, 729);
        customPlot = new QCustomPlot(PTD_lab3);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(20, 50, 1101, 651));
        widget = new QWidget(PTD_lab3);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 1101, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        wykr1Button = new QPushButton(widget);
        wykr1Button->setObjectName(QStringLiteral("wykr1Button"));

        horizontalLayout->addWidget(wykr1Button);

        amp1Button = new QPushButton(widget);
        amp1Button->setObjectName(QStringLiteral("amp1Button"));

        horizontalLayout->addWidget(amp1Button);

        amp2Button = new QPushButton(widget);
        amp2Button->setObjectName(QStringLiteral("amp2Button"));

        horizontalLayout->addWidget(amp2Button);

        amp3Button = new QPushButton(widget);
        amp3Button->setObjectName(QStringLiteral("amp3Button"));

        horizontalLayout->addWidget(amp3Button);

        fm1Button = new QPushButton(widget);
        fm1Button->setObjectName(QStringLiteral("fm1Button"));

        horizontalLayout->addWidget(fm1Button);

        fm2Button = new QPushButton(widget);
        fm2Button->setObjectName(QStringLiteral("fm2Button"));

        horizontalLayout->addWidget(fm2Button);

        fm3Button = new QPushButton(widget);
        fm3Button->setObjectName(QStringLiteral("fm3Button"));

        horizontalLayout->addWidget(fm3Button);


        retranslateUi(PTD_lab3);

        QMetaObject::connectSlotsByName(PTD_lab3);
    } // setupUi

    void retranslateUi(QDialog *PTD_lab3)
    {
        PTD_lab3->setWindowTitle(QApplication::translate("PTD_lab3", "PTD_lab3", nullptr));
        wykr1Button->setText(QApplication::translate("PTD_lab3", "Wykres 1", nullptr));
        amp1Button->setText(QApplication::translate("PTD_lab3", "AM 1", nullptr));
        amp2Button->setText(QApplication::translate("PTD_lab3", "AM 2", nullptr));
        amp3Button->setText(QApplication::translate("PTD_lab3", "AM 3", nullptr));
        fm1Button->setText(QApplication::translate("PTD_lab3", "FM 1", nullptr));
        fm2Button->setText(QApplication::translate("PTD_lab3", "FM 2", nullptr));
        fm3Button->setText(QApplication::translate("PTD_lab3", "FM 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PTD_lab3: public Ui_PTD_lab3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PTD_LAB3_H
