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
	std::string f_name;
	std::string l_name;
	std::string n_name;
	std::string	phone_num;
	std::string secret;

	std::cout<< "getting the contact info here\n";
	std::cout << "Add first name: ";
	std::cin >> f_name;
	c.set_first_name(f_name);

	std::cout << "Add last name: ";
	std::cin >> l_name;
	c.set_last_name(l_name);

	std::cout << "Add nick name: ";
	std::cin >> n_name;
	c.set_nickname(n_name);

	std::cout << "Add phone number: ";
	std::cin >> phone_num;
	c.set_phone_num(phone_num);

	std::cout << "Add darkest secret: ";
	std::cin >> secret;
	c.set_secret(secret);

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
	std::cout << std::setw(10) << std::right << "Index" << "|"
			  << std::setw(10) << std::right << "First name" << "|"
			  << std::setw(10) << std::right << "Last name" << "|"
			  << std::setw(10) << std::right << "Nickname" << std::endl;
	while (i < _count)
	{
		std::cout << std::setw(10) << std::right << i << "|";
		std::cout << std::setw(10) << std::right << _contacts[i].get_first_name(_contacts[i]) << "|";
		std::cout << std::setw(10) << std::right << _contacts[i].get_last_name(_contacts[i]) << "|";
		std::cout << std::setw(10) << std::right << _contacts[i].get_nickname(_contacts[i]) << std::endl;
		i++;
	}
	std::cout << "Enter index(1 - 8)for contact detail: ";
	std::cin >> search_i;
	int index = std::stoi(search_i);
	if (index >= 0 && index < _count)
		std::cout << "good stuff!\n";
	else
		std::cout << "invalid contact index\n";
}
