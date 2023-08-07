
// algocpp/io/input.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#ifndef ALGOCPP_IO_INPUT
#define ALGOCPP_IO_INPUT

#include <iostream>
#include <vector>

template <typename T>
std::istream &operator>>(std::istream &os, std::vector<T> &v)
{
	for (unsigned long long i = 0; i < v.size(); i++)
	{
		os >> v[i];
	}

	return os;
}

#endif // ALGOCPP_IO_INPUT
