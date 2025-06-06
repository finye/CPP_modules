#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>

class Contact
{
	public:
		Contact();
		~Contact();
		void set_first_name(std::string name);
		void set_last_name(std::string name);
		void set_nickname(std::string name);
		void set_phone_num(std::string num);
		void set_secret(std::string secret);
		std::string get_first_name(Contact c);
		std::string get_last_name(Contact c);
		std::string get_nickname(Contact c);
		std::string get_phone_num(Contact c);
		std::string get_secret(Contact c);
		void view_contact();
	private:
		std::string	_first_name;
		std::string _last_name;
		std::string _nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

#endif
