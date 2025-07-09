/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:13:51 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/09 13:26:21 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("unknown")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const type) : _type(type)
{
	std::cout << "WrongAnimal constructor called with type: " << type << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) : _type(src._type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		_type = rhs._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called for: " << _type << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "default WrongAnimal sound: awuuuuuuuuuuu" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return _type;
}
