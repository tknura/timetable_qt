#ifndef TIMETABLEQT_H
#define TIMETABLEQT_H

#include <QtWidgets/QWidget>
#include <QList>
#include "ui_TimetableQT.h"
#include "MainManager.h"
#include "AddEventWindowController.h"

class TimetableQT : public QWidget
{
	Q_OBJECT

public:
	TimetableQT(QWidget *parent = Q_NULLPTR);
	void DisplayEventsInList(const QDate& date);
	void HandleDateDisplay(const QDate& date);

private slots:
	void on_AddEventButton_clicked();

    void on_HomeButton_clicked();

    void on_calendarWidget_clicked(const QDate &date);

private:
    Ui::Timetable ui;
};

#endif
