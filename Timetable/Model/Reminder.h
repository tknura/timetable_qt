#ifndef REMINDER_H
#define REMINDER_H

#include "Date.h"
#include "TimeClass.h"
#include <string>
#include <Model/IRemindable.h>
#include <Model/IValidator.h>
#include <QJsonObject>

class Reminder : public IValidator
{
private:
    Date remindDate;
    Time remindTime;
    IRemindable* remindObject;
    bool isActive;

public:
    Reminder();
    Reminder(Date _remindday, Time _time, bool _isActive, IRemindable* _remindObject);

    Time GetRemindTime() const;
    void SetRemindTime(const Time& value);

    Date GetRemindDate() const;
    void SetRemindDate(const Date& value);

    void Read(const QJsonObject &json);
    void Write(QJsonObject &json) const;

    bool IsValid() override;

    bool IsActive() const;
    void SetActive(bool value);

    IRemindable *GetRemindObject() const;
    void setRemindObject(IRemindable *value);
};

#endif
