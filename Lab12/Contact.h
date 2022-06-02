#pragma once
#include <string>
class Contact {
protected:
    std::string name;

public:
    Contact(std::string name);
    virtual std::string getName();
};