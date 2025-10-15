/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:00:13 by fsolomon          #+#    #+#             */
/*   Updated: 2025/10/15 13:30:42 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;

public:
	Bureaucrat(void);
	~Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat &operator=(Bureaucrat const &rhs);

	int					getGrade() const;
	const std::string&	getName() const;

	void				incrementGrade();
	void				decrementGrade();
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

std::ostream &operator<<(std::ostream &o, Bureaucrat const &src);
