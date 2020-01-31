#include "TimeClass.h"

int Time::GetHour() const {
    return hour;
}

void Time::SetHour(int value) {
    hour = value;
}

int Time::GetMinute() const {
    return minute;
}

void Time::SetMinute(int value) {
    minute = value;
}

int Time::GetSecond() const {
    return second;
}

void Time::SetSecond(int value) {
    second = value;
}

bool Time::IsValid() {
    return ((hour < 24 && hour >= 0) && (minute < 60 && minute >= 0) && (second < 60 && second >= 0));
}

std::string Time::ToString() const {
    std::string sminute, shour;
    if(this->minute < 10){
        sminute = "0" + std::to_string(this->minute);
    }
    else {
        sminute = std::to_string(this->minute);
    }
    if(this->hour < 10){
        shour = "0" + std::to_string(this->hour);
    }
    else {
        shour = std::to_string(this->hour);
    }
    return shour + ":" + sminute;
}

QTime Time::ToQTime() {
    return QTime(hour, minute, second);
}

Time::Time(const Time &time) {
    hour = time.GetHour();
    minute = time.GetMinute();
    second = time.GetSecond();
    if(!IsValid()){
        std::cerr << "INVALID TIME!!";
    }
}

Time::Time(const QTime &time) {
    hour = time.hour();
    minute = time.minute();
    second = time.second();
    if(!IsValid()){
        std::cerr << "INVALID TIME!!";
    }
}

Time::Time(const std::string timeAsString) {
    std::regex timeReg("\\d{2}:\\d{2}");
    if(std::regex_match(timeAsString, timeReg)) {
       hour = std::stoi(timeAsString.substr(0,2));
       minute = std::stoi(timeAsString.substr(3,4));
       second = 0;
    }
    else {
        std::cerr << "ERROR: Invalid time string!\n";
    }
    if(!IsValid()){
        std::cerr << "INVALID TIME!!";
    }
}

void Time::operator=(const Time &time) {
    hour = time.GetHour();
    minute = time.GetMinute();
    second = time.GetSecond();
    if(!IsValid()){
        std::cerr << "INVALID TIME!!";
    }
}

bool Time::operator<(const Time &time) const {
    if(hour < time.GetHour()){
        return  true;
    }
    else if(hour == time.GetHour()){
        if(minute < time.GetMinute()){
            return true;
        }
        else if(minute == time.GetMinute()){
            if(second < time.GetSecond()){
                return true;
            }
        }
    }
    return false;
}

bool Time::operator<=(const Time &time) const {
    return !(*this > time);
}

bool Time::operator>(const Time &time) const {
    if(hour > time.GetHour()){
        return  true;
    }
    else if(hour == time.GetHour()){
        if(minute > time.GetMinute()){
            return true;
        }
        else if(minute == time.GetMinute()){
            if(second > time.GetSecond()){
                return true;
            }
        }
    }
    return false;
}

bool Time::operator>=(const Time &time) const {
    return !(*this < time);
}
