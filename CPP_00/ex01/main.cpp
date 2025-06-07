#include "Contact.hpp"
#include "PhoneBook.hpp" //should i include this both ??

int main()
{
	PhoneBook phoneBook;
	std::string cmd;
	while (1)
	{
		std::cout << "Enter one of these commands (ADD - SEARCH - EXIT): ";
		if (!std::getline(std::cin, cmd))
			break ;
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
		else
		{
			std::cout << "Error: invalid Command." << std::endl;
		}
	}
}
