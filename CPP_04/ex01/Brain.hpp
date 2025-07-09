/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:27:23 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/09 16:16:34 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
class Brain
{
private:
	std::string _ideas[100];

public:
	Brain(void);
	Brain(Brain const &src);
	Brain &operator=(Brain const &rhs);
	~Brain(void);
};
#endif
