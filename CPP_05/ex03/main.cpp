/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 20:47:11 by fsolomon          #+#    #+#             */
/*   Updated: 2025/10/15 15:15:21 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		std::srand(std::time(nullptr));
		Intern someRandomIntern;
		Bureaucrat pomo("Pomo", 1);
		Bureaucrat eiPomo("eiPomo", 150);
		
		AForm *rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		AForm* shrub = someRandomIntern.makeForm("shrubbery creation", "Garden");
		AForm* pardon = someRandomIntern.makeForm("presidential pardon", "Criminal");
		std::cout << std::endl;
		
		// sign: 72, exec: 45
		if (rrf)
        {
			std::cout << *rrf;
			eiPomo.signForm(*rrf); //X
            pomo.signForm(*rrf);
            pomo.executeForm(*rrf);
			eiPomo.executeForm(*rrf); //X
            delete rrf;
        }
		std::cout << std::endl;
		// sign: 145, exec: 137
		
		if (shrub)
        {
            std::cout << *shrub;
			eiPomo.signForm(*shrub); //X
            pomo.signForm(*shrub);
            pomo.executeForm(*shrub);
			eiPomo.executeForm(*shrub); //X
            delete shrub;
        }
		std::cout << std::endl;
		// sign: 25, exec: 5
		if (pardon)
        {
            std::cout << *pardon;
			eiPomo.signForm(*pardon); //X
            pomo.signForm(*pardon);
            pomo.executeForm(*pardon);
			eiPomo.executeForm(*pardon); //X
            delete pardon;
        }
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	try
	{
		Intern someRandomIntern;
		AForm* invalid = someRandomIntern.makeForm("invalid form", "invalid");
		if (invalid)
			delete invalid;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}
