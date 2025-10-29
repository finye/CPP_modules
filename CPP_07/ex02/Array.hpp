#pragma once
#include <iostream>

template <typename T>
class Array
{
	public:
		Array(): _n(0), _arr(nullptr){}
		Array(unsigned int n): _n(n), _arr(n > 0 ? new T[n] : nullptr){}
		~Array() { delete[] _arr; }
		Array(const Array& src): _n(src._n), _arr(src._n > 0 ? new T[src._n] : nullptr)
		{
			for (unsigned int i = 0; i < src._n; i++)
				_arr[i] = src._arr[i];
		}
		Array &operator =(const Array &rhs)
		{
			if (this == &rhs)
				return *this;

			delete[] _arr;
			_n = rhs._n;

			_arr = (_n > 0) ? new T[_n] : nullptr;
			for (unsigned int i = 0; i < _n; i++)
				_arr[i] = rhs._arr[i];

			return *this;
		}

		T& operator[](unsigned int n)
		{
			if (n >= _n)
				throw std::out_of_range("Error: index is out of range");
			return _arr[n];
		}

		const T& operator[](unsigned int n) const
		{
			if (n >= _n)
				throw std::out_of_range("Error: index is out of range");
			return _arr[n];
		}

		unsigned int size() const {return _n;}

	private:
		unsigned int _n;
		T *_arr;
};
