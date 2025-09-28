/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 20:47:06 by fsolomon          #+#    #+#             */
/*   Updated: 2025/09/27 20:47:07 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}
Intern::Intern(const Intern &src)
{
	(void)src;
}
Intern &Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}
AForm *Intern::createPardonForm(const std::string &target)
{
	return new PresidentialPardonForm(target);
}

AForm *Intern::createShrubberyForm(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}

AForm *Intern::createRobotomyForm(const std::string &target)
{
	return new RobotomyRequestForm(target);
}

// formsPtr stores the functions' pointers, not create objects
AForm *Intern::makeForm(const std::string &formName, const std::string &target)
{
	AForm *(*formsPtr[3])(const std::string &target) = {&Intern::createPardonForm,
														&Intern::createRobotomyForm,
														&Intern::createShrubberyForm};
	for (int i = 0; i < 3; i++)
	{
		if (_forms[i] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (formsPtr[i](target)); // creates obj
		}
	}
	std::cout << formName << " Form doesn't exist!" << std::endl;
	return nullptr;
}
