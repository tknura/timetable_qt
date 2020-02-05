#include "MainManager.h"

EventList MainManager::eventList = EventList();

MainManager::MainManager() {
    Start();
    ReminderManager::GetInstance().ShowPopup();
    ReminderManager::GetInstance().ReminderHandler();
}

MainManager::~MainManager() {
    End();
}

void MainManager::Start() {
    JSONManager::Load();
}

void MainManager::End() {
    JSONManager::Save();
}
