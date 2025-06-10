/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:32:51 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/10 10:16:48 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << "contructor called on : " << _name << std::endl;
}
Zombie::~Zombie()
{
	std::cout << "destructor called on : " << _name << std::endl;
}
void Zombie::announce (void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

