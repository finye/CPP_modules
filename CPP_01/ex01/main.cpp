/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:30:00 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/11 00:48:27 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zomzom;
	int N = 50;
	zomzom = zombieHorde(N, "Mutoch");

	for (int i=0; i < N; i++)
	{
		std::cout << i << " : ";
 		zomzom->announce();
	}
	delete[] zomzom;
	return 0;
}
