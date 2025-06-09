#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#define RESET	"\033[0m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define CYAN	"\033[36m"

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		void	add_contact();
		void	search_contacts();
	private:
		static const int _max_contacts = 8;
		Contact 		_contacts[_max_contacts];
		int 			_count;
		int				_oldest_contact;
		std::string		get_contact(std::string prompt);
		bool			is_valid_search(std::string index);
		std::string		check_length(std::string const field) const;
};

#endif
