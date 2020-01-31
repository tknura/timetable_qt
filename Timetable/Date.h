#ifndef DATE_H
#define DATE_H

#include <iostream>
#include "IValidator.h"
#include <regex>
#include <string>
#include <QDate>

class Date : public IValidator
{
private:
	int monthday;
	int month;
	int year;
	int weekday;
	
	int CalculateWeekday();
	bool IsLeapYear();

public:
	Date() = default;
	Date(int mday, int month, int year);
	Date(const Date& date);
	Date(const QDate& date);
	Date(const std::string dateAsString);

    void operator=(const Date& date);
    bool operator==(const Date& date) const;
    bool operator!=(const Date& date) const;
    bool operator<=(const Date& date) const;
    bool operator<(const Date& date) const ;
    bool operator>=(const Date& date) const;
    bool operator>(const Date& date) const;

	int GetMonthday() const { return monthday; }
	int GetMonth() const { return month; }
	int GetYear() const { return year; }
	int GetWeekday() const { return weekday; }

	void SetMonthday(const int& _monthday) { monthday = _monthday; }
	void SetMonth(const int& _month) { month = _month; }
	void SetYear(const int& _year) { year = _year; }

	bool IsValid();

    Date CurrentDate();

    std::string ToString() const;
    QDate ToQDate();
};

#endif

