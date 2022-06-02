#pragma once
#include "Contact.h"

class Friend : public Contact {
    std::string birthday;
    std::string phone;
    std::string adress;
public:
    Friend(std::string name, std::string birthday, std::string phone, std::string adress);
};