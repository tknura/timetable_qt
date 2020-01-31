#ifndef TIME_H
#define TIME_H

#include <iostream>
#include "IValidator.h"
#include <string>
#include <QTime>
#include <regex>

class Time : public IValidator
{
private:
    int hour;
    int minute;
    int second;

public:
    Time() = default;
    Time(int _hour, int _minute, int _second) : hour(_hour), minute(_minute), second(_second) {}
    Time(const Time& time);
    Time(const QTime& time);
    Time(const std::string timeAsString);

    void operator=(const Time& time);
    bool operator<(const Time&time) const;
    bool operator<=(const Time&time) const;
    bool operator>(const Time&time) const;
    bool operator>=(const Time&time) const;

    int GetHour() const;
    void SetHour(int value);

    int GetMinute() const;
    void SetMinute(int value);

    int GetSecond() const;
    void SetSecond(int value);

    bool IsValid();

    std::string ToString() const;
    QTime ToQTime();
};

#endif // TIME_H
