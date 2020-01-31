#include "TimetableQT.h"

TimetableQT::TimetableQT(QWidget *parent) : QWidget(parent) {
	QLocale::setDefault(QLocale(QLocale::English, QLocale::UnitedStates));
	ui.setupUi(this);
	HandleDateDisplay(QDate::currentDate());
}

void TimetableQT::DisplayEventsInList(const QDate& date) {
    QStringList list;
    auto vec = MainManager::eventList.FindAll(date);
    for (unsigned int i = 0; i < vec.size() ; ++i) {
        list.push_back(QString::fromStdString(vec[i].ToString()));
    }
    ui.EventListWidget->addItems(list);
}

void TimetableQT::HandleDateDisplay(const QDate &date) {
    ui.EventListWidget->clear();
    QLocale locale  = QLocale(QLocale::English);
    QString displayedDate = locale.toString(date,"dddd,\n d MMMM,\n yyyy");
    ui.DateLabel->setText(displayedDate.toUpper());
    DisplayEventsInList(date);
}

void TimetableQT::on_AddEventButton_clicked() {
    AddEventWindow addEventWindow(ui.calendarWidget->selectedDate(), nullptr);
    addEventWindow.setModal(true);
    addEventWindow.exec();
    HandleDateDisplay(ui.calendarWidget->selectedDate());
}

void TimetableQT::on_HomeButton_clicked() {
    ui.calendarWidget->showToday();
    ui.calendarWidget->setSelectedDate(QDate::currentDate());
    HandleDateDisplay(QDate::currentDate());
}

void TimetableQT::on_calendarWidget_clicked(const QDate &date) {
    HandleDateDisplay(date);
}


