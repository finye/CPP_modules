#include "ScalarConverter.hpp"

void	ScalarConverter::convert(const std::string &input)
{
	//first detect the type of the input passed
	//covert it to its actual type
	//then convert it explicitly to the other datatypes • char • int • float • double
	if (isChar(input))
	{
		std::cout << "isChar" << std::endl;
		char c = input[0];
		convertFromChar(c);
	}
	else if (isInt(input))
	{
		std::cout << "isInt" << std::endl;
		int i = std::stoi(input);
		convertFromInt(i);
	}
	else if (isFloat(input))
	{
		std::cout << "isFloat" << std::endl;
		float f = std::stof(input);
		convertFromFloat(f);
	}
	else if (isDouble(input))
	{
		std::cout << "isDouble" << std::endl;
		double d = std::stod(input);
		convertFromDouble(d);
	}
	else
	{
		std::cout << "Error: Invalid input" << std::endl;
	}
}

bool	ScalarConverter::isChar(const std::string &input)
{
	return (input.length() == 1
			&& std::isprint(static_cast<unsigned char>(input[0]))
			&& !std::isdigit(static_cast<unsigned char>(input[0])));
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

void	ScalarConverter::convertFromChar(char c)
{
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;

	std::cout << "float: ";
	printFloat(static_cast<float>(c));
	std::cout << std::endl;

	std::cout << "double: ";
	printDouble(static_cast<double>(c));
	std::cout << std::endl;
}

void	ScalarConverter::convertFromInt(int i)
{
	std::cout << "char: ";
	if (i < 0 || i > 127)
		std::cout << "impossible";
	else if (!std::isprint(static_cast<unsigned char>(i)))
		std::cout << "Non displayable";
	else
		std::cout << "'" << static_cast<char>(i) << "'";
	std::cout << std::endl;

	std::cout << "int: " << i << std::endl;

	std::cout << "float: ";
	printFloat(static_cast<float>(i));
	std::cout << std::endl;

	std::cout << "double: ";
	printDouble(static_cast<double>(i));
	std::cout << std::endl;
}

void	ScalarConverter::convertFromFloat(float f)
{
	std::cout << "char: ";
	if (std::isnan(f) || std::isinf(f))
		std::cout << "impossible";
	else if (f < 0 || f > 127 || f != static_cast<int>(f))
		std::cout << "impossible";
	else if (!std::isprint(static_cast<unsigned char>(static_cast<int>(f))))
		std::cout << "Non displayable";
	else
		std::cout << "'" << static_cast<char>(f) << "'";
	std::cout << std::endl;

	std::cout << "int: ";
	if (std::isnan(f) || std::isinf(f))
		std::cout << "impossible";
	else if(f < std::numeric_limits<int>::min() || f > std::numeric_limits<int>::max())
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(f);
	std::cout << std::endl;

	std::cout << "float: ";
	printFloat(f);
	std::cout << std::endl;

	std::cout << "double: ";
	printDouble(static_cast<double>(f));
	std::cout << std::endl;

}
void	ScalarConverter::convertFromDouble(double d)
{
	std::cout << "char: ";
	if (std::isnan(d) || std::isinf(d))
		std::cout << "impossible";
	else if (d < 0 || d > 127 || d != static_cast<int>(d))
		std::cout << "impossible";
	else if (!std::isprint(static_cast<unsigned char>(static_cast<int>(d))))
		std::cout << "Non displayable";
	else
		std::cout << "'" << static_cast<char>(d) << "'";
	std::cout << std::endl;

	std::cout << "int: ";
	if (std::isnan(d) || std::isinf(d))
		std::cout << "impossible";
	else if(d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(d);
	std::cout << std::endl;

	std::cout << "float: ";
	if (std::isnan(d))
		std::cout << "nanf";
	else if (std::isinf(d))
		std::cout << (d > 0 ? "+inff" : "-inff");
	else if (d < std::numeric_limits<float>::lowest() || d > std::numeric_limits<float>::max())
		std::cout << "impossible";
	else
		printFloat(static_cast<float>(d));
	std::cout << std::endl;

	std::cout << "double: ";
	printDouble(d);
	std::cout << std::endl;
}

void	ScalarConverter::printFloat(float f)
{
	if (std::isnan(f))
		std::cout << "nanf";
	else if (std::isinf(f))
		std::cout << (f > 0 ? "+inff" : "-inff");
	else
		std::cout << std::fixed << f << "f";
}

void	ScalarConverter::printDouble(double d)
{
	if (std::isnan(d))
		std::cout << "nan";
	else if (std::isinf(d))
		std::cout << (d > 0 ? "+inf" : "-inf");
	else
		std::cout << std::fixed << d ;
}
