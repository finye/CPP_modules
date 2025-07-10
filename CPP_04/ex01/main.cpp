/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:18:25 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/10 11:22:34 by fsolomon         ###   ########.fr       */
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

	std::cout << "\n____checking deep copy_____\n"
			  << std::endl;

	Dog ogDog;
	ogDog.getBrain()->putIdea(0, "OG dog idea");
	std::cout << "ogDog idea:  " << ogDog.getBrain()->getIdea(0) << std::endl;

	Dog copyDog;
	copyDog = ogDog;
	std::cout << "copy Dog idea:  " << copyDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "\n____copy dog has it's own new idea_____\n"
			  << std::endl;
	copyDog.getBrain()->putIdea(0, "COPY dog new amazing idea");
	std::cout << "copy Dog idea:  " << copyDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "ogDog idea:  " << ogDog.getBrain()->getIdea(0) << std::endl;

	std::cout << "\n--- Checking if brains are different objects ---" << std::endl;
	std::cout << "Original brain address: " << ogDog.getBrain() << std::endl;
	std::cout << "Copied brain address: " << copyDog.getBrain() << std::endl;

	return 0;
}
