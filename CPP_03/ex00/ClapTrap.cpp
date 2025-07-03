/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:00:16 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/03 09:27:07 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor called with Name: " << _name << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called on ClapTrap : " << _name << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const &src) : _name(src._name), _hitPoints(src._hitPoints),
										  _energyPoints(src._energyPoints), _attackDamage(src._attackDamage)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
		this->_hitPoints = rhs._hitPoints;
	}
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has NO energy points to attack with" << std::endl;
		return;
	}
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has NO hit points to attack with" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name
			  << " attacks " << target << ", causing "
			  << _attackDamage << " points of damage! pew pew" << std::endl;
	_energyPoints--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead...(tears)" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name
			  << " took a damage of "
			  << amount
			  << std::endl;

	if (amount > _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << (_hitPoints ? " is still alive!" : " died!") << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has NO energy points to get a Repair" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " hit points before repair : " << _hitPoints << std::endl;
	_hitPoints += amount;
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " got a repairing service of amount : " << amount << std::endl;
	std::cout << "ClapTrap " << _name << " hit points after repair : " << _hitPoints << std::endl;
}
