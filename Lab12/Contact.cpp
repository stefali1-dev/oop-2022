#include "Contact.h"
Contact::Contact(std::string name): name(name)
{
}

std::string Contact::getName()
{
	return this->name;
}
