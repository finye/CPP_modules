#include "iter.hpp"
#include <iostream>


int main()
{
	int intArr[] = { 1, 2 ,3};
	float floatArr[] = {1.1f, 1.2f, 1.3f, 1.4f, 1.5f};
	double doubleArr[] = {1.1, 1.2, 1.3, 1.4, 1.5};
	char charArr[] = { 'a', 'b', 'c'};
	std::string strArr[] = {"yolo", "smile", "autumn", "cpp", "yay"};

	const int intArrConst[] = { 1, 2 ,3};
	const char charArrConst[] = { 'a', 'b', 'c'};
	const std::string strArrConst[] = {"yolo", "smile", "autumn", "cpp", "yay"};

	size_t len = sizeof(intArr) / sizeof(int);
	iter(intArr, len, print<int>);
	std::cout << std::endl;

	len = sizeof(floatArr) / sizeof(float);
	iter(floatArr, len, print<float>);
	std::cout << std::endl;

	iter(doubleArr, std::size(doubleArr), print<double>); // does size work?
	std::cout << std::endl;

	iter(charArr, 3, print<char>);
	std::cout << std::endl;

	iter(strArr, 5, print<std::string>);
	std::cout << std::endl;

	iter(intArrConst, 3, print<int>);
	std::cout << std::endl;

	iter(charArrConst, 3, print<char>);
	std::cout << std::endl;

	iter(strArrConst, 5, print<std::string>);
	std::cout << std::endl;
}
