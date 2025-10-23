#include <iostream>
#include "Serializer.hpp"

int main()
{
	Data data = {1, "Dan", 55};

	std::cout << "struct data Address: " << &data << std::endl;
	std::cout << "data: "
			<< data.id  << ", "
			<< data.name << ", "
			<< data.age <<  std::endl;

	uintptr_t uintPtrA = Serializer::serialize(&data);
	Data *deserialized = Serializer::deserialize(uintPtrA);

	std::cout << "\ndeserialized data Address: " << deserialized << std::endl;
	std::cout << "deserialized data: "
			<< deserialized->id  << ", "
			<< deserialized->name << ", "
			<< deserialized->age <<  std::endl;

	return 0;
}
