#ifndef EVENT_H
#define EVENT_H

#include "Date.h"
#include "IValidator.h"
#include "TimeClass.h"
#include "Reminder.h"
#include <string>
#include <QJsonObject>
#include <QObject>

enum class PriorityLevel { NONE, LOW, MEDIUM, HIGH };

class Event : public IValidator, public IRemindable
{
private:
    int priority;
	Date startDate;
	Date endDate;
	Time startTime;
	Time endTime;
	std::string name;
	std::string accompanion;
	std::string place;
	Reminder reminder;

public:
	Event();
	Event(int priority, Date startDate, Date endDate, Time startTime, Time endTime, std::string name, std::string accompanion, std::string place);
	Event(int priority, Date startDate, Date endDate, Time startTime, Time endTime, std::string name, std::string accompanion, std::string place, Reminder reminder);
	Event(const Event& event);

    int GetPriority() const;
    void SetPriority(int value);

	Date GetStartDate() const { return startDate; }
	void SetStartDate(const Date& sdate);

	Date GetEndDate() const { return endDate; }
	void SetEndDate(const Date& edate);

    Time GetStartTime() const;
    void SetStartTime(const Time &value);

    Time GetEndTime() const;
    void SetEndTime(const Time &value);

    std::string GetName() const;
    void SetName(const std::string &value);

    std::string GetAccompanion() const;
    void SetAccompanion(const std::string &value);

    std::string GetPlace() const;
    void SetPlace(const std::string &value);

    Reminder GetReminder() const;
    void SetReminder(const Reminder &value);

    std::string RemindMessage() override;
    std::string ToString();
    bool IsValid();

    void Read(const QJsonObject &json);
    void Write(QJsonObject &json) const;
};

#endif
