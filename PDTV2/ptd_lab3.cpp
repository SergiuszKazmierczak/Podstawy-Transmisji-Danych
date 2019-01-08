#include "stdafx.h"
#include "ptd_lab3.h"
#include  "fftw/fftw3.h"
#include <complex>

PTD_lab3::PTD_lab3(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
}

PTD_lab3::~PTD_lab3()
{
}




void PTD_lab3::on_wykr1Button_clicked()
{
	double T = 4;
	double fs = 400; //hz
	int n = T * fs;
	QVector<double> x(n), y(n), z(n);
	double t = 0;
	for (int i = 0; i < n; i++)
	{
		x[i] = ((static_cast<double>(i)) / fs);
		y[i] = signal(x[i]);	
	}

	Wykres(x, y);
}

void PTD_lab3::on_amp1Button_clicked()
{
	double T = 4;
	double fs = 400; //hz
	int n = T * fs;
	double Ka = 0.64;
	double fn = 20;
	QVector<double> x(n), y(n), z(n);
	for (int i = 0; i < n; i++)
	{
		x[i] = ((static_cast<double>(i)) / fs);
		y[i] = ModulacjaAmp(x[i], Ka, fn);
	}
	//Wykres(x, y);
	WidmoShow(x, y, fs);

}

void PTD_lab3::on_amp2Button_clicked()
{
	double T = 4;
	double fs = 400; //hz
	int n = T * fs;
	double Ka = 7.32;
	double fn = 20;
	QVector<double> x(n), y(n), z(n);
	for (int i = 0; i < n; i++)
	{
		x[i] = ((static_cast<double>(i)) / fs);
		y[i] = ModulacjaAmp(x[i], Ka, fn);
	}
	WidmoShow(x, y, fs);
}

void PTD_lab3::on_amp3Button_clicked()
{
	double T = 4;
	double fs = 400; //hz
	int n = T * fs;
	double Ka = 54.67;
	double fn = 20;
	QVector<double> x(n), y(n), z(n);
	for (int i = 0; i < n; i++)
	{
		x[i] = ((static_cast<double>(i)) / fs);
		y[i] = ModulacjaAmp(x[i], Ka, fn);
	}
	WidmoShow(x, y, fs);
}

void PTD_lab3::on_fm1Button_clicked()
{
	double T = 4;
	double fs = 400; //hz
	double fm = 2;
	int n = T * fs;
	double Ka = -0.34;
	double fn = 20;
	QVector<double> x(n), y(n), z(n);
	for (int i = 0; i < n; i++)
	{
		x[i] = ((static_cast<double>(i)) / fs);
		y[i] = ModulacjaFM(x[i], Ka, fn);
	}
	std::vector<std::complex<double>> X;
	WidmoShow(x, y, fs);
}

void PTD_lab3::on_fm2Button_clicked()
{
	double T = 4;
	double fs = 400; //hz
	int n = T * fs;
	double Ka = 1.41;
	double fn = 20;
	QVector<double> x(n), y(n), z(n);
	for (int i = 0; i < n; i++)
	{
		x[i] = ((static_cast<double>(i)) / fs);
		y[i] = ModulacjaFM(x[i], Ka, fn);
	}
	WidmoShow(x, y, fs);
}


void PTD_lab3::on_fm3Button_clicked()
{
	double T = 4;
	double fs = 400; //hz
	int n = T * fs;
	double Ka = 54.67;
	double fn = 20;
	QVector<double> x(n), y(n), z(n);
	double t = 0;
	for (int i = 0; i < n; i++)
	{
		x[i] = ((static_cast<double>(i)) / fs);
		y[i] = ModulacjaFM(x[i], Ka, fn);
	}
	WidmoShow(x, y, fs);
}




void PTD_lab3::Wykres(QVector<double> x, QVector<double> y)
{
	//this->customPlot->xAxis->setScaleType(QCPAxis::stLogarithmic);
	this->customPlot->xAxis->setRange(min(x), max(x) + 0.1*max(x));
	this->customPlot->yAxis->setRange(min(y) - 10, max(y) + 10);
	this->customPlot->addGraph();
	this->customPlot->graph(0)->setData(x, y);
	this->customPlot->xAxis->setLabel("x");
	this->customPlot->yAxis->setLabel("y");
	this->customPlot->rescaleAxes();
	this->customPlot->replot();
}

long double PTD_lab3::max(QVector<double> x)
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

long double PTD_lab3::min(QVector<double> x)
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
double PTD_lab3::signal(double i)
{
	double fm = 2;
	return 2 * sin(2. * std::_Pi * i * fm);
}

double PTD_lab3::ModulacjaAmp(double t, double k, double fn)
{
	return (k*signal(t) + 1)*cos(2 * std::_Pi*fn*t);
}

double PTD_lab3::ModulacjaFM(double t, double k, double fn)
{
	return cos(2 * std::_Pi*fn*t + k * signal(t));
}

std::vector<std::complex<double>> PTD_lab3::fastFourier(QVector<double> in)
{
	double *input = new double[in.length()];

	fftw_complex *out;
	fftw_plan plan;
	out = (fftw_complex*)malloc(sizeof(fftw_complex)*in.length());

	for (int i = 0; i < in.length(); i++)
	{
		input[i] = in[i];
	}
	plan = fftw_plan_dft_r2c_1d(in.length(), input, out, FFTW_ESTIMATE);
	fftw_execute(plan);

	std::vector<std::complex<double>> complex;

	for (int i = 0; i < in.length(); i++)
	{
		std::complex<double> comp;
		comp.real(out[i][0]);
		comp.imag(out[i][1]);
		complex.push_back(comp);
	}

	return complex;
}

double PTD_lab3::Widmo(std::complex <double> C)
{
	double M;
	M = sqrt(C.real()*C.real() + C.imag()*C.imag());
	return M;
}


void PTD_lab3::WidmoShow(QVector<double> x, QVector<double> y, double fs)
{
	std::vector<std::complex<double>> X;
	X = fastFourier(y);
	//PKT 2
	QVector<double> M(X.size() / 2 + 1), Md(X.size() / 2 + 1), FK(X.size() / 2 + 1);
	for (int i = 0; i < X.size() / 2 + 1; i++)
	{
		M[i] = Widmo(X[i]);
		Md[i] = 10. * log10(M[i]);
		FK[i] = (i*fs / (X.size()));
	}
	Wykres(FK, M);
}