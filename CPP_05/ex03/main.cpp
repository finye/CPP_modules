/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 20:47:11 by fsolomon          #+#    #+#             */
/*   Updated: 2025/09/28 15:04:24 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Intern someRandomIntern;
		AForm *rrf = someRandomIntern.makeForm("robotomy request", "Bender");

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
		std::cerr << e.what() << '\n';
	}
}
