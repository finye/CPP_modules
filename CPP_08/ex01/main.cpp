#include "Span.hpp"

int main()
{
	try
	{
		Span x(5);
		x.addNumber(1);
		x.addNumber(4);
		x.addNumber(13);
		x.addNumber(24);
		x.addNumber(35);
		std::cout << x.shortestSpan() << std::endl;
		std::cout << x.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}