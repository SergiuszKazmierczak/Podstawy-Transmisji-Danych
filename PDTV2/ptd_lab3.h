#pragma once

#include <QDialog>
#include "ui_ptd_lab3.h"
#include <complex>
#include <vector>

class PTD_lab3 : public QDialog, public Ui::PTD_lab3
{
	Q_OBJECT

public:
	PTD_lab3(QWidget *parent = Q_NULLPTR);
	~PTD_lab3();
	
	double signal(double i);
	void Wykres(QVector<double> x, QVector<double> y);
	long double max(QVector<double> x);
	long double min(QVector<double> x);
	double ModulacjaAmp(double t, double k, double fn);
	double ModulacjaFM(double t, double k, double fn);
	std::vector<std::complex<double>> fastFourier(QVector<double> in);
	double Widmo(std::complex<double> C);
	void WidmoShow(QVector<double> x, QVector<double> y, double fs);
private slots:
	void on_wykr1Button_clicked();
	void on_amp1Button_clicked();
	void on_amp2Button_clicked();
	void on_amp3Button_clicked();
	void on_fm1Button_clicked();
	void on_fm2Button_clicked();
	void on_fm3Button_clicked();
};
