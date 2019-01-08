#include "stdafx.h"
#include "PTD_lab2.h"
#include "fftw/fftw3.h"


PTD_lab2::PTD_lab2(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
}

PTD_lab2::~PTD_lab2()
{
}

void PTD_lab2::on_Wyk1LButton_clicked()
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
	std::vector<std::complex<double>> X;
	auto start = std::chrono::system_clock::now();
	X = fastFourier(y);
	auto end = std::chrono::system_clock::now();
	QVector<double> M(X.size() / 2 + 1), Md(X.size() / 2 + 1), FK(X.size() / 2 + 1);
	for (int i = 0; i < X.size() / 2 + 1; i++)
	{
		M[i] = Widmo(X[i]);
		Md[i] = 10. * log10(M[i]);
		FK[i] = (i*fs / (X.size()));
	}
	std::chrono::duration<double> elapsed_seconds = end - start;
	this->label->setText(QString::fromStdString(std::to_string(elapsed_seconds.count())));
	WykresLine(FK, Md);

}

void PTD_lab2::on_Wyk2LButton_clicked()
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
	std::vector<std::complex<double>> X;
	auto start = std::chrono::system_clock::now();
	X = fastFourier(y);
	auto end = std::chrono::system_clock::now();
	QVector<double> M(X.size() / 2 + 1), Md(X.size() / 2 + 1), FK(X.size() / 2 + 1);
	for (int i = 0; i < X.size() / 2 + 1; i++)
	{
		M[i] = Widmo(X[i]);
		Md[i] = 10. * log10(M[i]);
		FK[i] = (i*fs / (X.size()));
	}
	std::chrono::duration<double> elapsed_seconds = end - start;
	this->label->setText(QString::fromStdString(std::to_string(elapsed_seconds.count())));
	WykresLine(FK, Md);
}
void PTD_lab2::on_Wyk3LButton_clicked()
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
	std::vector<std::complex<double>> X;
	auto start = std::chrono::system_clock::now();
	X = fastFourier(y);
	auto end= std::chrono::system_clock::now();
	QVector<double> M(X.size() / 2 + 1), Md(X.size() / 2 + 1), FK(X.size() / 2 + 1);
	for (int i = 0; i < X.size() / 2 + 1; i++)
	{
		M[i] = Widmo(X[i]);
		Md[i] = 10. * log10(M[i]);
		FK[i] = (i*fs / (X.size()));
	}
	std::chrono::duration<double> elapsed_seconds = end - start;
	this->label->setText(QString::fromStdString(std::to_string(elapsed_seconds.count())));
	WykresLine(FK, Md);
}
void PTD_lab2::on_Wyk4LButton_clicked()
{
	double fs = 2.3 * 1000;
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
	std::vector<std::complex<double>> X;
	auto start = std::chrono::system_clock::now();
	X = fastFourier(y);
	auto end = std::chrono::system_clock::now();
	QVector<double> M(X.size() / 2 + 1), Md(X.size() / 2 + 1), FK(X.size() / 2 + 1);
	for (int i = 0; i < X.size() / 2 + 1; i++)
	{
		M[i] = Widmo(X[i]);
		Md[i] = 10. * log10(M[i]);
		FK[i] = (i*fs / (X.size()));
	}
	std::chrono::duration<double> elapsed_seconds = end - start;
	this->label->setText(QString::fromStdString(std::to_string(elapsed_seconds.count())));
	WykresLine(FK, Md);
}
void PTD_lab2::on_Wyk5LButton_clicked()
{
	int T = 6;
	int fs = 12 * 1000;
	int probki = T * fs;
	long double inc = 1. / fs;
	double t = 0;
	//double *y = new double[probki];
	QVector<double> x(probki), y(probki);
	for (int i = 0; i < probki; i++)
	{
		x[i] = t;
		y[i] = fun.fg(t, 1);
		t += inc;
	}
	std::vector<std::complex<double>> X;
	auto start = std::chrono::system_clock::now();
	X = fastFourier(y);
	auto end = std::chrono::system_clock::now();
	//PKT 2
	QVector<double> M(X.size() / 2 + 1), Md(X.size() / 2 + 1), FK(X.size() / 2 + 1);
	for (int i = 0; i < X.size() / 2 + 1; i++)
	{
		M[i] = Widmo(X[i]);
		Md[i] = 10. * log10(M[i]);
		FK[i] = (i*fs / (X.size()));
	}
	std::chrono::duration<double> elapsed_seconds = end - start;
	this->label->setText(QString::fromStdString(std::to_string(elapsed_seconds.count())));
	WykresLine(FK, Md);
}
void PTD_lab2::on_Wyk6LButton_clicked()
{
	int T = 6;
	int fs = 12 * 1000;
	int probki = T * fs;
	long double inc = 1. / fs;
	double t = 0;
	//double *y = new double[probki];
	QVector<double> x(probki), y(probki);
	for (int i = 0; i < probki; i++)
	{
		x[i] = t;
		y[i] = fun.fg(t, 5);
		t += inc;
	}
	std::vector<std::complex<double>> X;

	auto start = std::chrono::system_clock::now();
	X = fastFourier(y);
	auto end = std::chrono::system_clock::now();
	//PKT 2
	QVector<double> M(X.size() / 2 + 1), Md(X.size() / 2 + 1), FK(X.size() / 2 + 1);
	for (int i = 0; i < X.size() / 2 + 1; i++)
	{
		M[i] = Widmo(X[i]);
		Md[i] = 10. * log10(M[i]);
		FK[i] = (i*fs / (X.size()));
	}
	std::chrono::duration<double> elapsed_seconds = end - start;
	this->label->setText(QString::fromStdString(std::to_string(elapsed_seconds.count())));
	WykresLine(FK, Md);
}
void PTD_lab2::on_Wyk7LButton_clicked()
{
	int T = 6;
	int fs = 12 * 1000;
	int probki = T * fs;
	long double inc = 1. / fs;
	double t = 0;
	//double *y = new double[probki];
	QVector<double> x(probki), y(probki);
	for (int i = 0; i < probki; i++)
	{
		x[i] = t;
		y[i] = fun.fg(t, 15);
		t += inc;
	}
	std::vector<std::complex<double>> X;
	auto start = std::chrono::system_clock::now();
	X = fastFourier(y);
	auto end = std::chrono::system_clock::now();
	//PKT 2
	QVector<double> M(X.size() / 2 + 1), Md(X.size() / 2 + 1), FK(X.size() / 2 + 1);
	for (int i = 0; i < X.size() / 2 + 1; i++)
	{
		M[i] = Widmo(X[i]);
		Md[i] = 10. * log10(M[i]);
		FK[i] = (i*fs / (X.size()));
	}
	std::chrono::duration<double> elapsed_seconds = end - start;
	this->label->setText(QString::fromStdString(std::to_string(elapsed_seconds.count())));
	WykresLine(FK, Md);
}

