#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		ShrubberyCreationForm treeForm("tree");
		Bureaucrat Anya("Anya", 42);
		Anya.signForm(treeForm);
		Anya.executeForm(treeForm);

		RobotomyRequestForm robotErmi("Ermi");
		Anya.signForm(robotErmi);
		Anya.executeForm(robotErmi);

		PresidentialPardonForm freeGemma("Gemma");
		Bureaucrat Leon("Leon", 5);
		Leon.signForm(freeGemma);
		Leon.executeForm(freeGemma);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
