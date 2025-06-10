/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:30:14 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/11 00:44:38 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	nameTheZombie(std::string name);
		void	announce (void);
	private:
		std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
