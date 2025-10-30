#include "iter.hpp"

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

	iter(intArr, std::size(intArr), print<int>);
	std::cout << std::endl;

	iter(floatArr, std::size(floatArr), print<float>);
	std::cout << std::endl;

	iter(doubleArr, std::size(doubleArr), print<double>);
	std::cout << std::endl;

	iter(charArr, std::size(charArr), print<char>);
	std::cout << std::endl;

	iter(strArr, std::size(strArr), print<std::string>);
	std::cout << std::endl;

	iter(intArrConst, std::size(intArrConst), print<int>);
	std::cout << std::endl;

	iter(charArrConst, std::size(charArrConst), print<char>);
	std::cout << std::endl;

	iter(strArrConst, std::size(strArrConst), print<std::string>);
	std::cout << std::endl;
}
