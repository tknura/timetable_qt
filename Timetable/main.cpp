#include <QtWidgets/QApplication>
#include "View/TimetableQT.h"
#include "Management/MainManager.h"
#include "Management/ReminderManager.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainManager mm;
	TimetableQT w;
	w.show();
	return a.exec();
}
