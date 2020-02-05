#include "Reminder.h"

Reminder::Reminder() {
    isActive = false;
    remindDate = Date(1,1,1990);
    remindTime = Time(0,0,0);
}

Reminder::Reminder(Date _remindday, Time _time, bool _isActive, IRemindable *_remindObject)  : remindDate(_remindday), remindTime(_time), remindObject(_remindObject), isActive(_isActive) {
}

Time Reminder::GetRemindTime() const {
    return remindTime;
}

void Reminder::SetRemindTime(const Time& value) {
    remindTime = value;
}

Date Reminder::GetRemindDate() const {
    return remindDate;
}

void Reminder::SetRemindDate(const Date& value) {
    remindDate = value;
}

bool Reminder::IsActive() const {
    return isActive;
}

void Reminder::SetActive(bool value) {
    isActive = value;
}

void Reminder::Read(const QJsonObject &json) {
    remindDate = json["remindDate"].toString().toStdString();
    remindTime = json["remindTime"].toString().toStdString();
    isActive = true;
}

void Reminder::Write(QJsonObject &json) const {
    json["remindDate"] = QString::fromStdString(remindDate.ToString());
    json["remindTime"] = QString::fromStdString(remindTime.ToString());
}

bool Reminder::IsValid() {
    return remindDate.IsValid() && remindTime.IsValid();
}

IRemindable *Reminder::GetRemindObject() const {
    return remindObject;
}

void Reminder::setRemindObject(IRemindable *value) {
    remindObject = value;
}
