/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:32:55 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/10 10:15:00 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	//heap
	Zombie* new_zombie = newZombie("Heeermi");
	new_zombie->announce();

	delete new_zombie;
	//stack
	randomChump("Yenunu");
}
