#include "stdafx.h"
#include "pdtv2.h"
#include "ptd_lab1.h"
#include "PTD_lab2.h"
#include "ptd_lab3.h"
#include "ptd_lab4.h"

PDTV2::PDTV2(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}
void PDTV2::on_lab1Button_clicked()
{
	PTD_lab1 lab1(this);
	lab1.exec();
}

void PDTV2::on_lab2Button_clicked()
{
	PTD_lab2 lab2(this);
	lab2.exec();
}

void PDTV2::on_lab3Button_clicked()
{
	PTD_lab3 lab3(this);
	lab3.exec();
}

void PDTV2::on_lab4Button_clicked()
{
	PTD_lab4 lab4(this);
	lab4.exec();
}
