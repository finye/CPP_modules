#include "PhoneBook.hpp"

int main()
{
	PhoneBook phone_book;
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
			phone_book.add_contact();
		else if (cmd == "SEARCH")
			phone_book.search_contacts();
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
