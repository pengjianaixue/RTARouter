#include "stdafx.h"
#include "RTARouter.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{

	QApplication a(argc, argv);
	a.setStyle("Fusion");
	RTARouter w;
	w.show();
	return a.exec();
}