void PTD_lab2::on_Wyk1LogButton_clicked()
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
	std::vector<std::complex<double>> X;
	auto start = std::chrono::system_clock::now();
	X = fastFourier(y);
	auto end = std::chrono::system_clock::now();
	QVector<double> M(X.size() / 2 + 1), Md(X.size() / 2 + 1), FK(X.size() / 2 + 1);
	for (int i = 0; i < X.size() / 2 + 1; i++)
	{
		M[i] = Widmo(X[i]);
		Md[i] = 10. * log10(M[i]);
		FK[i] = (i*fs / (X.size()));
	}
	std::chrono::duration<double> elapsed_seconds = end - start;
	this->label->setText(QString::fromStdString(std::to_string(elapsed_seconds.count())));
	WykresLog(FK, Md);
}

void PTD_lab2::on_Wyk2LogButton_clicked()
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
	std::vector<std::complex<double>> X;
	auto start = std::chrono::system_clock::now();
	X = fastFourier(y);
	auto end = std::chrono::system_clock::now();
	QVector<double> M(X.size() / 2 + 1), Md(X.size() / 2 + 1), FK(X.size() / 2 + 1);
	for (int i = 0; i < X.size() / 2 + 1; i++)
	{
		M[i] = Widmo(X[i]);
		Md[i] = 10. * log10(M[i]);
		FK[i] = (i*fs / (X.size()));
	}
	std::chrono::duration<double> elapsed_seconds = end - start;
	this->label->setText(QString::fromStdString(std::to_string(elapsed_seconds.count())));
	WykresLog(FK, Md);
}
void PTD_lab2::on_Wyk3LogButton_clicked()
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
	std::vector<std::complex<double>> X;
	auto start = std::chrono::system_clock::now();
	X = fastFourier(y);
	auto end = std::chrono::system_clock::now();
	QVector<double> M(X.size() / 2 + 1), Md(X.size() / 2 + 1), FK(X.size() / 2 + 1);
	for (int i = 0; i < X.size() / 2 + 1; i++)
	{
		M[i] = Widmo(X[i]);
		Md[i] = 10. * log10(M[i]);
		FK[i] = (i*fs / (X.size()));
	}
	std::chrono::duration<double> elapsed_seconds = end - start;
	this->label->setText(QString::fromStdString(std::to_string(elapsed_seconds.count())));
	WykresLog(FK, Md);
}
void PTD_lab2::on_Wyk4LogButton_clicked()
{
	double fs = 2.3 * 1000;
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
	std::vector<std::complex<double>> X;
	auto start = std::chrono::system_clock::now();
	X = fastFourier(y);
	auto end = std::chrono::system_clock::now();
	QVector<double> M(X.size() / 2 + 1), Md(X.size() / 2 + 1), FK(X.size() / 2 + 1);
	for (int i = 0; i < X.size() / 2 + 1; i++)
	{
		M[i] = Widmo(X[i]);
		Md[i] = 10. * log10(M[i]);
		FK[i] = (i*fs / (X.size()));
	}
	std::chrono::duration<double> elapsed_seconds = end - start;
	this->label->setText(QString::fromStdString(std::to_string(elapsed_seconds.count())));
	WykresLog(FK, Md);
}
void PTD_lab2::on_Wyk5LogButton_clicked()
{
	int T = 6;
	int fs = 12 * 1000;
	int probki = T * fs;
	long double inc = 1. / fs;
	double t = 0;
	//double *y = new double[probki];
	QVector<double> x(probki), y(probki);
	for (int i = 0; i < probki; i++)
	{
		x[i] = t;
		y[i] = fun.fg(t, 1);
		t += inc;
	}
	std::vector<std::complex<double>> X;
	auto start = std::chrono::system_clock::now();
	X = fastFourier(y);
	auto end = std::chrono::system_clock::now();
	//PKT 2
	QVector<double> M(X.size() / 2 + 1), Md(X.size() / 2 + 1), FK(X.size() / 2 + 1);
	for (int i = 0; i < X.size() / 2 + 1; i++)
	{
		M[i] = Widmo(X[i]);
		Md[i] = 10. * log10(M[i]);
		FK[i] = (i*fs / (X.size()));
	}
	std::chrono::duration<double> elapsed_seconds = end - start;
	this->label->setText(QString::fromStdString(std::to_string(elapsed_seconds.count())));
	WykresLog(FK, Md);
}
void PTD_lab2::on_Wyk6LogButton_clicked()
{
	int T = 6;
	int fs = 12 * 1000;
	int probki = T * fs;
	long double inc = 1. / fs;
	double t = 0;
	//double *y = new double[probki];
	QVector<double> x(probki), y(probki);
	for (int i = 0; i < probki; i++)
	{
		x[i] = t;
		y[i] = fun.fg(t, 5);
		t += inc;
	}
	std::vector<std::complex<double>> X;
	auto start = std::chrono::system_clock::now();
	X = fastFourier(y);
	auto end = std::chrono::system_clock::now();
	//PKT 2
	QVector<double> M(X.size() / 2 + 1), Md(X.size() / 2 + 1), FK(X.size() / 2 + 1);
	for (int i = 0; i < X.size() / 2 + 1; i++)
	{
		M[i] = Widmo(X[i]);
		Md[i] = 10. * log10(M[i]);
		FK[i] = (i*fs / (X.size()));
	}
	std::chrono::duration<double> elapsed_seconds = end - start;
	this->label->setText(QString::fromStdString(std::to_string(elapsed_seconds.count())));
	WykresLog(FK, Md);
}
void PTD_lab2::on_Wyk7LogButton_clicked()
{
	int T = 6;
	int fs = 12 * 1000;
	int probki = T * fs;
	long double inc = 1. / fs;
	double t = 0;
	//double *y = new double[probki];
	QVector<double> x(probki), y(probki);
	for (int i = 0; i < probki; i++)
	{
		x[i] = t;
		y[i] = fun.fg(t, 15);
		t += inc;
	}
	std::vector<std::complex<double>> X;
	auto start = std::chrono::system_clock::now();
	X = fastFourier(y);
	auto end = std::chrono::system_clock::now();
	//PKT 2
	QVector<double> M(X.size() / 2 + 1), Md(X.size() / 2 + 1), FK(X.size() / 2 + 1);
	for (int i = 0; i < X.size() / 2 + 1; i++)
	{
		M[i] = Widmo(X[i]);
		Md[i] = 10. * log10(M[i]);
		FK[i] = (i*fs / (X.size()));
	}
	std::chrono::duration<double> elapsed_seconds = end - start;
	this->label->setText(QString::fromStdString(std::to_string(elapsed_seconds.count())));
	WykresLog(FK, Md);
}


