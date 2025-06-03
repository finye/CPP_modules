#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>

class Contact
{
	public:
		Contact();
		~Contact();
		void sayhi();
		void set_first_name(std::string name);
		void set_last_name(std::string name);
		void set_nick_name(std::string name);
		void set_phone_num(int num);
		void set_secret(std::string secret);
		std::string get_first_name(Contact c);
		std::string get_last_name(Contact c);
		std::string get_nick_name(Contact c);
		int get_phone_num(Contact c);
		std::string get_secret(Contact c);
	private:
		std::string	_first_name;
		std::string _last_name;
		std::string _nick_name;
		int			_phone_number;
		std::string	_darkest_secret;
};

#endif