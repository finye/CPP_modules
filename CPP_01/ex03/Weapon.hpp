/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 09:36:50 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/12 18:36:02 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#define RESET	"\033[0m"
#define GREEN	"\033[32m"
#define WHITE	"\033[37m"
#define MAGENTA	"\033[35m"


#include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		const std::string& getType() const;
		void setType(std::string new_type);
	private:
		std::string _type;
};

#endif
