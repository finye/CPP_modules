#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): _count(0), _oldest_contact(0)
{
	//std::cout<< "phonebook contructed\n";
}

PhoneBook::~PhoneBook()
{
	//std::cout<< "phoneBook destruction\n";
}
void PhoneBook::addContact()
{
	Contact c;

	c.set_first_name(get_contact("First name: "));
	c.set_last_name(get_contact("Last name: "));
	c.set_nickname(get_contact("Nickname: "));
	c.set_phone_num(get_contact("Phone number: "));
	c.set_secret(get_contact("Darkest secret: "));

	if (_count < _max_contacts)
	{
		_contacts[_count] = c;
		_count++;
	}
	else
	{
		_contacts[_oldest_contact] = c;
		_oldest_contact = (_oldest_contact + 1) % _max_contacts;
	}
}
void PhoneBook::searchContacts()
{
	//add a check if count is zero
	int i = 0;
	std::string search_i;
	std::cout << "printing the contacts" << std::endl;
	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First name" << "|"
			  << std::setw(10) << "Last name" << "|"
			  << std::setw(10) << "Nickname" << std::endl;
	while (i < _count)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << _contacts[i].get_first_name() << "|";
		std::cout << std::setw(10) << _contacts[i].get_last_name() << "|";
		std::cout << std::setw(10) << _contacts[i].get_nickname() << std::endl;
		i++;
	}
	std::cout << "Enter index (1 - 8) for contact details: ";
	std::getline(std::cin, search_i);
	int index = std::stoi(search_i);
	if (index >= 0 && index < _count)
	{
		std::cout << "good stuff!\n";
		_contacts[index].view_contact();
	}
	else
		std::cout << "Error: index is invalid.\n";
}

std::string PhoneBook::get_contact(std::string prompt)
{
	std::string input;
	while (input.empty())
	{
		std::cout << prompt ;
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "Error: field can't be empty.\n";
	}
	return input;
}
