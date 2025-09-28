/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 20:47:32 by fsolomon          #+#    #+#             */
/*   Updated: 2025/09/27 20:47:33 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomyForm", 72, 45, "default")
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
