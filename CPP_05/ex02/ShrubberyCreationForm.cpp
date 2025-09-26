#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubberyForm", 145, 137), _target("default")
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery", 145, 137), _target(target)
{
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src), _target(src._target)
{
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (&rhs != this)
	{
		AForm::operator=(rhs);
		_target = rhs._target;
	}
	return (*this);
}
// TODO: better shruberry and remove the file on fclean?
void ShrubberyCreationForm::executeForm() const
{
	std::string tree =
		"$$$$$"
		"$$$$$$$";
	std::string fileName = _target + "shruberry";
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
