/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 21:19:59 by fsolomon          #+#    #+#             */
/*   Updated: 2025/10/14 20:48:59 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_isSigned;
	const int			_signingGrade;
	const int			_executingGrade;

public:
	Form(void);
	~Form(void);
	Form(std::string name, int gradeToSign, int gradeToexec);
	Form(Form const &src);
	Form &operator=(Form const &rhs);

	const std::string&	getName() const;
	bool				getIsSigned() const;
	int					getSigningGrade() const;
	int					getExecGrade() const;
	void				beSigned(const Bureaucrat& b);

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw() override;
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw() override;
	};
};

std::ostream &operator<<(std::ostream &o, Form const &src);
