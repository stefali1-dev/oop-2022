#include "Acquaintance.h"
Acquaintance::Acquaintance(std::string name, std::string phone): Contact(name)
{
	this->phone = phone;
}