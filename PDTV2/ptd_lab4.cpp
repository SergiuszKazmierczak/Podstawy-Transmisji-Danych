#include "stdafx.h"
#include "ptd_lab4.h"
#include "ptd_lab3.h"


PTD_lab4::PTD_lab4(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
}

PTD_lab4::~PTD_lab4()
{
}




double PTD_lab4::signal(double i, double fm)
{
	return 2 * sin(2. * std::_Pi * i * fm);
}

double PTD_lab4::signalPLUS_PI(double i, double fm)
{
	return 2 * sin(2. * std::_Pi * i * fm+std::_Pi);
}

void PTD_lab4::on_Wykr1Button_clicked()
{
	double T = 4;
	double fs = 400; //hz
	int n = T * fs;
	
	QVector<int> m(n);
	QVector<double> x(n), y(n), z(n);
	double t = 0;
	for (int i = 0; i < n; i++)
	{
		x[i] = ((static_cast<double>(i)) / fs);
		y[i] = signal(x[i], 2.0);
	}
	Wykres(x, y);

}
//FSK
void PTD_lab4::on_Wykr2Button_clicked()
{
	double T = 4;
	double fs = 400; //hz
	int n = T * fs;
	int ilBit = 10;
	QVector<int> m(n);
	QVector<double> x(n), y(n), z(n);
	for (int i = 0; i < n; i++)
		x[i] = ((static_cast<double>(i)) / fs);
	double t = 0;
	int m1[10] = { 1,1,1,0,0,0,1,1,0,0 };
	int TB = (T/ ilBit) * fs;
	double N = 2;
	double fn1 = (static_cast<double>(N) + 1) / static_cast<double>(TB);
	double fn2 = (static_cast<double>(N) + 2) / static_cast<double>(TB);
	int j = 0;
	int h = 0;
	for (int i = 0; i < n; i++)
	{
		if (j % 10 == 0)
			j = 0;
		if (h == TB)
		{
			h = 0;
			j++;
		}
		if(m1[j]==0)
		{
			y[i] = signal(x[i], fn1);
		}
		else if(m1[j]==1)
		{
			y[i] = signal(x[i], fn2);
		}
		x[i] = ((static_cast<double>(i)) / fs);
		
		h++;
	}
	Wykres(x, y);

}
//ASK
void PTD_lab4::on_Wykr3Button_clicked()
{
	double T = 4;
	double fs = 400; //hz
	int n = T * fs;
	int ilBit = 10;
	QVector<int> m(n);
	QVector<double> x(n), y(n), z(n);
	for (int i = 0; i < n; i++)
		x[i] = ((static_cast<double>(i)) / fs);
	double t = 0;
	int m1[10] = { 1,1,1,0,0,0,1,1,0,0 };
	int TB = (T / ilBit) * fs;
	double N = fs * (1. / TB);
	double A1 = 0.34, A2=22.31;
	int j = 0;
	int h = 0;
	for (int i = 0; i < n; i++)
	{
		if (j % 10 == 0)
			j = 0;
		if (h == TB)
		{
			h = 0;
			j++;
		}
		if (m1[j] == 0)
		{
			y[i] = A1*signal(x[i], 2);
		}
		else if (m1[j] == 1)
		{
			y[i] = A2*signal(x[i], 2);
		}
		x[i] = ((static_cast<double>(i)) / fs);

		h++;
	}
	Wykres(x, y);

}
//PSK
void PTD_lab4::on_Wykr4Button_clicked()
{
	double T = 4;
	double fs = 400; //hz
	int n = T * fs;
	int ilBit = 10;
	QVector<int> m(n);
	QVector<double> x(n), y(n), z(n);
	for (int i = 0; i < n; i++)
		x[i] = ((static_cast<double>(i)) / fs);
	double t = 0;
	int m1[10] = { 1,1,1,0,0,0,1,1,0,0 };
	int TB = (T / ilBit) * fs;
	double N = fs * (1. / TB);
	double A1 = 0.34, A2 = 22.31;
	int j = 0;
	int h = 0;
	for (int i = 0; i < n; i++)
	{
		if (j % 10 == 0)
			j = 0;
		if (h == TB)
		{
			h = 0;
			j++;
		}
		if (m1[j] == 0)
		{
			y[i] = signal(x[i], 2);
		}
		else if (m1[j] == 1)
		{
			y[i] = signalPLUS_PI(x[i], 2);
		}
		x[i] = ((static_cast<double>(i)) / fs);

		h++;
	}
	Wykres(x, y);

}

