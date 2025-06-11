/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:30:00 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/11 08:24:30 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombeja;
	int N = 25;

	zombeja = zombieHorde(N, "Mutoch");
	for (int i=0; i < N; i++)
	{
		std::cout << i << " : ";
 		zombeja[i].announce();
	}

	delete[] zombeja;
	return 0;
}
