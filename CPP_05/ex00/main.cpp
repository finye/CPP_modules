/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:00:15 by fsolomon          #+#    #+#             */
/*   Updated: 2025/10/14 10:27:36 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat noName;
		std::cout << noName << std::endl;
		noName.incrementGrade();
		std::cout << noName << std::endl;

		Bureaucrat karen("karen", 5);
		noName = karen;
		std::cout << karen << std::endl;
		std::cout << noName << std::endl;

		for (int i = 0; i < 4; ++i)
			karen.incrementGrade();

		std::cout << "After for loop: " << karen << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl
				  << std::endl;
	}
	try
	{
		Bureaucrat b("bHigh", -10);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl
				  << std::endl;
	}
	try
	{
		Bureaucrat c("Caro", 149);
		std::cout << c << std::endl;
		c.decrementGrade();
		std::cout << c << std::endl;
		c.decrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl
				  << std::endl;
	}
	return 0;
}
