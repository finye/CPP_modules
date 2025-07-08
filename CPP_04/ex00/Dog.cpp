/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:41:07 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/08 19:00:08 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog Default constructor called" << std::endl;
}
Dog::Dog(Dog const &src)
{
	std::cout << "Dog copy constructor called" << std::endl;
}
Dog &Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
}
Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}
