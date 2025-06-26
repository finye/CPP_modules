/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 16:16:06 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/26 16:57:36 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed a(10000000);
	Fixed b(10000000.01f);
	Fixed c(a + b);
	Fixed d(b - a);
	Fixed e(a * b);

	/* 	if (a < b)
			std::cout << a << " = a is less than b = " << b << std::endl;
		else
			std::cout << a << " = a is greater than b = " << std::endl; */

	std::cout << "a is :" << a << std::endl;
	std::cout << "b is :" << b << std::endl;
	std::cout << "c is :" << c << std::endl;
	std::cout << "d is :" << d << std::endl;
	std::cout << "e is :" << e << std::endl;

	Fixed const z(Fixed(5.05f) / Fixed(2));
	std::cout << "z is :" << z << std::endl;
}
