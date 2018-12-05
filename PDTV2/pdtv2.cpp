#include "stdafx.h"
#include "pdtv2.h"
#include "ptd_lab1.h"

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