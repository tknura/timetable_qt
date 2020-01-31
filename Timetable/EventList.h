#ifndef EVENTLIST_H
#define EVENTLIST_H

#include "Event.h"

class EventList
{
private:
	struct ListItem
	{
		ListItem* pNext;
		int index;
		Event value;

		ListItem() : pNext(nullptr), index(0) {}
		ListItem(Event& _value, int _index) : pNext(nullptr), index(_index), value(_value) {}
		ListItem(ListItem* _pNext, int _index, Event& _value) : pNext(_pNext), index(_index), value(_value) {}
	};

	ListItem* pHead;
	int itemCounter;

public:
	EventList() : pHead(nullptr), itemCounter(0) {}
	~EventList();

	Event& operator[](const int index);
	void PushBack(Event& pNew);
	void PopBack();
	void Clear();
	void Pop(int index);
	int Length();

	std::vector<Event> FindAll(const Date& date) const;
	Event& Find(int index);
};

#endif
