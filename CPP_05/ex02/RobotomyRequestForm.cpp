/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 20:47:32 by fsolomon          #+#    #+#             */
/*   Updated: 2025/10/15 09:46:13 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomyForm", 72, 45, "defaultTarget")
{
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}
RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("robotomyForm", 72, 45, target)
{
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src)
{
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (&rhs != this)
	{
		AForm::operator=(rhs);
	}
	return (*this);
}
void RobotomyRequestForm::executeForm() const
{
	std::cout << "--- drilling noises ---" << std::endl;

	if (std::rand() % 2 == 0)
	{
		std::cout << this->getTarget() << " has been robotomized successfully!" << std::endl;
	}
	else
	{
		std::cout << this->getTarget() << " robotomy failed!" << std::endl;
	}
}
