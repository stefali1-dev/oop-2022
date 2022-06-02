#include "Agenda.h"
#include "Friend.h"
#include "iostream"

Agenda::Agenda(): len(0), friendListLen(0)
{
}

Agenda::~Agenda()
{
}

void Agenda::addContact(Contact* ContactToAdd)
{
	this->Arr[len] = ContactToAdd;
	this->len++;
}

void Agenda::removeContact(std::string name)
{
	for (int i = 0; i < len; i++) {
		Contact* contact = Arr[i];
		if (contact->getName() == name) {
			for (int index = i; index < len - 1; i++) {
				Arr[i] = Arr[i + 1];
			}

			// delete Arr[len - 1]; nush
			this->len--;
		}
	}
}

Contact* Agenda::getContact(std::string name)
{	
	for(int i=0; i<len; i++){
		Contact* contact = Arr[i];
		if (contact->getName() == name)
			return contact;
	}

	return nullptr;
}

Contact** Agenda::getFriendList()
{
	friendListLen = 0;
	Contact* Friends[100];
	for (int i = 0; i < len; i++) {
		Contact* contact = Arr[i];

		if (dynamic_cast<Friend*>(contact) != nullptr) {
			Friends[friendListLen++] = contact;
		}
		
	}
	return Friends;
}

int Agenda::getFriendListLen()
{
	return this->friendListLen;
}
