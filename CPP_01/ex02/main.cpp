/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 08:35:10 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/11 09:26:23 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	//stringPTR: A pointer to the string.
	std::string *stringPTR = &str;
	//stringREF: A reference to the string.
	std::string &stringREF = str;

	std::cout << &str << " : The memory address of the string variable." << std::endl;
	std::cout << stringPTR << " : The memory address held by stringPTR."<< std::endl;
	std::cout << &stringREF << " : The memory address held by stringREF."<< std::endl;

	std::cout << str << " : The value of the string variable."<< std::endl;
	std::cout << *stringPTR << " : The value pointed to by stringPTR."<< std::endl;
	std::cout << stringREF << " : The value pointed to by stringREF."<< std::endl;
}
