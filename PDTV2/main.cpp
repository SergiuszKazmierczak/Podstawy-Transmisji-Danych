#include "stdafx.h"
#include "pdtv2.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	PDTV2 w;
	w.show();
	return a.exec();
}
