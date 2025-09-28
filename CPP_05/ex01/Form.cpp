/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 21:19:57 by fsolomon          #+#    #+#             */
/*   Updated: 2025/09/28 15:14:10 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("default"), _isSigned(false), _signGrade(150), _execGrade(150)
{
}
Form::Form(std::string name, int gradeToSign, int gradeToexec) : _name(name), _isSigned(false), _signGrade(gradeToSign), _execGrade(gradeToexec)
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
							  _signGrade(src._signGrade),
							  _execGrade(src._execGrade)
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

int Form::getSignGrade() const
{
	return _signGrade;
}

int Form::getExecGrade() const
{
	return _execGrade;
}

void Form::beSigned(Bureaucrat b)
{
	if (b.getGrade() <= _signGrade)
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
	o << "Form name: " << src.getName() << ", status: " << src.getIsSigned()
	  << ", signGrade: " << src.getSignGrade() << ", execGrade: "
	  << src.getExecGrade() << std::endl;
	return o;
}
