/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:29:54 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/12 18:23:20 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"
class HumanB
{
	public:
		HumanB(std::string name);
		void attack() const;
		void setWeapon(Weapon& new_weapon);
	private:
		std::string _name;
		Weapon		*_weaponB;
};
#endif
