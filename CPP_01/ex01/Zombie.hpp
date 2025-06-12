/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:30:14 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/12 17:30:58 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

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
