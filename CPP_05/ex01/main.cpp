/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:00:15 by fsolomon          #+#    #+#             */
/*   Updated: 2025/10/15 10:04:06 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(void)
{
	try
	{
		Form lowGrade("lowGrade", 10, 420);
	}
	catch (std::exception &e)
	{
		std::cout <<  "Error: " << e.what() << std::endl;
	}
	try
	{
		Form highGrade("highGrade", -42, 10);
	}
	catch (std::exception &e)
	{
		std::cout <<  "Error: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat a("a", 100);
		Bureaucrat b("b", 50);

		Form c("c", 75, 75);
		Form defaultForm;

		std::cout << c;
		std::cout << defaultForm;

		a.signForm(c);
		b.signForm(c);
		std::cout << c;

		defaultForm = c;
		std::cout << defaultForm;
	}
	catch (const std::exception &e)
	{
		std::cout <<  "Error: " << e.what() << std::endl;
	}
	return 0;
}
