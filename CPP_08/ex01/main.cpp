#include "Span.hpp"
#include <vector>

int main()
{
	std::cout << "___add numbers to span___" << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n___add -ve numbers___" << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(-20);
		sp.addNumber(-10);
		sp.addNumber(0);
		sp.addNumber(10);
		sp.addNumber(20);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n___INTMIN and INTMAX___" << std::endl;
	try
	{
		Span sp = Span(2);
		sp.addNumber(-2147483648);
		sp.addNumber(2147483647);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n___empty spans___" << std::endl;
	try
	{
		Span sp = Span(0);
		sp.addNumber(6);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		Span sp = Span(0);
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n___add numbers using range___" << std::endl;
	try
	{
		std::vector<int> vec;
		for (int i = 0; i < 50000; i++)
			vec.push_back(i);

		Span sp = Span(50000);
		sp.addRange(vec.begin(), vec.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n___range overflow___" << std::endl;
	try
	{
		std::vector<int> vec = {1, 2, 3, 4, 5, 6};
		Span sp = Span(3);
		sp.addRange(vec.begin(), vec.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

}
