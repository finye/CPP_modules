#include "Span.hpp"

Span::Span(unsigned int n): _size(n)
{
}

void Span::addNumber(int num)
{
	if (_span.size() >= _size)
		throw std::overflow_error("addNumber: Span overflow!");
	_span.insert(num);
}

unsigned int	Span::shortestSpan()
{
	if (_span.size() < 2)
		throw std::length_error("shortestSpan: needs atleast 2 elements in span");

	unsigned int shortest = std::numeric_limits<unsigned int>::max();
	auto it = _span.begin();
	auto nx = std::next(it);
	while( nx != _span.end())
	{
		long long diff = static_cast<long long>(*nx) - static_cast<long long>(*it);
		shortest = std::min(shortest, static_cast<unsigned int>(diff));
		it++;
		nx++;
	}
	return shortest;
}

unsigned int	Span::longestSpan()
{
	if (_span.size() < 2)
		throw std::length_error("longestSpan: needs atleast 2 elements in span");

	long long minVal =  static_cast<long long>(*_span.begin());
	long long maxVal =  static_cast<long long>(*_span.rbegin());

	return static_cast<unsigned int>(maxVal - minVal);
}
