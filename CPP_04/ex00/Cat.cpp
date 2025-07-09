/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:41:10 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/09 11:09:11 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}
Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
}
Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->Animal::operator=(rhs);
	}
	return *this;
}
Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}
