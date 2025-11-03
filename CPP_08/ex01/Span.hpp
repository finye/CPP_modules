#pragma once
#include <iostream>
#include <set>

class Span
{
	public:
		Span() = delete;
		Span(unsigned int n);
		~Span() = default;
		Span(const Span &src) = default;
		Span& operator=(const Span &rhs) = default;
		void addNumber(int num);
	private:
		unsigned int _size;
		std::multiset<int> _span;
};
