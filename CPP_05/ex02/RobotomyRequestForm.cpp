#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomyForm", 72, 45), _target("default")
{
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}
RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("robotomyForm", 72, 45), _target(target)
{
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src), _target(src._target)
{
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (&rhs != this)
	{
		AForm::operator=(rhs);
		_target = rhs._target;
	}
	return (*this);
}
void RobotomyRequestForm::executeForm() const
{
	srand(time(NULL));
	std::cout << "--- drilling noises ---" << std::endl;

	if (rand() % 2 == 0)
	{
		std::cout << _target << " has been robotomized successfully!" << std::endl;
	}
	else
	{
		std::cout << _target << " robotomy failed!" << std::endl;
	}
}
