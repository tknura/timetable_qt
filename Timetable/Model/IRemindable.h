#ifndef IREMINDABLE_H
#define IREMINDABLE_H
#include <string>

class IRemindable
{
public:
    virtual std::string RemindMessage() = 0;
    ~IRemindable() {}
};

#endif // IREMINDABLE_H
