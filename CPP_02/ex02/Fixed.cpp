/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 16:16:01 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/27 17:38:10 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) : _fixedValue(num << _fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
	std::cout << "_fixedValue after constructor" << _fixedValue << std::endl;
}
Fixed::Fixed(const float num) : _fixedValue(static_cast<int>(roundf(num * (1 << _fractionalBits))))
{
	std::cout << "Float constructor called" << std::endl;
	std::cout << "_fixedValue after constructor" << _fixedValue << std::endl;
}
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}
Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_fixedValue = rhs.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixedValue;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedValue = raw;
}
// converts the fixed-point value to a floating-point value.
float Fixed::toFloat(void) const
{
	return _fixedValue / static_cast<float>(1 << _fractionalBits);
}

// converts the fixed-point value to an integer value.
int Fixed::toInt(void) const
{
	return _fixedValue >> _fractionalBits;
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}

bool Fixed::operator>(Fixed const &rhs) const
{
	return (_fixedValue > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return (_fixedValue < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return (_fixedValue >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return (_fixedValue <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return (_fixedValue == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return (_fixedValue != rhs.getRawBits());
}

Fixed Fixed::operator+(Fixed const &rhs) const
{
	Fixed result;
	result._fixedValue = this->_fixedValue + rhs.getRawBits();
	return result;
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	Fixed result;
	result._fixedValue = this->_fixedValue - rhs.getRawBits();
	return result;
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	Fixed result;
	int64_t temp = static_cast<int64_t>(this->_fixedValue) * rhs._fixedValue;
	temp = temp >> _fractionalBits;
	result._fixedValue = static_cast<int>(temp);
	return result;
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	Fixed result;
	int64_t temp = static_cast<int64_t>(this->_fixedValue) << _fractionalBits;
	result._fixedValue = static_cast<int>(temp / rhs._fixedValue);
	return result;
}

// prefix increment
Fixed& Fixed::operator++()
{
	++_fixedValue;
	return *this;
}

// postfix increment
Fixed	Fixed::operator++(int)
{
	Fixed temp = *this;
	++_fixedValue;
	return temp;
}

//prefix decrement
Fixed& Fixed::operator--()
{
	--_fixedValue;
	return *this;
}

//postfix decrement
Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--_fixedValue;
	return temp;
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	return (fixed2 < fixed1) ? fixed2 : fixed1;
}

const Fixed &Fixed::min(Fixed const &fixed1, Fixed const &fixed2)
{
	return (fixed2 < fixed1) ? fixed2 : fixed1 ;
}

 Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	return (fixed2 > fixed1) ? fixed2 : fixed1;
}

const Fixed &Fixed::max(Fixed const &fixed1, Fixed const &fixed2)
{
	return (fixed2 > fixed1) ? fixed2 : fixed1;
}
