#include "TimetableQT.h"
#include "MainManager.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainManager mm;
	TimetableQT w;
	w.show();
	return a.exec();
}
