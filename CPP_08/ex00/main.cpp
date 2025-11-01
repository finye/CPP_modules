#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>


int main()
{
	std::cout << "\n ___Testing std::vector___" << std::endl;
	std::vector<int> vec = {1, 2, 3, 4, 5, 3, 7};
	std::vector<int> empty;
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 3);
		std::cout << "Found value \"" << *it << "\"" << " at position ["
		<< std::distance(vec.begin(), it) << "]" << std::endl;

		it = easyfind(vec, 1);
		std::cout << "Found value \"" << *it << "\"" << " at position ["
		<< std::distance(vec.begin(), it) << "]" << std::endl;

		it = easyfind(empty, 1);
		std::cout << "Found value \"" << *it << "\"" << " at position ["
		<< std::distance(vec.begin(), it) << "]" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	try
	{
		std::vector<int>::iterator it = easyfind(vec, 99);
		std::cout << "Found value \"" << *it << "\"" << " at position ["
		<< std::distance(vec.begin(), it) << "]" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}


	std::cout << "\n ___Testing std::list___" << std::endl;
	std::list<int> list = {10, 20, 30, 40, 50, 30, -10};

	try
	{
		std::list<int>::iterator it = easyfind(list, 30);
		std::cout << "Found value \"" << *it << "\"" << " at position ["
		<< std::distance(list.begin(), it) << "]" << std::endl;

		it = easyfind(list, -10);
		std::cout << "Found value \"" << *it << "\"" << " at position ["
		<< std::distance(list.begin(), it) << "]" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	try
	{
		std::list<int>::iterator it = easyfind(list, 100);
		std::cout << "Found value \"" << *it << "\"" << " at position ["
		<< std::distance(list.begin(), it) << "]" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n ___Testing std::deque___" << std::endl;
	std::deque<int> dq = {-5, -4, -3, -2, -1, 0};

	try
	{
		std::deque<int>::iterator it = easyfind(dq, -3);
		std::cout << "Found value \"" << *it << "\"" << " at position ["
		<< std::distance(dq.begin(), it) << "]" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	try
	{
		std::deque<int>::iterator it = easyfind(dq, 5);
		std::cout << "Found value \"" << *it << "\"" << " at position ["
		<< std::distance(dq.begin(), it) << "]" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
