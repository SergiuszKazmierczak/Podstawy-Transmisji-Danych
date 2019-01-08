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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PDTV2Class
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *lab1Button;
    QPushButton *lab2Button;
    QPushButton *lab3Button;
    QPushButton *lab4Button;

    void setupUi(QWidget *PDTV2Class)
    {
        if (PDTV2Class->objectName().isEmpty())
            PDTV2Class->setObjectName(QStringLiteral("PDTV2Class"));
        PDTV2Class->resize(957, 113);
        widget = new QWidget(PDTV2Class);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 20, 881, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lab1Button = new QPushButton(widget);
        lab1Button->setObjectName(QStringLiteral("lab1Button"));

        horizontalLayout->addWidget(lab1Button);

        lab2Button = new QPushButton(widget);
        lab2Button->setObjectName(QStringLiteral("lab2Button"));

        horizontalLayout->addWidget(lab2Button);

        lab3Button = new QPushButton(widget);
        lab3Button->setObjectName(QStringLiteral("lab3Button"));

        horizontalLayout->addWidget(lab3Button);

        lab4Button = new QPushButton(widget);
        lab4Button->setObjectName(QStringLiteral("lab4Button"));

        horizontalLayout->addWidget(lab4Button);


        retranslateUi(PDTV2Class);

        QMetaObject::connectSlotsByName(PDTV2Class);
    } // setupUi

    void retranslateUi(QWidget *PDTV2Class)
    {
        PDTV2Class->setWindowTitle(QApplication::translate("PDTV2Class", "PDTV2", nullptr));
        lab1Button->setText(QApplication::translate("PDTV2Class", "LAB1", nullptr));
        lab2Button->setText(QApplication::translate("PDTV2Class", "LAB2", nullptr));
        lab3Button->setText(QApplication::translate("PDTV2Class", "LAB3", nullptr));
        lab4Button->setText(QApplication::translate("PDTV2Class", "LAB4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PDTV2Class: public Ui_PDTV2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PDTV2_H
