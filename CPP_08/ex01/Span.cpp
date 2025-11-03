#include "Span.hpp"

Span::Span(unsigned int n): _size(n)
{
}

void Span::addNumber(int num)
{
	if (_span.size() >= _size)
		throw std::overflow_error(" Exception: Span overflow!");
	_span.insert(num);
}
