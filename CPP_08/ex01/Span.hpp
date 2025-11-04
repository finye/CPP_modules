#pragma once
#include <iostream>
#include <set>
#include <limits>
#include <algorithm>

class Span
{
	public:
		Span() = delete;
		Span(unsigned int n);
		~Span() = default;
		Span(const Span &src) = default;
		Span& operator=(const Span &rhs) = default;

		void			addNumber(int num);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

		template <typename T>
		void addRange(T begin, T end)
		{
			if (_span.size() + std::distance(begin, end) > _size)
				throw std::length_error("addRange: Span overflow!");
			_span.insert(begin, end);
		}

	private:
		unsigned int		_size;
		std::multiset<int>	_span;
};
