#include "Date.h"

Date::Date(int mday, int month, int year): monthday(mday), month(month), year(year) {
    weekday = CalculateWeekday();
    if(!IsValid()){
        std::cerr << "INVALID DATE!!const\n";
    }
}

Date::Date(const Date& date) {
    monthday = date.GetMonthday();
    weekday = date.GetWeekday();
    month = date.GetMonth();
    year = date.GetYear();
    if(!IsValid()){
        std::cerr << "INVALID DATE!!copyconstr\n";
    }
}

Date::Date(const QDate& date) {
    monthday = date.day();
    weekday = date.dayOfWeek();
    month = date.month();
    year = date.year();
    if(!IsValid()){
        std::cerr << "INVALID DATE!!copyqconstr\n";
    }
}

//dateAsString format YYYY-MM-DD
Date::Date(const std::string dateAsString) {
    std::regex dateReg("\\d{4}-\\d{2}-\\d{2}");
    if(std::regex_match(dateAsString, dateReg)) {
       year = std::stoi(dateAsString.substr(0,4));
       month = std::stoi(dateAsString.substr(5,6));
       monthday = std::stoi(dateAsString.substr(8,9));
       weekday = CalculateWeekday();
    }
    else {
        std::cerr << "ERROR: Invalid date string!\n";
    }
}

void Date::operator=(const Date& date) {
    monthday = date.GetMonthday();
    weekday = date.GetWeekday();
    month = date.GetMonth();
    year = date.GetYear();
    if(!IsValid()){
        std::cerr << "INVALID DATE!!operator=\n";
    }
}

bool Date::operator==(const Date& date) const{
    return (monthday == date.GetMonthday() && month == date.GetMonth() && year == date.GetYear() && weekday == date.GetWeekday());
}

bool Date::operator!=(const Date& date) const{
    return !(*this == date);
}

bool Date::operator<=(const Date &date) const{
    return !(*this > date);
}

bool Date::operator<(const Date &date) const{
    if(year < date.GetYear()){
        return true;
    }
    else if(year == date.GetYear()){
        if(month < date.GetMonth()){
            return true;
        }
        else if(month == date.GetMonth()){
            if(monthday < date.GetMonthday()){
                return true;
            }
        }
    }
    return false;
}

bool Date::operator>=(const Date &date) const{
    return !(*this < date);
}

bool Date::operator>(const Date &date) const{
    if(year > date.GetYear()){
        return true;
    }
    else if(year == date.GetYear()){
        if(month > date.GetMonth()){
            return true;
        }
        else if(month == date.GetMonth()){
            if(monthday > date.GetMonthday()){
                return true;
            }
        }
    }
    return false;
}

int Date::CalculateWeekday() {
    int daysInYear[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    int yearDay;
    int result;

    yearDay = monthday + daysInYear[month-1];
    if ((month > 2) && (IsLeapYear() == true)){
        yearDay++;
    }

    int yy = (year - 1) % 100;
    int c = (year - 1) - yy;
    int g = yy + (yy / 4);
    result = (((((c / 100) % 4) * 5) + g) % 7);
    result += yearDay - 1;
    result %= 7;

    return result + 1;
}

bool Date::IsLeapYear() {
    return ((year % 4 == 0  &&  year % 100 != 0) || year % 400 == 0);
}

bool Date::IsValid() {
    if(IsLeapYear()){
        if(month == 2){
            return ((monthday <= 29 && monthday > 0) && (weekday <= 7 && weekday > 0 ));
        }
    }
    switch(month){
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 :
            return ((month <= 12 && month > 0) && (year > 1902) && (monthday <= 31 && monthday > 0) && (weekday <= 7 && weekday > 0 ));
        case 2 :
            return ((month <= 12 && month > 0) && (year > 1902) && (monthday <= 28 && monthday > 0) && (weekday <= 7 && weekday > 0 ));
        default: return ((month <= 12 && month > 0) && (year > 1902) && (monthday <= 30 && monthday > 0) && (weekday <= 7 && weekday > 0 ));
    }
}

std::string Date::ToString() const{
    std::string smonthday, smonth;
    if(this->monthday<10){
        smonthday = "0" + std::to_string(this->monthday);
    }
    else {
        smonthday = std::to_string(this->monthday);
    }
    if(this->month<10){
        smonth = "0" + std::to_string(this->month);
    }
    else {
        smonth = std::to_string(this->month);
    }
    return std::to_string(year)+ "-" + smonth + "-" + smonthday;
}

QDate Date::ToQDate() {
    return QDate(year, month, monthday);
}
