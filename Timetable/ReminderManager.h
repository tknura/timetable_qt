#ifndef REMINDERMANAGER_H
#define REMINDERMANAGER_H

#include "Reminder.h"
#include "ReminderPopup.h"
#include "ui_ReminderPopup.h"
#include "MainManager.h"
#include <QTimer>
#include <QObject>
#include <QDesktopWidget>
#include <QWidget>

class ReminderManager : QObject
{
    Q_OBJECT

public:
    static ReminderManager& GetInstance(){
        static ReminderManager instance;
        return instance;
    }

    ReminderManager() {}
    ReminderManager(ReminderManager& rm) = delete;
    void operator=(ReminderManager const) = delete;

    void ReminderHandler();
    Reminder GetClosestReminder();
private:
    Reminder currentReminder;
    ReminderPopup *popup;

public slots:
    void ShowPopup();
};

#endif // REMINDERMANAGER_H
