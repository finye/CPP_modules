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
	if (_span.empty())
		throw std::length_error("shortestSpan: Span is empty");
	if (_size == 1)
		throw std::length_error("shortestSpan: Span has only 1 element");
	
	unsigned int shortest = std::numeric_limits<unsigned int>::max();
	auto it = _span.begin();
    auto nx = std::next(it);
	while( nx != _span.end())
	{
		unsigned int curr = static_cast<unsigned int>(*nx) - static_cast<unsigned int>(*it);
		if (curr < shortest) 
			shortest = curr;
		it++;
		nx++;
	}
	return shortest;
}

unsigned int	Span::longestSpan()
{
	if (_span.empty())
		throw std::length_error("longestSpan: Span is empty");
	if (_size == 1)
		throw std::length_error("longestSpan: Span has only 1 element");
	
	unsigned int begin =  static_cast<unsigned int>(*_span.begin());
	unsigned int rbegin =  static_cast<unsigned int>(*_span.rbegin());
	
	return rbegin - begin;
}
