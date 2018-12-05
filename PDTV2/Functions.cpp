#include "stdafx.h"
#include "Functions.h"
using namespace std;


double Functions::fx(int n)
{
	double f = 7.0;
	double phi = (2. / 3.)*_Pi;
	double fs = 220.0;
	double N = static_cast<double>(n);
	return 0.2*N*sin(2 * _Pi*f*(N / fs) + phi)*cos(N / 40.0);
}

double Functions::fy(int n)
{
	double N = static_cast<double>(n);
	return (N*N*N - 1.) / 2.;
}

double Functions::fz(int n)
{
	return fy(n)*(fx(n)*fy(n) - 0.72*fy(n));
}

double Functions::fv(int n)
{
	return (fx(n) - fy(n)) / (888.0*fx(n));
}

double Functions::fu(double t)
{
	if (t < 0.2 && t >= 0)
	{
		return (t + 0.5)*sin(50 * _Pi*t);
	}
	else if (t >= 0.2 && t < 0.7)
	{
		return (1. / t)*0.8*sin(34 * _Pi*t);
	}
	else if (t >= 0.7 && t < 1.8)
	{
		return 0.2*sin(40 * _Pi*t)*sin(20 * _Pi*t);
	}
	else
		return 0;

}

double Functions::fg(double t, int H)
{
	double sum = 0;
	for (int i = 1; i <= H; i++)
	{
		sum += cos(4.*_Pi*i*t) / (4.*i*i - 1);
	}
	return (1. / _Pi) - 2. / _Pi * sum + 0.5*sin(2 * _Pi*t);
}