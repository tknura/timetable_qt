#include "ReminderManager.h"

void ReminderManager::ShowPopup() {
    popup = new ReminderPopup;
    popup->move(QApplication::desktop()->geometry().right() - popup->size().width() - 20, QApplication::desktop()->geometry().bottom() - popup->size().height() - 50);
    popup->GetUi()->ReminderMessage->setText(QString::fromStdString(currentReminder.GetRemindObject()->RemindMessage()));
    popup->setModal(false);
    popup->show();
    currentReminder.SetActive(false);
}

void ReminderManager::Start() {
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(ReminderHandler()));
    timer->start(60000);
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
