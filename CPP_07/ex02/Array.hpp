#pragma once
#include <iostream>

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array& src);
		Array &operator =(const Array &rhs);

		T& operator[](unsigned int n);
		const T& operator[](unsigned int n) const;
		unsigned int size() const;

	private:
		unsigned int _n;
		T *_arr;
};

#include "Array.tpp"
