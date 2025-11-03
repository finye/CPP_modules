#include "Span.hpp"

int main()
{
	try
	{
		Span x(2);
		x.addNumber(1);
		x.addNumber(1);
		x.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}