#include "EventList.h"

EventList::~EventList() {
	Clear();
}

Event& EventList::operator[](const int index) {
	ListItem* pTemp = pHead;
	for(int i = 0; i < index; i++){
		if(pTemp->pNext){
			pTemp = pTemp->pNext;
		}
		else{
			std::cerr << "EventList index out of bounds\n";
			break;
		}
	}
	return pTemp->value;
}

void EventList::PushBack(Event& newItem) {
	if(!pHead) {
		pHead = new ListItem(nullptr, itemCounter, newItem);
		itemCounter++;
	}
	else {
		ListItem* pNew = new ListItem(nullptr, itemCounter, newItem);
		ListItem* pTemp = pHead;
		while(pTemp->pNext) {
			pTemp = pTemp->pNext;
		}
		pTemp->pNext = pNew;
		itemCounter++;
	}
}

void EventList::PopBack() {
	Pop(itemCounter - 1);
}

void EventList::Clear() {
	while(pHead) {
		ListItem* pTemp = pHead->pNext;
		delete pHead;
		pHead = pTemp;
	}
}

void EventList::Pop(int index) {
	ListItem* pTemp = pHead;
	ListItem* pBackTemp = pTemp;
	if(index == 1) {
		pHead = pTemp->pNext;
		delete pTemp;
		itemCounter--;
	}
	else {
		for(int i = 1; i < index; i++) {
			pBackTemp = pTemp;
			pTemp = pTemp->pNext;
		}
		if(index == itemCounter) {
			delete pTemp;
			pBackTemp->pNext = nullptr;
			itemCounter--;
		}
		else {
			pBackTemp->pNext = pTemp->pNext;
			delete pTemp;
			pTemp = pBackTemp->pNext;
			itemCounter--;
		}
	}
}

int EventList::Length() {
	return itemCounter;
}

std::vector<Event> EventList::FindAll(const Date &date) const {
	std::vector<Event> result;
	ListItem* pTemp = pHead;
	while(pTemp){
		if(pTemp->value.GetStartDate() <= date && date <= pTemp->value.GetEndDate()){
			result.push_back(pTemp->value);
		}
		pTemp = pTemp->pNext;
	}
	return result;
}
