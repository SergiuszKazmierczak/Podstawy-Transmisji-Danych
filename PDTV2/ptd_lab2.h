#pragma once

#include <QDialog>
#include "ui_ptd_lab2.h"
#include "Functions.h"
#include "qcustomplot.h"
#include <complex>
class PTD_lab2 : public QDialog, public Ui::PTD_lab2
{
	Q_OBJECT

public:
	PTD_lab2(QWidget *parent = Q_NULLPTR);
	~PTD_lab2();

	void WykresLine(QVector<double> x, QVector<double> y);
	void WykresLog(QVector<double> x, QVector<double> y);
	long double max(QVector<double> x);
	long double min(QVector<double> x);
	std::vector<std::complex<double>> fastFourier(QVector<double> in);
	double Widmo(std::complex<double> C);
	void zadanie4(int H);
private:
	Functions fun;
private slots:
	void on_Wyk1LButton_clicked();
	void on_Wyk2LButton_clicked();
	void on_Wyk3LButton_clicked();
	void on_Wyk4LButton_clicked();
	void on_Wyk5LButton_clicked();
	void on_Wyk6LButton_clicked();
	void on_Wyk7LButton_clicked();
	void on_Wyk1LogButton_clicked();
	void on_Wyk2LogButton_clicked();
	void on_Wyk3LogButton_clicked();
	void on_Wyk4LogButton_clicked();
	void on_Wyk5LogButton_clicked();
	void on_Wyk6LogButton_clicked();
	void on_Wyk7LogButton_clicked();

};
