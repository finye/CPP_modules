/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:32:55 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/10 22:40:02 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	//heap allocated zombie
	Zombie* zombie;

	zombie = newZombie("Heeermi");
	zombie->announce();

	//need to manually delete heap-allocated memory
	delete zombie;

	//stack allocated zombie
	//automatically destroyed when function ends
	randomChump("Yenunu");
}
