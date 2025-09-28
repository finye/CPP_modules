/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 20:48:20 by fsolomon          #+#    #+#             */
/*   Updated: 2025/09/27 20:48:21 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomy request", 72, 45, "default")
{
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}
RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("robotomy request", 72, 45, target)
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
	srand(time(NULL));
	std::cout << "--- drilling noises ---" << std::endl;

	if (rand() % 2 == 0)
	{
		std::cout << this->getTarget() << " has been robotomized successfully!" << std::endl;
	}
	else
	{
		std::cout << this->getTarget() << " robotomy failed!" << std::endl;
	}
}
