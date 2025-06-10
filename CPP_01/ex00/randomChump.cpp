/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 09:41:50 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/10 10:15:40 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//It creates a zombie, name it, and the zombie announces itself.
void randomChump( std::string name )
{
	Zombie new_zombie(name);
	new_zombie.announce();
}
