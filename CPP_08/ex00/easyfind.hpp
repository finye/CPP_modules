#pragma once
#include <iostream>

template <typename T>
void easyfind(T& container, int val)
{
	typename T::iterator it = std::find(container.begin(), container.end(), val);
	if (it == container.end())
	{
		// throw
	}
}
