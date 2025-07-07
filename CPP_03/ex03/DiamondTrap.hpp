/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 11:23:54 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/07 12:52:36 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string _name;

public:
	DiamondTrap(void); // canonical
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &src);			// canonical
	DiamondTrap &operator=(DiamondTrap const &rhs); // canonical
	~DiamondTrap(void);								// canonical
	void attack(const std::string &target);
	void whoAmI();
};
#endif