void PTD_lab2::WykresLine(QVector<double> x, QVector<double> y)
{
	this->customPlot->xAxis->setRange(min(x), max(x) + 0.1*max(x));
	this->customPlot->xAxis->setScaleType(QCPAxis::stLinear);
	this->customPlot->yAxis->setRange(min(y) - 10, max(y) + 10);
	this->customPlot->addGraph();
	this->customPlot->graph(0)->setData(x, y);
	this->customPlot->xAxis->setLabel("x");
	this->customPlot->yAxis->setLabel("y");
	this->customPlot->rescaleAxes();
	this->customPlot->replot();
}

void PTD_lab2::WykresLog(QVector<double> x, QVector<double> y)
{

	this->customPlot->xAxis->setRange(min(x), max(x) + 0.1*max(x));
	this->customPlot->xAxis->setScaleType(QCPAxis::stLogarithmic);
	this->customPlot->yAxis->setRange(min(y) - 10, max(y) + 10);
	this->customPlot->addGraph();
	this->customPlot->graph(0)->setData(x, y);
	this->customPlot->xAxis->setLabel("x");
	this->customPlot->yAxis->setLabel("y");
	this->customPlot->rescaleAxes();
	this->customPlot->replot();
}
long double PTD_lab2::max(QVector<double> x)
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

long double PTD_lab2::min(QVector<double> x)
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


std::vector<std::complex<double>> PTD_lab2::fastFourier(QVector<double> in)
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

double PTD_lab2::Widmo(std::complex <double> C)
{
	double M;
	M = sqrt(C.real()*C.real() + C.imag()*C.imag());
	return M;
}


void PTD_lab2::zadanie4(int H)
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
	WykresLog(x, y);

}
