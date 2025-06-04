#include "Contact.hpp"
#include "PhoneBook.hpp" //should i include this both ??

int main()
{
	PhoneBook phoneBook;
	std::string cmd;

	std::cout << "Use one of these three cmds ADD, SEARCH or EXIT" << std::endl;
	while (1)
	{
		std::cout << "Enter command: " << std::endl ;
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			phoneBook.addContact();
		}
		else if (cmd == "SEARCH")
		{
			phoneBook.searchContacts();
		}
		else if (cmd == "EXIT")
			break ;
	}
}
