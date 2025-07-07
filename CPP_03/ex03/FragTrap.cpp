/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 09:45:55 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/07 12:47:30 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("defaultName", 100, 100, 30)
{
	std::cout << "FragTrap default constructor called" << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap constructor called with Name: " << _name << std::endl;
}
FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}
FragTrap &FragTrap::operator=(FragTrap &rhs)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->ClapTrap::operator=(rhs);
	}
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called on " << _name << std::endl;
}
void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << ": Abeg, give me a Hi Five!!" << std::endl;
}
