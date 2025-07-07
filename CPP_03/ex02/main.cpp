/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:00:19 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/07 10:19:11 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap Eetu;
	std::cout << std::endl;
	std::cout << "Eetu's hitpoints: " << Eetu.getHitPoints() << std::endl;
	std::cout << "Eetu's attackDamage: " << Eetu.getAttackDamage() << std::endl;
	std::cout << "Eetu's energyPoints: " << Eetu.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	FragTrap Gemma("Gemma");
	std::cout << std::endl;

	Eetu.attack("Gemma");
	Gemma.takeDamage(20);
	Gemma.highFivesGuys();
	std::cout << std::endl;

	std::cout << "Gemma's hitpoints: " << Gemma.getHitPoints() << std::endl;
	std::cout << "Gemma's attackDamage: " << Gemma.getAttackDamage() << std::endl;
	std::cout << "Gemma's energyPoints: " << Gemma.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	FragTrap Arthur("Arthur");
	std::cout << std::endl;
	FragTrap Ford(Arthur);
	std::cout << std::endl;
	Ford.highFivesGuys();
	std::cout << std::endl;
}
