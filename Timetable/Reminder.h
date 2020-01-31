#ifndef REMINDER_H
#define REMINDER_H

#include "Date.h"
#include "TimeClass.h"
#include <string>
#include <QJsonObject>

class Reminder
{
private:
    Date remindDay;
    Time time;
    bool isActive;

public:
    Reminder();
    Reminder(Date _remindday, Time _time, bool _isActive) : remindDay(_remindday), time(_time), isActive(_isActive) {}

    Time GetTime() const;
    void SetTime(const Time& value);

    Date GetRemindDay() const;
    void SetRemindDay(const Date& value);

    void Read(const QJsonObject &json);
    void Write(QJsonObject &json) const;

    bool GetIsActive() const;
    void SetIsActive(bool value);
};

#endif
