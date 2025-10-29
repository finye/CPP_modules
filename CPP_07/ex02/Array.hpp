#pragma once
#include <iostream>

template <typename T>
class Array
{
	public:
		Array(): _n(0), _arr(nullptr){}
		Array(unsigned int n): _n(n), _arr(new T[n]){};
		~Array()
		{
			if (_arr != nullptr)
				delete[] _arr;
		}
		Array(const Array& src): _n(src._n), _arr(new T[src._n])
		{
			for (unsigned int i = 0; i < src._n; i++)
				_arr[i] = src._arr[i];
		}
		Array &operator =(const Array &rhs)
		{
			if (this == rhs)
				return *this;

			if (_arr)
			{
				delete[] _arr;
				_arr = nullptr;
			}
			_n = rhs._n;

			_arr = new T[rhs._n];
			for (unsigned int i = 0; i < src._n; i++)
				_arr[i] = rhs._arr[i];

			return *this;
		}

		T& operator [](unsigned int n)
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
