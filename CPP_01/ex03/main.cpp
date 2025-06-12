/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:36:18 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/12 18:40:06 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	std::cout << WHITE << "=== Testing HumanA ===" << RESET << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		std::cout << MAGENTA << "Weapon changed" << RESET << std::endl;
		bob.attack();
	}
	std::cout << WHITE << "\n=== Testing HumanB ===" << RESET << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		std::cout << MAGENTA << "Weapon changed" << RESET << std::endl;
		jim.attack();
	}
	return 0;
}
