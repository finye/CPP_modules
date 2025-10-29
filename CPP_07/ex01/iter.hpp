#pragma once
#include <iostream>

template <typename T>
void iter(T *arr,  size_t arrLen, void (* funct)(T &elem))
{
	for (size_t i = 0; i < arrLen; i++)
	{
		funct(arr[i]);
	}
}

template <typename T>
void iter(const T *arr, size_t arrLen, void (* funct)(const T &elem))
{
	for (size_t i = 0; i < arrLen; i++)
	{
		funct(arr[i]);
	}
}

template <typename T>
void print(const T &elem)
{
	std::cout << elem << std::endl;
}

