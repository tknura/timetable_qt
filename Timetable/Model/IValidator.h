#ifndef IVALIDATOR_H
#define IVALIDATOR_H

class IValidator
{
public:
    virtual bool IsValid() = 0;
    virtual ~IValidator() {}
};

#endif // IVALIDATOR_H
