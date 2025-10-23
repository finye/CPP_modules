#include <iostream>
#include "Serializer.hpp"

int main()
{
	Data A = {"A", 55};

	std::cout << "Struct data"<< std::endl;
	std::cout << A.name << std::endl;
	std::cout << A.age << std::endl;


	uintptr_t uintPtrA = Serializer::serialize(&A);
	Data *ptrA = Serializer::deserialize(uintPtrA);

	std::cout << "Deseriealized data"<< std::endl;
	std::cout << ptrA->name << std::endl;
	std::cout << ptrA->age << std::endl;
}