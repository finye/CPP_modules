#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("presidentialForm", 25, 5), _target("default")
{
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}
PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("presidentialForm", 25, 5), _target(target)
{
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src), _target(src._target)
{
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (&rhs != this)
	{
		AForm::operator=(rhs);
		_target = rhs._target;
	}
	return (*this);
}
void PresidentialPardonForm::executeForm() const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
