#include "Reminder.h"

Reminder::Reminder() {
    isActive = false;
    remindDay = Date(1,1,1990);
    time = Time(0,0,0);
}

Time Reminder::GetTime() const {
    return time;
}

void Reminder::SetTime(const Time& value) {
    time = value;
}

Date Reminder::GetRemindDay() const {
    return remindDay;
}

void Reminder::SetRemindDay(const Date& value) {
    remindDay = value;
}

bool Reminder::GetIsActive() const
{
    return isActive;
}

void Reminder::SetIsActive(bool value)
{
    isActive = value;
}

void Reminder::Read(const QJsonObject &json) {
    remindDay = json["remindDate"].toString().toStdString();
    time = json["remindTime"].toString().toStdString();
}

void Reminder::Write(QJsonObject &json) const {
    json["remindDate"] = QString::fromStdString(remindDay.ToString());
    json["remindTime"] = QString::fromStdString(time.ToString());
}
