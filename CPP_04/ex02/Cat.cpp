/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:41:10 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/10 10:33:53 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &src) : Animal(src), _brain(new Brain(*src._brain))
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->Animal::operator=(rhs);
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	if (_brain)
		delete _brain;
}

void Cat::makeSound() const
{
	std::cout << "Cat: meow meeoow meeeooow" << std::endl;
}

Brain *Cat::getBrain() const
{
	return _brain;
}
