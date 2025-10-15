/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 20:47:20 by fsolomon          #+#    #+#             */
/*   Updated: 2025/10/15 10:25:49 by fsolomon         ###   ########.fr       */
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

		// sign: 145, exec: 137
		ShrubberyCreationForm treeForm("tree");
		Employee.signForm(treeForm);//X
		Employee.executeForm(treeForm); //X
		Supervisor.executeForm(treeForm);//X
		Supervisor.signForm(treeForm);
		Employee.executeForm(treeForm); //X
		Supervisor.executeForm(treeForm);
		std::cout << std::endl;

		//sign: 72, exec: 45
		RobotomyRequestForm robotErmi("Ermi");
		Employee.signForm(robotErmi); //X
		Supervisor.signForm(robotErmi);
		Employee.executeForm(robotErmi); //X
		Supervisor.executeForm(robotErmi);
		Supervisor.executeForm(robotErmi);
		Boss.executeForm(robotErmi);
		Boss.executeForm(robotErmi);
		std::cout << std::endl;

		//sign: 25, exec: 5
		PresidentialPardonForm pardonShefafas("Mati");
		Employee.signForm(pardonShefafas); //X
		Supervisor.signForm(pardonShefafas); //X
		Boss.signForm(pardonShefafas);
		Employee.executeForm(pardonShefafas); //X
		Supervisor.executeForm(pardonShefafas); //X
		Boss.executeForm(pardonShefafas);
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout <<  "Error: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Supervisor("Supervisor", 42);
		ShrubberyCreationForm treeForm("tree");
		treeForm.execute(Supervisor);
	}
	catch (std::exception &e)
	{
		std::cout <<  "Error: " << e.what() << std::endl;
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
