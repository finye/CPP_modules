#include "PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string cmd;
	while (1)
	{
		std::cout << "Enter command [ADD, SEARCH or EXIT]: ";
		if (!std::getline(std::cin, cmd))
		{
			std::cout << "\nExiting phonebook.\n";
			break;
		}
		if (cmd == "ADD")
			phoneBook.addContact();
		else if (cmd == "SEARCH")
			phoneBook.searchContacts();
		else if (cmd == "EXIT")
		{
			std::cout << "Exiting phonebook.\n";
			break;
		}
		else
		{
			std::cout << "Invalid Command, please try again." << std::endl;
		}
	}
	return 0;
}
