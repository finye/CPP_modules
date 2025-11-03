#include "Span.hpp"
#include <vector>

int main()
{
	std::cout << "___good spans___" << std::endl;
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
		std::cerr << e.what() << '\n';
	}

	std::cout << "___empty spans___" << std::endl;
	try
	{
		Span sp = Span(0);
		sp.addNumber(6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span sp = Span(0);
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "___add numbers using range___" << std::endl;
	try
	{
		std::vector<int> vec;
		for (int i = 0; i < 10000; i++)
			vec.push_back(i);

		Span sp = Span(10000);
		sp.addRange(vec.begin(), vec.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


}
