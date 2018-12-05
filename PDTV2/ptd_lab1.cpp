#include "stdafx.h"
#include "ptd_lab1.h"
#include "Functions.h"
using namespace std;

PTD_lab1::PTD_lab1(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
}

PTD_lab1::~PTD_lab1()
{
}

void PTD_lab1::on_zad1Button_clicked()
{
	double fs = 220.0;
	double T = 3.0;
	int n = static_cast<int>(T * fs);
	QVector<double> x(n), y(n);
	for (int i = 0; i < n; i++)
	{
		x[i] = static_cast<double>(i) / fs;
		y[i] = fun.fx(i);
	}
	Wykres(x, y);

}

void PTD_lab1::on_zad2aButton_clicked()
{
	double fs = 220.0;
	double T = 3.0;
	int n = static_cast<int>(T * fs);
	QVector<double> x(n), y(n);
	for (int i = 1; i < n; i++)
	{
		x[i] = static_cast<double>(i) / fs;
		y[i] = fun.fz(i);
	}
	Wykres(x, y);
}

void PTD_lab1::on_zad2bButton_clicked()
{
	double fs = 220.0;
	double T = 3.0;
	int n = static_cast<int>(T * fs);
	QVector<double> x(n), y(n);
	for (int i = 1; i < n; i++)
	{
		x[i] = static_cast<double>(i) / fs;
		y[i] = fun.fv(i);
	}
	Wykres(x, y);
	
}

void PTD_lab1::on_zad3Button_clicked()
{
	double fs = 2.3 * 1000;
	double phi = 3. / 4.*_Pi;
	double T = 1.8;
	double inc = 1.0 / fs;
	int size = static_cast<int>(T * fs);
	QVector<double> x(size), y(size);
	double  t = 0;
	for (int i = 0; i < size; i++)
	{
		x[i] = t;
		y[i] = fun.fu(t);
		t += inc;
	}
	Wykres(x, y);
}

void PTD_lab1::on_zad4aButton_clicked()
{
	zadanie4(1);
}
void PTD_lab1::on_zad4bButton_clicked()
{
	zadanie4(5);
}
void PTD_lab1::on_zad4cButton_clicked()
{
	zadanie4(15);
}

long double PTD_lab1::max(QVector<double> x)
{
	long double max = static_cast<double>(MININT);
	for (int i = 0; i < x.length(); i++)
	{
		if (x[i] > max)
		{
			max = x[i];
		}
	}
	return max;
}

long double PTD_lab1::min(QVector<double> x)
{
	long double min = static_cast<double>(MAXINT);
	for (int i = 0; i < x.length(); i++)
	{
		if (x[i] < min)
		{
			min = x[i];
		}
	}
	return min;
}

void PTD_lab1::zadanie4(int H)
{
	int T = 6;
	int fs = 12 * 1000;
	int probki = T * fs;
	long double inc = 1. / fs;
	double t = 0;
	QVector<double> x(probki), y(probki);
	for (int i = 0; i < probki; i++)
	{
		x[i] = t;
		y[i] = fun.fg(t, H);
		t += inc;
	}
	Wykres(x, y);

}

void PTD_lab1::Wykres(QVector<double> x, QVector<double> y)
{
	this->customPlot->xAxis->setRange(min(x), max(x) + 0.1*max(x));
	this->customPlot->yAxis->setRange(min(y) - 10, max(y) + 10);
	this->customPlot->addGraph();
	this->customPlot->graph(0)->setData(x, y);
	this->customPlot->xAxis->setLabel("x");
	this->customPlot->yAxis->setLabel("y");
	this->customPlot->rescaleAxes();
	this->customPlot->replot();
}
