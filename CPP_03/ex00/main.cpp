/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 15:00:19 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/03 09:32:02 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Gemma;
	ClapTrap Maria("Maria");
	ClapTrap Ethan("Ethan");
	// nobody = Maria;
	ClapTrap Leon(Maria);

	Maria.attack("Ethan");
	Ethan.takeDamage(0);
	Ethan.takeDamage(1);
	Ethan.beRepaired(100000000);
}
