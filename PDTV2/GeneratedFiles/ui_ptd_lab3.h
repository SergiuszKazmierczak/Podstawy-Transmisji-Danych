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
#include <QtWidgets/QPushButton>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_PTD_lab3
{
public:
    QPushButton *wykr1Button;
    QCustomPlot *customPlot;
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
        wykr1Button = new QPushButton(PTD_lab3);
        wykr1Button->setObjectName(QStringLiteral("wykr1Button"));
        wykr1Button->setGeometry(QRect(20, 10, 93, 28));
        customPlot = new QCustomPlot(PTD_lab3);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(60, 70, 961, 451));
        amp1Button = new QPushButton(PTD_lab3);
        amp1Button->setObjectName(QStringLiteral("amp1Button"));
        amp1Button->setGeometry(QRect(120, 10, 93, 28));
        amp2Button = new QPushButton(PTD_lab3);
        amp2Button->setObjectName(QStringLiteral("amp2Button"));
        amp2Button->setGeometry(QRect(220, 10, 93, 28));
        amp3Button = new QPushButton(PTD_lab3);
        amp3Button->setObjectName(QStringLiteral("amp3Button"));
        amp3Button->setGeometry(QRect(320, 10, 93, 28));
        fm1Button = new QPushButton(PTD_lab3);
        fm1Button->setObjectName(QStringLiteral("fm1Button"));
        fm1Button->setGeometry(QRect(420, 10, 93, 28));
        fm2Button = new QPushButton(PTD_lab3);
        fm2Button->setObjectName(QStringLiteral("fm2Button"));
        fm2Button->setGeometry(QRect(520, 10, 93, 28));
        fm3Button = new QPushButton(PTD_lab3);
        fm3Button->setObjectName(QStringLiteral("fm3Button"));
        fm3Button->setGeometry(QRect(620, 10, 93, 28));

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
