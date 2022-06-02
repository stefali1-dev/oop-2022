#include "Friend.h"
#include <iostream>

Friend::Friend(std::string name, std::string birthday, std::string phone, std::string adress):
    Contact(name),
    birthday(birthday),
    phone(phone),
    adress(adress) { }
