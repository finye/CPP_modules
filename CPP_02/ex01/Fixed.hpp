/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsolomon <fsolomon@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 15:04:29 by fsolomon          #+#    #+#             */
/*   Updated: 2025/06/23 16:19:04 by fsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

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

private:
	int _numberValue;
	static const int _fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &src);
#endif
