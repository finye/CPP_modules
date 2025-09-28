/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 20:47:01 by fsolomon          #+#    #+#             */
/*   Updated: 2025/09/27 20:47:03 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	std::string _forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	static AForm *createPardonForm(const std::string &target);
	static AForm *createShrubberyForm(const std::string &target);
	static AForm *createRobotomyForm(const std::string &target);

public:
	Intern();
	~Intern();
	Intern(const Intern &src);
	Intern &operator=(const Intern &rhs);
	AForm *makeForm(const std::string &formName, const std::string &target);
};
