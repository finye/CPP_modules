/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:13:55 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/09 13:01:13 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("wrong cat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->WrongAnimal::operator=(rhs);
	}
	return *this;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat sound: wrong meoooooow" << std::endl;
}
