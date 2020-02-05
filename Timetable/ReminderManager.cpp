#include "ReminderManager.h"

void ReminderManager::ShowPopup() {
    popup = new ReminderPopup;
    //popup->GetUi()->ReminderMessage->setText(QString::fromStdString(currentReminder.GetRemindObject()->RemindMessage()));
    popup->setModal(false);
    popup->show();
    currentReminder.SetActive(false);
}

void ReminderManager::ReminderHandler() {
    if(GetClosestReminder().IsActive()) {
        currentReminder = GetClosestReminder();
        QDateTime currReminderDateTime;
        currReminderDateTime.setDate(currentReminder.GetRemindDate().ToQDate());
        currReminderDateTime.setTime(currentReminder.GetRemindTime().ToQTime());
        QDateTime now = QDateTime::currentDateTime();

        QTimer::singleShot(static_cast<long>(now.msecsTo(currReminderDateTime)),&GetInstance(), SLOT(ShowPopup()));
    }
}

Reminder ReminderManager::GetClosestReminder() {
    Date minDate(31,12,2222);
    Reminder resultReminder;

    for(int i = 0; i < MainManager::eventList.Length(); i++){
        if(MainManager::eventList[i].GetReminder().IsActive()
           && MainManager::eventList[i].GetReminder().GetRemindDate() < minDate
           && MainManager::eventList[i].GetReminder().GetRemindDate() >= Date(QDate::currentDate())
           && MainManager::eventList[i].GetReminder().GetRemindTime() > Time(QTime::currentTime())) {

                minDate = MainManager::eventList[i].GetReminder().GetRemindDate();
                resultReminder = MainManager::eventList[i].GetReminder();

        }
    }

    return resultReminder;
}
