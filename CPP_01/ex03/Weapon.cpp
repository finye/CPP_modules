/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 09:36:55 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/12 18:36:22 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
	std::cout << GREEN << "Weapon constructor called with type: " << type << RESET << std::endl;
}

const std::string& Weapon::getType() const
{
	return _type;
}

void Weapon::setType(std::string new_type)
{
	_type = new_type;
}
