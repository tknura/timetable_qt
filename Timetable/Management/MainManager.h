#ifndef MAINMANAGER_H
#define MAINMANAGER_H

#include "Model/EventList.h"
#include "JSONManager.h"
#include "ReminderManager.h"
#include <vector>

class MainManager
{
public:
	MainManager();
	~MainManager();
	static EventList eventList;
	static void Start();
	static void End();
};

#endif
