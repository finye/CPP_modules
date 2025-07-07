/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 09:45:57 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/04 10:24:21 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
public:
	FragTrap(void); // canonical
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);		// canonical
	FragTrap &operator=(FragTrap &rhs); // canonical
	~FragTrap(void);					// canonical
	void highFivesGuys(void);
};
#endif
