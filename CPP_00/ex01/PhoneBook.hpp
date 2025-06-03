#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void get_contact(Contact contact);
};

#endif