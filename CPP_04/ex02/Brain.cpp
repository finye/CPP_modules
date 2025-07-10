/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:27:26 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/10 13:32:01 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "idea: " + std::to_string(i + 1);
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = src._ideas[i];
}

Brain &Brain::operator=(Brain const &rhs)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdea(int i) const
{
	if (i < 0 || i >= 100)
		return "Error: no idea";
	return _ideas[i];
}

void Brain::putIdea(int i, std::string const &newIdea)
{
	if (i >= 0 && i < 100)
	{
		_ideas[i] = newIdea;
	}
}
