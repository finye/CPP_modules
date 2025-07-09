/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:18:16 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/09 12:09:40 by fsolomon         ###   ########.fr       */
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
	~Animal(void);

	virtual void makeSound() const;
	std::string getType() const;
};
#endif
