/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:18:18 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/08 18:58:42 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal Default constructor called" << std::endl;
}
Animal::Animal(Animal &const src)
{
	std::cout << "Animal copy constructor called" << std::endl;
}
Animal &Animal::operator=(Animal const &rhs)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
}
Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}
