/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:00:15 by fsolomon          #+#    #+#             */
/*   Updated: 2025/09/26 10:08:35 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat a("aLow", 151);
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
