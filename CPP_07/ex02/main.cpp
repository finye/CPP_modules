#include <iostream>
#include "Array.hpp"
#define MAX_VAL 750

void printNames(const Array<std::string>& names);

int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
		if (i < 5)
		{
			std::cout << "\nnumbers[" << i << "] = " << numbers[i] << std::endl;
			std::cout << "mirror[" << i <<"] = " << mirror[i] << std::endl;
		}
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		std::cout << "\n---Assignment operator check---" << std::endl;
		for (int i = 0; i < 5; i++)
		{
			std::cout << "\ntmp[" << i << "] = " << tmp[i] << std::endl;
	 	}
		std::cout << "\n---Copy constructor check---" << std::endl;
		Array<int> test(tmp);
		for (int i = 0; i < 5; i++)
		{
			std::cout << "\ntest[" << i << "] = " << test[i] << std::endl;
	 	}
	}

	std::cout << std::endl;

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---change numbers elements---"<<  std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
		if (i < 5)
		{
			std::cout << "\nnumbers[" << i << "] = " << numbers[i] << std::endl;
			//std::cout << "\ntmp[" << i << "] = " << tmp[i] << std::endl;
			//std::cout << "\ntest[" << i << "] = " << test[i] << std::endl;
		}
	}
	delete [] mirror;

	std::cout << "\n---array of strings---\n"<<  std::endl;

	Array<std::string> names(5);
	names[0] = "Anychka";
	names[1] = "Bebe";
	names[2] = "Colin";
	names[3] = "Dimi";
	names[4] = "Ethan";

	printNames(names);
	return 0;
}

void printNames(const Array<std::string>& names)
{
	for (unsigned int i = 0; i < names.size(); i++)
	{
		std::cout << "names[" << i << "] = "<< names[i] << std::endl;
	}
}
