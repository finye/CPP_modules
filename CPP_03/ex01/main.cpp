/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:00:19 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/03 17:11:30 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap lily("lily");
	ScavTrap bee(lily);
	bee.attack("lily");
	bee.takeDamage(20);
	bee.guardGate();

	std::cout << std::endl;
	std::cout << "bee's hitpoints: " << bee.getHitPoints() << std::endl;
	std::cout << "bee's attackDamage: " << bee.getAttackDamage() << std::endl;
	std::cout << "bee's energyPoints: " << bee.getEnergyPoints() << std::endl;
	
	std::cout << std::endl;
	
	ScavTrap newBee(lily);
	std::cout << "newBee's hitpoints: " << newBee.getHitPoints() << std::endl;
	std::cout << "newBee's attackDamage: " << newBee.getAttackDamage() << std::endl;
	std::cout << "newBee's energyPoints: " << newBee.getEnergyPoints() << std::endl;
}
