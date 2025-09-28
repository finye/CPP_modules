/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 20:48:25 by fsolomon          #+#    #+#             */
/*   Updated: 2025/09/28 14:49:19 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubbery creation", 145, 137, "default")
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("shrubbery creation", 145, 137, target)
{
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src)
{
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (&rhs != this)
	{
		AForm::operator=(rhs);
	}
	return (*this);
}
// TODO: better shruberry and remove the file on fclean?
void ShrubberyCreationForm::executeForm() const
{
	std::string tree =
		"       _-_\n"
		"    /~~   ~~\\\n"
		" /~~         ~~\\\n"
		"{               }\n"
		" \\  _-     -_  /\n"
		"   ~  \\\\ //  ~\n"
		"       | |     \n"
		"       | |     \n"
		"   \\/ // \\\\ \\/\n";
	std::string fileName = this->getTarget() + "_shrubbery";
	std::ofstream file(fileName.c_str());
	if (file.is_open())
	{
		file << tree;
		file.close();
	}
	else
	{
		std::cout << "Error: Could not create shrubbery file" << std::endl;
	}
}
