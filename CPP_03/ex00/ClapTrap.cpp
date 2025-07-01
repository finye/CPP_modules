/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:00:16 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/01 15:58:40 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{}
ClapTrap::ClapTrap(std::string name): _name(name),_hitPoints(10), _energyPoints(10), _attackDamage(0)
{}

ClapTrap::~ClapTrap(void)
{}
ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
		this->_hitPoints = this->_hitPoints;
	}
	return *this;
}