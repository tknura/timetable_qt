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
        QLabel *label = new QLabel(this);
        label->setText(styledEventString(vec[i]));
        label->setFont(ui.DateLabel->font());
        QListWidgetItem *item = new QListWidgetItem();

        ui.EventListWidget->addItem(item);
        item->setSizeHint(label->sizeHint());
        ui.EventListWidget->setItemWidget(item, label);
    }
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

QString TimetableQT::styledEventString(const Event &event) {
    QString text = "<p style= 'font-size: 12pt;";
    switch(event.GetPriority()){
        case 3 :{
            text.append("color: #2f6e98'>");
            break;
        }
        case 2 :{
            text.append("color: #449eda'>");
            break;
        }
        case 1 :{
            text.append("color: #81c4ff'>");
            break;
        }
        case 0 :{
            text.append("color: #449eda'>");
            break;
        }
    }

    text.append("<b>" + QString::fromStdString(event.GetName()).toUpper() + "</b>");
    text.append("<p></font></br>");
    text.append("<p style= 'font-size: 8pt; color: black'>");
    text.append(QString::fromStdString(event.GetStartTime().ToString()) + " - " + QString::fromStdString(event.GetEndTime().ToString()));
    text.append("</p></br>");
    if(!event.GetPlace().empty()){
        text.append("<p style= 'font-size: 8pt; color: black'>");
        text.append("at" + QString::fromStdString(event.GetPlace()));
        text.append("</p></br>");
    }
    if(!event.GetAccompanion().empty()){
        text.append("<p style= 'font-size: 8spt; color: black'>");
        text.append("\\w" + QString::fromStdString(event.GetAccompanion()));
        text.append("</p></br>");
    }
    return text;
}

//#2f6e98 //high
//#449eda //medium
//#81c4ff //low
