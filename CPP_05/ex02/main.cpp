/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 20:47:20 by fsolomon          #+#    #+#             */
/*   Updated: 2025/10/15 15:10:29 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		std::srand(std::time(nullptr));
		Bureaucrat Boss("Boss", 1);
		Bureaucrat Supervisor("Supervisor", 42);
		Bureaucrat Employee("Employee", 150);

		std::cout << Boss << std::endl;
		std::cout << Supervisor << std::endl;
		std::cout << Employee << std::endl;

		// sign: 145, exec: 137
		ShrubberyCreationForm shrubberyForm("tree");
		std::cout << shrubberyForm << std::endl;
		Employee.signForm(shrubberyForm);	   // X
		Employee.executeForm(shrubberyForm);   // X
		Supervisor.executeForm(shrubberyForm); // X
		Supervisor.signForm(shrubberyForm);
		Employee.executeForm(shrubberyForm); // X
		Supervisor.executeForm(shrubberyForm);
		std::cout << std::endl;

		// sign: 72, exec: 45
		RobotomyRequestForm robotForm("Ermi");
		std::cout << robotForm << std::endl;
		Employee.signForm(robotForm); // X
		Supervisor.signForm(robotForm);
		Employee.executeForm(robotForm); // X
		Supervisor.executeForm(robotForm);
		Supervisor.executeForm(robotForm);
		Boss.executeForm(robotForm);
		Boss.executeForm(robotForm);
		std::cout << std::endl;

		// sign: 25, exec: 5
		PresidentialPardonForm pardonForm("Mati");
		std::cout << pardonForm << std::endl;
		Employee.signForm(pardonForm);	 // X
		Supervisor.signForm(pardonForm); // X
		Boss.signForm(pardonForm);
		Employee.executeForm(pardonForm);	// X
		Supervisor.executeForm(pardonForm); // X
		Boss.executeForm(pardonForm);
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Supervisor("Supervisor", 42);
		ShrubberyCreationForm treeForm("tree");
		treeForm.execute(Supervisor);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat invalid("Invalid", 0);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}
