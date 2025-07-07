/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 11:23:57 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/07 12:56:12 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("default_clap_name", 100, 50, 30), _name("default")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", 100, 50, 30), _name(name)
{
	std::cout << "DiamondTrap constructor called with Name: " << _name << std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src), _name(src._name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}
DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->ClapTrap::operator=(rhs);
		_name = rhs._name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called on " << _name << std::endl;
}
void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
void DiamondTrap::whoAmI()
{
	std::cout << "Who am I? a precious DiamondTrap : " << _name
			  << " or a ClapTrap : " << ClapTrap::_name << " ?" << std::endl;
}
