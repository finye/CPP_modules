#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout<< "here in phonebook\n";
}

PhoneBook::~PhoneBook()
{
	std::cout<< "phoneBook destruction\n";
}
void PhoneBook::get_contact(Contact c)
{
	std::string f_name;
	std::string l_name;
	std::cout<< "getting the contact here\n";
	c.sayhi();
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
}