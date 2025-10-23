#pragma once
#include <iostream>
#include <cstdint>

struct Data
{
	int id;
	std::string name;
	int age;
};

class Serializer
{
	public:
		Serializer() = delete;
		~Serializer() = delete;
		Serializer(const Serializer &src) = delete;
		Serializer& operator=(const Serializer &rhs) = delete;

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};
