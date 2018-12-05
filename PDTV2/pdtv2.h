#pragma once

#include <QtWidgets/QWidget>
#include "ui_pdtv2.h"

class PDTV2 : public QWidget
{
	Q_OBJECT

public:
	PDTV2(QWidget *parent = Q_NULLPTR);

private:
	Ui::PDTV2Class ui;
};
