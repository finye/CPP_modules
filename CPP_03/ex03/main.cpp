/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:00:19 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/04 13:07:37 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	std::cout << " Default Diamond constructor\n";
	DiamondTrap dimi;

	std::cout << "\n Diamond with name" << std::endl;
	DiamondTrap diamond("Bling");

	std::cout << std::endl;
	diamond.whoAmI();
	diamond.attack("dimi");
	diamond.takeDamage(50);
	diamond.beRepaired(25);
	diamond.highFivesGuys();
	diamond.guardGate();

	std::cout << "\n Diamond copy" << std::endl;
	DiamondTrap diamond2(diamond);

	diamond2.whoAmI();
	std::cout << "diamond2 hit points: " << diamond2.getHitPoints() << std::endl;
	std::cout << std::endl;
}
