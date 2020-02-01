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

	Date GetStartDate() const { return startDate; }
	void SetStartDate(const Date& sdate);

	Date GetEndDate() const { return endDate; }
	void SetEndDate(const Date& edate);

	std::string GetName() const { return name; }
	void SetName(const std::string& newname);

	std::string GetPlace() const { return place; }
	void SetPlace();

    Reminder GetReminder() const;
    void SetReminder(const Reminder &value);

    std::string RemindMessage() override;
    std::string ToString();
    bool IsValid();

    void Read(const QJsonObject &json);
    void Write(QJsonObject &json) const;

};

#endif
