#include <iostream>
#include <string>
#include "Agenda.h"
#include "Friend.h"
#include "Colleague.h"
#include "Acquaintance.h"

int main()
{
	Agenda agenda;
	Friend* p1 = new Friend("gabi", "12.02.2002", "01234", "iasi");
	Friend* p2 = new Friend("vali", "12.02.2002", "01234", "iasi");
	Colleague* p3 = new Colleague("aaa", "01234", "Bitdefender", "iasi");
	Acquaintance* p4 = new Acquaintance("bbb", "111111");


	agenda.addContact(p1);
	agenda.addContact(p2);
	agenda.addContact(p3);
	agenda.addContact(p4);

	Contact** friendList = agenda.getFriendList();
	int len = agenda.getFriendListLen();
	std::cout << friendList[0]->getName() << "\n";



	std::string name = "vali";
	Contact* c = agenda.getContact(name);
	if (c)
	{
		std::cout << c->getName() << " is added\n";
	}
	else
	{
		std::cout << name << " is not added\n";
	}
	agenda.removeContact(name);
	c = agenda.getContact(name);
	if (c)
	{
		std::cout << c->getName() << " is added\n";
	}
	else
	{
		std::cout << name << " is not added\n";
	}
}