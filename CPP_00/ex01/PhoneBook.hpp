#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void addContact();
		void searchContacts();
	private:
		static const int _max_contacts = 8;
		Contact _contacts[_max_contacts];
		int 	_count;
		int		_oldest_contact;
};

#endif
