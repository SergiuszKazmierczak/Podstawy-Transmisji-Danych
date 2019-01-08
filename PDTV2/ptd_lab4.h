#pragma once

#include "stdafx.h"
#include <QWidget>
#include "ui_ptd_lab4.h"

class PTD_lab4 : public QDialog, public Ui::PTD_lab4
{
	Q_OBJECT

public:
	PTD_lab4(QWidget *parent = Q_NULLPTR);
	~PTD_lab4();
	double signal(double i, double fs);
	double signalPLUS_PI(double i, double fm);
	long double max(QVector<double> x);
	long double min(QVector<double> x);
	void Wykres(QVector<double> x, QVector<double> y);
	void WykresLog(QVector<double> x, QVector<double> y);
private slots:
	void on_Wykr1Button_clicked();
	void on_Wykr2Button_clicked();
	void on_Wykr3Button_clicked();
	void on_Wykr4Button_clicked();
	void on_Wykr5Button_clicked();
	void on_Wykr6Button_clicked();
	void on_Wykr7Button_clicked();
};
