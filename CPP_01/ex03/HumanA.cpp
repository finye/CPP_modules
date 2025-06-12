/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:29:49 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/12 18:50:24 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//HumanA uses weapon reference (always have a weapon)
HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weaponA(weapon)
{}
void HumanA::attack() const
{
	std::cout << _name << " attacks with their " << _weaponA.getType() << std::endl;
}
