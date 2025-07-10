/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:18:18 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/10 13:30:04 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("unkown")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string const type) : _type(type)
{
	std::cout << "Animal constructor called with type: " << type << std::endl;
}

Animal::Animal(Animal const &src) : _type(src._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		_type = rhs._type;
	}
	return *this;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called for: " << _type << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "default animal sound: awuuuuuuuuuuuuuu" << std::endl;
}

std::string Animal::getType() const
{
	return _type;
}
