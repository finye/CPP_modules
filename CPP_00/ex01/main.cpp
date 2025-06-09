/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 14:15:22 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/09 14:15:23 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook phone_book;
	std::string cmd;
	while (1)
	{
		std::cout << "Enter command [ADD, SEARCH or EXIT]: ";
		if (!std::getline(std::cin, cmd))
		{
			std::cout << CYAN << "Exiting phonebook.\n" << RESET;
			break;
		}
		if (cmd == "ADD")
			phone_book.add_contact();
		else if (cmd == "SEARCH")
			phone_book.search_contacts();
		else if (cmd == "EXIT")
		{
			std::cout << CYAN << "Exiting phonebook.\n" << RESET;
			break;
		}
		else
		{
			std::cout << RED << "Invalid command, please try again." << RESET << std::endl;
		}
	}
	return 0;
}
