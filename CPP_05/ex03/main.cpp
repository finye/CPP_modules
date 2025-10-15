/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 20:47:11 by fsolomon          #+#    #+#             */
/*   Updated: 2025/10/15 12:24:51 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		std::srand(std::time(nullptr));
		Intern someRandomIntern;
		AForm *rrf = someRandomIntern.makeForm("robotomyForm", "Bender");

		Bureaucrat Ermi("Ermi", 10);
		if (rrf)
		{
			Ermi.signForm(*rrf);
			Ermi.executeForm(*rrf);
		}
		delete rrf;
	}
	catch (const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}
