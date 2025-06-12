/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:29:52 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/12 18:50:51 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//HumanB uses weapon ptr (may not always have a Weapon)
HumanB::HumanB(std::string name): _name(name), _weaponB(nullptr){}

void HumanB::attack() const
{
	if (_weaponB != nullptr)
		std::cout << _name << " attacks with their " << _weaponB->getType() << std::endl;
}

// store the weapon address
void HumanB::setWeapon(Weapon& new_weapon)
{
	_weaponB = &new_weapon;
}
