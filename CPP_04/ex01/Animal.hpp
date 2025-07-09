/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:18:16 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/09 13:23:12 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string _type;

public:
	Animal(void);
	Animal(std::string const type);
	Animal(Animal const &src);
	Animal &operator=(Animal const &rhs);
	virtual ~Animal(void);

	virtual void makeSound() const;
	std::string getType() const;
};
#endif
