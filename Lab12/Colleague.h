#pragma once
#include "Contact.h"
class Colleague : public Contact {
    std::string phone;
    std::string company;
    std::string adress;
public:
    Colleague(std::string name, std::string phone, std::string company, std::string adress);
};