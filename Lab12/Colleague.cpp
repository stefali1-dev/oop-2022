#include "Colleague.h"
Colleague::Colleague(std::string name, std::string phone, std::string company, std::string adress): Contact(name)
{
	    this->phone = phone;
        this->company = company;
        this->adress = adress;
}