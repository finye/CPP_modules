#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "here in the contact class\n";
}

Contact::~Contact()
{
	std::cout << "Contact destruction\n";
}
void Contact::sayhi()
{
	std::cout << "Hiiiii\n";
}

void Contact::set_first_name(std::string name)
{
	this->_first_name = name;
}
void Contact::set_last_name(std::string name)
{
	this->_last_name = name;
}
void Contact::set_nick_name(std::string name)
{
	this->_nick_name = name;
}
void Contact::set_phone_num(int num)
{
	this->_phone_number = num;
}
void Contact::set_secret(std::string secret)
{
	this->_darkest_secret = secret;
}
std::string Contact::get_first_name(Contact c)
{
	return c._first_name;
}
std::string Contact::get_last_name(Contact c)
{
	return c._last_name;
}
std::string Contact::get_nick_name(Contact c)
{
	return c._darkest_secret;
}
int Contact::get_phone_num(Contact c)
{
	return c._phone_number;
}
std::string Contact::get_secret(Contact c)
{
	return c._darkest_secret;
}