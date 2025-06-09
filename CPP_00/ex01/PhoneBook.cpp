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
	std::cout << "New contact added." << std::endl;
}
void PhoneBook::searchContacts()
{
	if (!_count)
	{
		std::cout << "Phonebook is empty." << std::endl;
		return ;
	}
	int i = 0;
	std::string search_i;
	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First name" << "|"
			  << std::setw(10) << "Last name" << "|"
			  << std::setw(10) << "Nickname" << std::endl;
	while (i < _count)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << _contacts[i].get_first_name() << "|";
		std::cout << std::setw(10) << _contacts[i].get_last_name() << "|";
		std::cout << std::setw(10) << _contacts[i].get_nickname() << std::endl;
		i++;
	}
	std::cout << "Enter index for contact details, MAX_INDEX["<< _count <<"]: ";
	if (!std::getline(std::cin, search_i))
	{
		std::cout << "\nExiting phonebook.\n";
		std::exit(1);
	}
	if (!is_valid_search(search_i))
	{
		std::cout << "Error: invalid index." << std::endl;
		return ;
	}
	int index = std::stoi(search_i);
	if (index >= 1 && index <= _count)
	{
		_contacts[index - 1].view_contact();
	}
	else
		std::cout << "Error: invalid index." << std::endl;
}

std::string PhoneBook::get_contact(std::string prompt)
{
	std::string input;
	while (input.empty())
	{
		std::cout << prompt ;
		if (!std::getline(std::cin, input))
		{
			std::cout << "\nExiting phonebook.\n";
			std::exit(1);
		}
		if (input.empty())
			std::cout << "Error: field can't be empty." << std::endl;
	}
	return input;
}

bool PhoneBook::is_valid_search(std::string index)
{
	bool is_valid = true;

	if (index.empty())
		is_valid = false;
	else
	{
		if (index.length() > 9)
			is_valid = false;
		else
		{
			for (size_t i = 0; i < index.length(); i++)
			{
				if (!std::isdigit(index[i]))
				{
					is_valid = false;
					break ;
				}
			}
		}
	}
	return is_valid;
}
