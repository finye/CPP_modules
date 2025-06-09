#include "Contact.hpp"

Contact::Contact(): _first_name(""), _last_name(""), _nickname(""), _phone_number(""), _darkest_secret(""){}

void Contact::set_first_name(std::string name)
{
	this->_first_name = name;
}
void Contact::set_last_name(std::string name)
{
	this->_last_name = name;
}
void Contact::set_nickname(std::string name)
{
	this->_nickname = name;
}
void Contact::set_phone_num(std::string num)
{
	this->_phone_number = num;
}
void Contact::set_secret(std::string secret)
{
	this->_darkest_secret = secret;
}
std::string Contact::get_first_name() const
{
	return _first_name;
}
std::string Contact::get_last_name() const
{
	return _last_name;
}
std::string Contact::get_nickname() const
{
	return _nickname;
}
void Contact::view_contact()
{
	std::cout << "Firstname: " << _first_name << std::endl;
	std::cout << "Lastname: " << _last_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone number: " << _phone_number << std::endl;
	std::cout << "Darkest secret: " << _darkest_secret << std::endl;
}
