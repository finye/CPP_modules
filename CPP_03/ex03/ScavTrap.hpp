/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:41:55 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/07 12:52:24 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : virtual public ClapTrap
{

public:
	ScavTrap(void); // canonial
	ScavTrap(std::string name);
	~ScavTrap(void);						  // canonical
	ScavTrap(ScavTrap const &src);			  // canonical
	ScavTrap &operator=(ScavTrap const &rhs); // canonical
	void attack(const std::string &target);
	void guardGate();
};

#endif