void PTD_lab4::on_Wykr5Button_clicked()
{
	double T = 4;
	double fs = 400; //hz
	int n = T * fs;
	int ilBit = 10;
	QVector<int> m(n);
	QVector<double> x(n), y(n), z(n);
	for (int i = 0; i < n; i++)
		x[i] = ((static_cast<double>(i)) / fs);
	double t = 0;
	int m1[10] = { 1,1,1,0,0,0,1,1,0,0 };
	int TB = (T / ilBit) * fs;
	double N = 2;
	double fn1 = (static_cast<double>(N) + 1) / static_cast<double>(TB);
	double fn2 = (static_cast<double>(N) + 2) / static_cast<double>(TB);
	int j = 0;
	int h = 0;
	for (int i = 0; i < n; i++)
	{
		if (j % 10 == 0)
			j = 0;
		if (h == TB)
		{
			h = 0;
			j++;
		}
		if (m1[j] == 0)
		{
			y[i] = signal(x[i], fn1);
		}
		else if (m1[j] == 1)
		{
			y[i] = signal(x[i], fn2);
		}
		x[i] = ((static_cast<double>(i)) / fs);

		h++;
	}
	std::vector<std::complex<double>> X;
	PTD_lab3 obj;
	X = obj.fastFourier(y);


	//PKT 2
	QVector<double> M(X.size() / 2 + 1), Md(X.size() / 2 + 1), FK(X.size() / 2 + 1);
	for (int i = 0; i < X.size() / 2 + 1; i++)
	{
		M[i] = obj.Widmo(X[i]);
		Md[i] = 10. * log10(M[i]);
		FK[i] = (i*fs / (X.size()));
	}
	WykresLog(FK, M);

}
//ASK
void PTD_lab4::on_Wykr6Button_clicked()
{
	double T = 4;
	double fs = 400; //hz
	int n = T * fs;
	int ilBit = 10;
	QVector<int> m(n);
	QVector<double> x(n), y(n), z(n);
	for (int i = 0; i < n; i++)
		x[i] = ((static_cast<double>(i)) / fs);
	double t = 0;
	int m1[10] = { 1,1,1,0,0,0,1,1,0,0 };
	int TB = (T / ilBit) * fs;
	double N = fs * (1. / TB);
	double A1 = 0.34, A2 = 22.31;
	int j = 0;
	int h = 0;
	for (int i = 0; i < n; i++)
	{
		if (j % 10 == 0)
			j = 0;
		if (h == TB)
		{
			h = 0;
			j++;
		}
		if (m1[j] == 0)
		{
			y[i] = A1 * signal(x[i], 2);
		}
		else if (m1[j] == 1)
		{
			y[i] = A2 * signal(x[i], 2);
		}
		x[i] = ((static_cast<double>(i)) / fs);

		h++;
	}
	std::vector<std::complex<double>> X;
	PTD_lab3 obj;
	X = obj.fastFourier(y);


	//PKT 2
	QVector<double> M(X.size() / 2 + 1), Md(X.size() / 2 + 1), FK(X.size() / 2 + 1);
	for (int i = 0; i < X.size() / 2 + 1; i++)
	{
		M[i] = obj.Widmo(X[i]);
		Md[i] = 10. * log10(M[i]);
		FK[i] = (i*fs / (X.size()));
	}
	WykresLog(FK, M);

}
//PSK
void PTD_lab4::on_Wykr7Button_clicked()
{
	double T = 4;
	double fs = 400; //hz
	int n = T * fs;
	int ilBit = 10;
	QVector<int> m(n);
	QVector<double> x(n), y(n), z(n);
	for (int i = 0; i < n; i++)
		x[i] = ((static_cast<double>(i)) / fs);
	double t = 0;
	int m1[10] = { 1,1,1,0,0,0,1,1,0,0 };
	int TB = (T / ilBit) * fs;
	double N = fs * (1. / TB);
	double A1 = 0.34, A2 = 22.31;
	int j = 0;
	int h = 0;
	for (int i = 0; i < n; i++)
	{
		if (j % 10 == 0)
			j = 0;
		if (h == TB)
		{
			h = 0;
			j++;
		}
		if (m1[j] == 0)
		{
			y[i] = signal(x[i], 2);
		}
		else if (m1[j] == 1)
		{
			y[i] = signalPLUS_PI(x[i], 2);
		}
		x[i] = ((static_cast<double>(i)) / fs);

		h++;
	}
	std::vector<std::complex<double>> X;
	PTD_lab3 obj;
	X = obj.fastFourier(y);


	//PKT 2
	QVector<double> M(X.size() / 2 + 1), Md(X.size() / 2 + 1), FK(X.size() / 2 + 1);
	for (int i = 0; i < X.size() / 2 + 1; i++)
	{
		M[i] = obj.Widmo(X[i]);
		Md[i] = 10. * log10(M[i]);
		FK[i] = (i*fs / (X.size()));
	}
	WykresLog(FK, M);

}
void PTD_lab4::Wykres(QVector<double> x, QVector<double> y)
{
	this->customPlot->xAxis->setScaleType(QCPAxis::stLinear);
	this->customPlot->xAxis->setRange(min(x), max(x) + 0.001*max(x));
	this->customPlot->yAxis->setRange(min(y) - 10, max(y) + 10);
	this->customPlot->addGraph();
	this->customPlot->graph(0)->setData(x, y);
	this->customPlot->xAxis->setLabel("x");
	this->customPlot->yAxis->setLabel("y");
	//this->customPlot->rescaleAxes();
	this->customPlot->replot();
}

void PTD_lab4::WykresLog(QVector<double> x, QVector<double> y)
{
	this->customPlot->xAxis->setScaleType(QCPAxis::stLogarithmic);
	this->customPlot->xAxis->setRange(min(x), max(x) + 0.001*max(x));
	this->customPlot->yAxis->setRange(min(y) - 10, max(y) + 10);
	this->customPlot->addGraph();
	this->customPlot->graph(0)->setData(x, y);
	this->customPlot->xAxis->setLabel("x");
	this->customPlot->yAxis->setLabel("y");
	//this->customPlot->rescaleAxes();
	this->customPlot->replot();
}

long double PTD_lab4::max(QVector<double> x)
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

long double PTD_lab4::min(QVector<double> x)
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