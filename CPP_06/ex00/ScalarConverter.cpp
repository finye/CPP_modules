#include "ScalarConverter.hpp"

void	ScalarConverter::convert(const std::string &input)
{
	//first detect the type of the input passed
	//covert it to its actual type
	//then convert it explicitly to the other datatypes • char • int • float • double
	if (isChar(input))
	{
		std::cout << "isChar" << std::endl;
	}
	else if (isInt(input))
	{
		std::cout << "isInt" << std::endl;
	}
	else if (isFloat(input))
	{
		std::cout << "isFloat" << std::endl;
	}
	else if (isDouble(input))
	{
		std::cout << "isDouble" << std::endl;
	}
	else
	{
		std::cout << "Error: Invalid input" << std::endl;
	}
}

bool	ScalarConverter::isChar(const std::string &input)
{
	//length one and printable character, not a digit
	return (input.length() == 1 && std::isprint(input[0]) && !isdigit(input[0]));
}
bool	ScalarConverter::isInt(const std::string &input)
{
	static const std::regex intLiterals("^[+-]?\\d+$");
	 if (!std::regex_match(input, intLiterals))
	 	return false;
	try
	{
		long long temp = std::stoll(input);
		if (temp >= std::numeric_limits<int>::min() &&
			temp <= std::numeric_limits<int>::max())
				return true;
		return false;
	}
	catch(const std::exception& e)
	{
		return false;
	}
}
bool	ScalarConverter::isFloat(const std::string &input)
{
	static const std::regex floatPseudoLiterals("^[+-]?(nanf|inff)$");
	if (std::regex_match(input,floatPseudoLiterals))
		return true;
	static const std::regex floatLiterals("^[+-]?\\d+\\.\\d+f$");
	return std::regex_match(input, floatLiterals);
}
bool	ScalarConverter::isDouble(const std::string &input)
{
	static const std::regex doublePseudoLiterals("^[+-]?(nan|inf)$");
	if (std::regex_match(input, doublePseudoLiterals))
		return true;
	static const std::regex doubleLiterals("^[+-]?\\d+\\.\\d+$");
	return std::regex_match(input, doubleLiterals);
}
