/********************************************************************************
** Form generated from reading UI file 'pdtv2.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PDTV2_H
#define UI_PDTV2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PDTV2Class
{
public:
    QPushButton *lab1Button;
    QPushButton *lab2Button;
    QPushButton *lab3Button;

    void setupUi(QWidget *PDTV2Class)
    {
        if (PDTV2Class->objectName().isEmpty())
            PDTV2Class->setObjectName(QStringLiteral("PDTV2Class"));
        PDTV2Class->resize(957, 113);
        lab1Button = new QPushButton(PDTV2Class);
        lab1Button->setObjectName(QStringLiteral("lab1Button"));
        lab1Button->setGeometry(QRect(40, 20, 93, 28));
        lab2Button = new QPushButton(PDTV2Class);
        lab2Button->setObjectName(QStringLiteral("lab2Button"));
        lab2Button->setGeometry(QRect(140, 20, 93, 28));
        lab3Button = new QPushButton(PDTV2Class);
        lab3Button->setObjectName(QStringLiteral("lab3Button"));
        lab3Button->setGeometry(QRect(240, 20, 93, 28));

        retranslateUi(PDTV2Class);

        QMetaObject::connectSlotsByName(PDTV2Class);
    } // setupUi

    void retranslateUi(QWidget *PDTV2Class)
    {
        PDTV2Class->setWindowTitle(QApplication::translate("PDTV2Class", "PDTV2", nullptr));
        lab1Button->setText(QApplication::translate("PDTV2Class", "LAB1", nullptr));
        lab2Button->setText(QApplication::translate("PDTV2Class", "LAB2", nullptr));
        lab3Button->setText(QApplication::translate("PDTV2Class", "LAB3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PDTV2Class: public Ui_PDTV2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PDTV2_H
