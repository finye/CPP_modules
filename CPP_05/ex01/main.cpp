/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:00:15 by fsolomon          #+#    #+#             */
/*   Updated: 2025/09/26 10:18:44 by fsolomon         ###   ########.fr       */
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
		std::cout << e.what() << std::endl;
	}

	try
	{
		Form highGrade("highGrade", -42, 10);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Bureaucrat a("a", 100);
	Bureaucrat b("b", 50);
	Form c("c", 75, 75);

	a.signForm(c);
	b.signForm(c);

	std::cout << c;

	return 0;
}
