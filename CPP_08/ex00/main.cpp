#include "easyfind.hpp"
#include <iostream>
#include <vector>


int main()
{
	std::cout << "\n ___Testing std::vector___" << std::endl;
	std::vector<int> v = {1, 2, 3, 4, 5, 3, 7};

	try
	{
		std::vector<int>::iterator it = easyfind(v, 3);
		std::cout << "Found value \"" << *it << "\"" << " at position [" << std::distance(v.begin(), it) << "]" << std::endl;

		it = easyfind(v, 1);
		std::cout << "Found value \"" << *it << "\"" << " at position [" << std::distance(v.begin(), it) << "]" << std::endl;

		it = easyfind(v, 99);
		std::cout << "Found value \"" << *it << "\"" << " at position [" << std::distance(v.begin(), it) << "]" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
