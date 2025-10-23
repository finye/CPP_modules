#include "ScalarConverter.hpp"

void	ScalarConverter::convert(const std::string &input)
{
	if (isChar(input))
	{
		char c = input[0];
		convertFromChar(c);
	}
	else if (isInt(input))
	{
		int i = std::stoi(input);
		convertFromInt(i);
	}
	else if (isFloat(input))
	{
		try
		{
			float f = std::stof(input);
			convertFromFloat(f);
		}
		catch(const std::exception& e)
		{
			std::cout << "Error: " << e.what() << std::endl;
			return ;
		}
	}
	else if (isDouble(input))
	{
		try
		{
			double d = std::stod(input);
			convertFromDouble(d);
		}
		catch(const std::exception& e)
		{
			std::cout << "Error: " << e.what() << std::endl;
			return ;
		}
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
	static const std::regex floatLiterals("^[+-]?\\d+\\.\\d+([eE][+-]?\\d+)?f$");
	return std::regex_match(input, floatLiterals);
}

bool	ScalarConverter::isDouble(const std::string &input)
{
	static const std::regex doublePseudoLiterals("^[+-]?(nan|inf)$");
	if (std::regex_match(input, doublePseudoLiterals))
		return true;
	static const std::regex doubleLiterals("^[+-]?\\d+\\.\\d+([eE][+-]?\\d+)?$");
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
	if (i < std::numeric_limits<char>::min() || i > std::numeric_limits<char>::max())
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
	printChar(f);
	printInt(f);

	std::cout << "float: ";
	printFloat(f);
	std::cout << std::endl;

	std::cout << "double: ";
	printDouble(static_cast<double>(f));
	std::cout << std::endl;
}

void	ScalarConverter::convertFromDouble(double d)
{
	printChar(d);
	printInt(d);

	std::cout << "float: ";
	if (std::isnan(d))
		std::cout << "nanf";
	else if (std::isinf(d))
		std::cout << (d > 0 ? "+inff" : "-inff");
	else if (d < std::numeric_limits<float>::lowest() ||
			d > std::numeric_limits<float>::max())
		std::cout << "impossible";
	else
		printFloat(static_cast<float>(d));
	std::cout << std::endl;

	std::cout << "double: ";
	printDouble(d);
	std::cout << std::endl;
}

void	ScalarConverter::printChar(double val)
{
	std::cout << "char: ";
	if (std::isnan(val) || std::isinf(val))
		std::cout << "impossible";
	else if (val < std::numeric_limits<char>::min()
			|| val > std::numeric_limits<char>::max()
			|| val != static_cast<int>(val))
		std::cout << "impossible";
	else if (!std::isprint(static_cast<unsigned char>(static_cast<int>(val))))
		std::cout << "Non displayable";
	else
		std::cout << "'" << static_cast<char>(val) << "'";
	std::cout << std::endl;
}

void	ScalarConverter::printInt(double val)
{
	std::cout << "int: ";
	if (std::isnan(val) || std::isinf(val))
		std::cout << "impossible";
	else if(val < std::numeric_limits<int>::min() ||
			val > std::numeric_limits<int>::max())
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(val);
	std::cout << std::endl;
}

void	ScalarConverter::printFloat(float val)
{
	if (std::isnan(val))
		std::cout << "nanf";
	else if (std::isinf(val))
		std::cout << (val > 0 ? "+inff" : "-inff");
	else
		std::cout << std::fixed << std::setprecision(1) << val << "f";
}

void	ScalarConverter::printDouble(double val)
{
	if (std::isnan(val))
		std::cout << "nan";
	else if (std::isinf(val))
		std::cout << (val > 0 ? "+inf" : "-inf");
	else
		std::cout << std::fixed << std::setprecision(1) << val ;
}
