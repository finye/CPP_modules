/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:29:47 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/12 18:23:32 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"
class HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon);
		void attack() const;
	private:
		std::string _name;
		Weapon&	_weaponA;
};
#endif
