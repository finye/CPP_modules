/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:37:31 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/16 13:08:05 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level)
{
	std::string commentLevels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Harl::*funcPtrs[4])(void) = {&Harl::_debug, &Harl::_info,
									   &Harl::_warning, &Harl::_error};

	for (int i = 0; i < 4; i++)
	{
		if (level == commentLevels[i])
			(this->*funcPtrs[i])();
	}
}

void Harl::_debug(void)
{
	std::cout << "[DEBUG] \nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
}
void Harl::_info(void)
{
	std::cout << "[INFO] \nI cannot believe adding extra bacon costs more money.\n"
			  << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
			  << std::endl;
}
void Harl::_warning(void)
{
	std::cout << "[WARNING] \nI think I deserve to have some extra bacon for free.\n"
			  << "I’ve been coming for years whereas you started working here since last month."
			  << std::endl;
}
void Harl::_error(void)
{
	std::cout << "[ERROR] \nThis is unacceptable! I want to speak to the manager now." << std::endl;
}
