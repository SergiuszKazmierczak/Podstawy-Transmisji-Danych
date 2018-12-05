#pragma once
#include "stdafx.h"
#include <QDialog>
#include "ui_ptd_lab1.h"
#include <ui_pdtv2.h>
#include "Functions.h"


class PTD_lab1 : public QDialog, public Ui::PTD_lab1
{
	Q_OBJECT

public:
	PTD_lab1(QWidget *parent = Q_NULLPTR);
	~PTD_lab1();
	long double max(QVector<double> x);
	long double min(QVector<double> x);
	void Wykres(QVector<double> x, QVector<double> y);
	void zadanie4(int H);
private:
	Functions fun;
private slots:
	
	void on_zad1Button_clicked();
	void on_zad2aButton_clicked();
	void on_zad2bButton_clicked();
	void on_zad3Button_clicked();
	void on_zad4aButton_clicked();
	void on_zad4bButton_clicked();
	void on_zad4cButton_clicked();
};
