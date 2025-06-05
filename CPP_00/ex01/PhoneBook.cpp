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
	std::cout << "please add your first name\n";
	std::cin >> f_name;
	c.set_first_name(f_name);
	std::cout << "printing from the get function-----";
	std::cout << c.get_first_name(c);
	std::cout << "please add your last name\n";
	std::cin >> l_name;
	c.set_last_name(l_name);
	std::cout << "printing here from the get function-----";
	std::cout << c.get_last_name(c);

	std::cout << "please add your nick name\n";
	std::cin >> n_name;
	c.set_nickname(n_name);
	std::cout << "printing here from the get function-----";
	std::cout << c.get_nickname(c);

	std::cout << "please add your phone number\n";
	std::cin >> phone_num;
	c.set_phone_num(phone_num);
	std::cout << "printing here from the get function-----";
	std::cout << c.get_phone_num(c);

	std::cout << "please add your darkest secret\n";
	std::cin >> secret;
	c.set_secret(secret);
	std::cout << "printing here from the get function-----";
	std::cout << c.get_secret(c);

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
	int i = 0;
	std::cout << "printing the contacts" << std::endl;
	std::cout << std::setw(10) << std::right << "Index" << "|"
			  << std::setw(10) << std::right << "First Name" << "|"
			  << std::setw(10) << std::right << "Last Name" << "|"
			  << std::setw(10) << std::right << "Nickname" << std::endl;
	while (i < _count)
	{
		std::cout << std::setw(10) << std::right << _contacts[i].get_first_name(_contacts[i]) << "|";
		std::cout << std::setw(10) << _contacts[i].get_last_name(_contacts[i]) << std::endl;
		i++;
	}
}
