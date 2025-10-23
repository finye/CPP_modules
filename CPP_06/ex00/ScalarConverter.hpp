#pragma once
#include <iostream>
#include <limits>
#include <cmath>
#include <regex>
#include <iomanip>

class ScalarConverter
{
	public:
		ScalarConverter() = delete;
		~ScalarConverter() = delete;
		ScalarConverter(const ScalarConverter &src) = delete;
		ScalarConverter& operator=(const ScalarConverter &rhs) = delete;

		static void	convert(const std::string &input);
	private:
		static bool isChar(const std::string &input);
		static bool isInt(const std::string &input);
		static bool isFloat(const std::string &input);
		static bool isDouble(const std::string &input);

		static void convertFromChar(char c);
		static void convertFromInt(int i);
		static void convertFromFloat(float f);
		static void convertFromDouble(double d);

		static void printFloat(float f);
		static void printDouble(double d);
};
