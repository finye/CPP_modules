/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 21:19:59 by fsolomon          #+#    #+#             */
/*   Updated: 2025/09/24 23:40:43 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
private:
	const std::string _name;
	bool _isSigned;
	const int _signingGrade;
	const int _executingGrade;

public:
	AForm(void);
	~AForm(void);
	AForm(std::string name, int gradeToSign, int gradeToexec);
	AForm(AForm const &src);
	AForm &operator=(AForm const &rhs);

	const std::string &getName() const;
	bool getIsSigned() const;
	int getSignGrade() const;
	int getExecGrade() const;
	void beSigned(Bureaucrat b);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class FormNotSignedException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	void execCheck(Bureaucrat const &executor) const;
	virtual void executeForm() const = 0;
};

std::ostream &operator<<(std::ostream &o, AForm const &src);
