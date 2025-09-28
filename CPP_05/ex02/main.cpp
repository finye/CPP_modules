/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 20:47:20 by fsolomon          #+#    #+#             */
/*   Updated: 2025/09/28 14:52:00 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		ShrubberyCreationForm treeForm("--1223");
		Bureaucrat Anya("Anya", 42);
		Anya.signForm(treeForm);
		Anya.executeForm(treeForm);

		RobotomyRequestForm robotErmi("Ermi");
		Anya.signForm(robotErmi);
		Anya.executeForm(robotErmi);

		PresidentialPardonForm freeGemma("Gemma");
		Bureaucrat Leon("Leon", 5);
		Leon.signForm(freeGemma);
		Leon.executeForm(freeGemma);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
