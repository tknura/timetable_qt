#include "Event.h"

Event::Event() {
    priority = 0;
    name = "";
    accompanion = "";
    place = "";
    reminder = Reminder();
}

Event::Event(int priority, Date startDate, Date endDate, Time startTime, Time endTime, std::string name, std::string accompanion, std::string place){
	this->priority = priority;
	this->startDate = startDate;
	this->endDate = endDate;
	this->startTime = startTime;
	this->endTime = endTime;
	this->name = name;
	this->accompanion = accompanion;
	this->place = place;
	reminder = Reminder();
}

Event::	Event(int priority, Date startDate, Date endDate, Time startTime, Time endTime, std::string name, std::string accompanion, std::string place, Reminder reminder) {
	this->priority = priority;
	this->startDate = startDate;
	this->endDate = endDate;
	this->startTime = startTime;
	this->endTime = endTime;
	this->name = name;
	this->accompanion = accompanion;
	this->place = place;
	this->reminder = reminder;
}

Event::Event(const Event& event) {
	priority = event.priority;
	startDate = event.startDate;
	endDate = event.endDate;
	startTime = event.startTime;
	endTime = event.endTime;
	name = event.name;
	accompanion = event.accompanion;
	place = event.place;
	reminder = event.reminder;
}

void Event::SetStartDate(const Date& sdate) {
	if(startDate != sdate) {
		startDate = sdate;

	}
}

void Event::SetEndDate(const Date& edate) {
	if(endDate != edate) {
		endDate = edate;
	}
}

void Event::SetName(const std::string& newname) {
	if(name != newname) {
		name = newname;
	}
}

Reminder Event::GetReminder() const
{
	return reminder;
}

void Event::SetReminder(const Reminder &value)
{
	reminder = value;
}

std::string Event::RemindMessage() {
	return ToString();
}

std::string Event::ToString() {
	std::string result = name + "\n" + startTime.ToString() + " - " + endTime.ToString() + "\n";
	if(place.length() != 0){
		result += "at " + place + "\n";
	}
	if(accompanion.length() != 0){
		result += "/w " + accompanion + "\n";
	}
	return result;
}

bool Event::IsValid() {
	return (startDate.IsValid() && endDate.IsValid() && startTime.IsValid() && endTime.IsValid() && !name.empty());
}

void Event::Read(const QJsonObject &json) {
    priority = json["priority"].toInt();
    startDate = json["startDate"].toString().toStdString();
    endDate = json["endDate"].toString().toStdString();
    startTime = json["startTime"].toString().toStdString();
    endTime = json["endTime"].toString().toStdString();
    name = json["name"].toString().toStdString();
    place = json["place"].toString().toStdString();
    accompanion = json["accompanion"].toString().toStdString();
    reminder.Read(json);
}

void Event::Write(QJsonObject &json) const{
    json["priority"] = priority;
    json["startDate"] = QString::fromStdString(startDate.ToString());
    json["endDate"] = QString::fromStdString(endDate.ToString());
    json["startTime"] = QString::fromStdString(startTime.ToString());
    json["endTime"] = QString::fromStdString(endTime.ToString());
    json["name"] = QString::fromStdString(name);
    json["place"] = QString::fromStdString(place);
    json["accompanion"] = QString::fromStdString(accompanion);
    reminder.Write(json);
}
