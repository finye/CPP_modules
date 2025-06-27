/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 16:15:57 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/27 17:17:55 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <limits.h>
#include <cmath>

class Fixed
{
public:
	Fixed(void);						// canonical
	~Fixed(void);						// canonical
	Fixed(Fixed const &src);			// canonical
	Fixed &operator=(Fixed const &rhs); // canonical
	Fixed(const int num);
	Fixed(const float num);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	// Overload functions for the 6 comparison operators: >, <, >=, <=, == and !=
	bool operator>(Fixed const &rhs) const;
	bool operator<(Fixed const &rhs) const;
	bool operator>=(Fixed const &rhs) const;
	bool operator<=(Fixed const &rhs) const;
	bool operator==(Fixed const &rhs) const;
	bool operator!=(Fixed const &rhs) const;

	// Overload function for the 4 arithmetic operators: +,-, *, and /
	Fixed operator+(Fixed const &rhs) const;
	Fixed operator-(Fixed const &rhs) const;
	Fixed operator*(Fixed const &rhs) const;
	Fixed operator/(Fixed const &rhs) const;

	// Overload functios for pre and post increment/decrement operators
	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);

	static Fixed& min(Fixed &fixed1, Fixed &fixed2);
	const static Fixed & min(Fixed const &fixed1, Fixed const &fixed2);
	static Fixed& max(Fixed &fixed1, Fixed &fixed2);
	const static Fixed & max(Fixed const &fixed1, Fixed const &fixed2);

private:
	int _fixedValue;
	static const int _fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &src);
#endif
