/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:37:36 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/16 13:04:28 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: /harlFilter <Comment Level>" << std::endl;
		std::cout << "Comment level options: DEBUG, INFO, WARNING or ERROR" << std::endl;
		return 1;
	}

	std::string input(argv[1]);
	if (input.empty())
	{
		std::cout << "Empty string is not allowed" << std::endl;
		return 1;
	}
	Harl harl;
	std::string commentLevels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int logStart = -1;
	for (int i = 0; i < 4; i++)
	{
		if (input == commentLevels[i])
			logStart = i;
	}

	/*
	The switch statement jumps to the matching case label
	and then continues executing sequentially
	until it hits a break statement or the end of the switch block.
	*/
	switch (logStart)
	{
	case 0:
		harl.complain("DEBUG");
	case 1:
		harl.complain("INFO");
	case 2:
		harl.complain("WARNING");
	case 3:
		harl.complain("ERROR");
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}
