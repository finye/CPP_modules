/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 21:19:57 by fsolomon          #+#    #+#             */
/*   Updated: 2025/10/14 20:49:05 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("defaultForm"), _isSigned(false), _signingGrade(150), _executingGrade(150)
{
}
Form::Form(std::string name, int gradeToSign, int gradeToexec) : _name(name), _isSigned(false), _signingGrade(gradeToSign), _executingGrade(gradeToexec)
{
	if (gradeToSign < 1 || gradeToexec < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToexec > 150)
		throw GradeTooLowException();
}

Form::~Form(void)
{
}

Form::Form(Form const &src) : _name(src._name),
							  _isSigned(src._isSigned),
							  _signingGrade(src._signingGrade),
							  _executingGrade(src._executingGrade)
{
}

Form &Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		_isSigned = rhs._isSigned;
	}
	return *this;
}

const std::string &Form::getName() const
{
	return _name;
}

bool Form::getIsSigned() const
{
	return _isSigned;
}

int Form::getSigningGrade() const
{
	return _signingGrade;
}

int Form::getExecGrade() const
{
	return _executingGrade;
}

void Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() <= _signingGrade)
		_isSigned = true;
	else
		throw GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream &operator<<(std::ostream &o, Form const &src)
{
	o << "Form name: " << src.getName()
	  << ", status: " << (src.getIsSigned() ? "signed" : "not signed")
	  << ", signingGrade: " << src.getSigningGrade()
	  << ", executingGrade: " << src.getExecGrade() << std::endl;
	return o;
}
