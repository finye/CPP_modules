/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:18:25 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/10 00:56:17 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	delete j; // should not create a leak
	delete i;
	std::cout << "\n____array of animals_____\n"
			  << std::endl;

	Animal *animals[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << "\n____array of animals hanging out together_____\n"
			  << std::endl;

	for (int i = 0; i < 10; i++)
	{
		animals[i]->makeSound();
	}

	std::cout << "\n____array of animals deleted_____\n"
			  << std::endl;

	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
	return 0;
}
