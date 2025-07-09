/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:18:25 by fsolomon          #+#    #+#             */
/*   Updated: 2025/07/09 15:15:22 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;
	std::cout << std::endl;

	std::cout << "\n_____Wrong Animal test_____\n"
			  << std::endl;

	const WrongAnimal *metaWrong = new WrongAnimal();
	const WrongAnimal *iWrong = new WrongCat();

	std::cout << iWrong->getType() << " " << std::endl;

	iWrong->makeSound(); // will not output the cat sound!
	metaWrong->makeSound();

	std::cout << std::endl;
	delete metaWrong;
	delete iWrong;
	std::cout << std::endl;

	WrongCat wrongCat;
	wrongCat.makeSound();
	std::cout << std::endl;
	return 0;
}
