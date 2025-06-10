/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:32:45 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/10 10:16:40 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class Zombie
{
	public:
		~Zombie();
		Zombie(std::string name);
		void announce (void);
	private:
		std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
