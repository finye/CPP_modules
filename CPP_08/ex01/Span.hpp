#pragma once
#include <iostream>

class Span
{
	public:
		Span();
		~Span();
		Span(unsigned int n);
		Span(const Span &src);
		Span& operator=(const Span &rhs);
	private:
		unsigned int _maxN;
};
