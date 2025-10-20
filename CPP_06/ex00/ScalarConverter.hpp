#pragma once
#include <iostream>

class ScalarConverter
{
	public:
		ScalarConverter() = delete;
		~ScalarConverter() = delete;
		ScalarConverter(const ScalarConverter &src) = delete;
		ScalarConverter& operator=(const ScalarConverter &rhs) = delete;

		static void	convert(const std::string &original);
};