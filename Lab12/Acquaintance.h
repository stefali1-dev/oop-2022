#pragma once
#include "Contact.h"

class Acquaintance : public Contact {
    std::string phone;
public:
    Acquaintance(std::string name, std::string phone);
};