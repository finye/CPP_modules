#pragma once
#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, int val)
{
	typename T::iterator it = std::find(container.begin(), container.end(), val);
	if (it == container.end())
	{
		throw std::runtime_error("Element " + std::to_string(val) + " not found");
	}
	return it;
}

template <typename T>
typename T::const_iterator easyfind(const T& container, int val)
{
	typename T::const_iterator it  = std::find(container.begin(), container.end(), val);
	if (it == container.end())
	{
		throw std::runtime_error("Element " + std::to_string(val) + " not found");
	}
	return it;
}
