#include "Array.hpp"

template <typename T>
Array<T>::Array(): _n(0), _arr(nullptr)
{
}

template <typename T>
Array<T>::Array(unsigned int n): _n(n), _arr(n > 0 ? new T[n] : nullptr)
{
}

template <typename T>
Array<T>::~Array()
{
	delete[] _arr;
}

template <typename T>
Array<T>::Array(const Array& src): _n(src._n), _arr(src._n > 0 ? new T[src._n] : nullptr)
{
	for (unsigned int i = 0; i < src._n; i++)
		_arr[i] = src._arr[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &rhs)
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

template <typename T>
T& Array<T>::operator[](unsigned int n)
{
	if (n >= _n)
		throw std::out_of_range("Error: index is out of range");
	return _arr[n];
}

template <typename T>
const T& Array<T>::operator[](unsigned int n) const
{
	if (n >= _n)
		throw std::out_of_range("Error: index is out of range");
	return _arr[n];
}

template <typename T>
unsigned int  Array<T>::size() const
{
	return _n;
}
