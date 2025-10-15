/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 21:19:59 by fsolomon          #+#    #+#             */
/*   Updated: 2025/10/15 12:35:47 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
private:
	const std::string	_name;
	bool				_isSigned;
	const int			_signingGrade;
	const int			_executingGrade;
	const std::string	_target;

public:
	AForm(void);
	virtual ~AForm(void);
	AForm(std::string name, int gradeToSign, int gradeToexec, std::string target);
	AForm(AForm const &src);
	AForm &operator=(AForm const &rhs);

	const std::string&	getName() const;
	const std::string&	getTarget() const;
	bool				getIsSigned() const;
	int					getSigningGrade() const;
	int					getExecGrade() const;
	void				beSigned(const Bureaucrat& b);
	void				execute(Bureaucrat const &executor) const;
	virtual void		executeForm() const = 0;
	
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
	class FormNotSignedException : public std::exception
	{
	public:
		const char *what() const throw() override;
	};
};

std::ostream &operator<<(std::ostream &o, AForm const &src);
