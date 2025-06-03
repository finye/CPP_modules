#include "Contact.hpp"
#include "PhoneBook.hpp" //should i include this both ??

int main()
{
	Contact contact_1;
	PhoneBook phone;
	std::string cmd;
	
	std::cout << "Use one of these three cmds ADD, SEARCH or EXIT" << std::endl;
	std::cin >> cmd;
	if (cmd == "ADD")
	{
		phone.get_contact(contact_1);
	}
	//contact_1.sayhi();
}