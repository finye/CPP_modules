/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:41:58 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/07 12:00:59 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("defaultName", 100, 50, 20)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called on " << _name << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap constructor called with Name: " << _name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->ClapTrap::operator=(rhs);
	}
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (_energyPoints == 0)
	{
		std::cout << "Attack [KO], ScavTrap " << _name << " has no energy points" << std::endl;
		return;
	}
	if (_hitPoints == 0)
	{
		std::cout << "Attack [KO], ScavTrap " << _name << " has no hit points" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name
			  << " attacks " << target << ", causing "
			  << _attackDamage << " points of damage! pew pew" << std::endl;
	_energyPoints--;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}
