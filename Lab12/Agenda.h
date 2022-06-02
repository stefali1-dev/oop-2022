#pragma once
#include "Contact.h"
class Agenda {
    Contact* Arr[100];
    int len;
    int friendListLen;
public:
    Agenda();
    ~Agenda();
    Contact* getContact(std::string name);
    Contact** getFriendList();
    int getFriendListLen();
    void addContact(Contact* contactToAdd);
    void removeContact(std::string name);
};