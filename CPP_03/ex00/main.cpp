/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:00:19 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/07 11:36:44 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Gemma;
	ClapTrap Maria("Maria");
	ClapTrap Ethan("Ethan");
	ClapTrap Leon(Gemma);

	Maria.attack("Ethan");
	Ethan.takeDamage(0);
	Ethan.takeDamage(10);
	Ethan.takeDamage(1);
	Ethan.beRepaired(100000);
	Ethan.attack("Maria");
}
