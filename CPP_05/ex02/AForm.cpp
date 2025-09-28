/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 21:19:57 by fsolomon          #+#    #+#             */
/*   Updated: 2025/09/27 12:52:15 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("default"), _isSigned(false), _signingGrade(150), _executingGrade(150), _target("default")
{
}
AForm::AForm(std::string name, int gradeToSign, int gradeToexec, std::string target) : _name(name), _isSigned(false), _signingGrade(gradeToSign), _executingGrade(gradeToexec), _target(target)
{
	if (gradeToSign <= 1 || gradeToexec <= 1)
		throw GradeTooHighException();
	if (gradeToSign >= 150 || gradeToexec >= 150)
		throw GradeTooLowException();
}

AForm::~AForm(void)
{
}

AForm::AForm(AForm const &src) : _name(src._name),
								 _isSigned(src._isSigned),
								 _signingGrade(src._signingGrade),
								 _executingGrade(src._executingGrade)
{
}

AForm &AForm::operator=(AForm const &rhs)
{
	if (this != &rhs)
	{
		_isSigned = rhs._isSigned;
	}
	return *this;
}

const std::string &AForm::getName() const
{
	return _name;
}
const std::string &AForm::getTarget() const
{
	return _target;
}

bool AForm::getIsSigned() const
{
	return _isSigned;
}

int AForm::getSignGrade() const
{
	return _signingGrade;
}

int AForm::getExecGrade() const
{
	return _executingGrade;
}

void AForm::beSigned(Bureaucrat b)
{
	if (b.getGrade() <= _signingGrade)
		_isSigned = true;
	else
		throw GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Form grade is too high"; // TODO : remove the form part later ??
}
const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low to sign the form";
}
const char *AForm::FormNotSignedException::what() const throw()
{
	return "Form is not signed";
}
std::ostream &operator<<(std::ostream &o, AForm const &src)
{
	o << "Form name: " << src.getName() << ", status: " << src.getIsSigned()
	  << ", signGrade: " << src.getSignGrade() << ", execGrade: "
	  << src.getExecGrade() << std::endl;
	return o;
}

void AForm::execCheck(Bureaucrat const &executor) const
{
	if (!_isSigned)
		throw FormNotSignedException();
	if (executor.getGrade() > _executingGrade)
		throw GradeTooLowException();
	executeForm();
}
