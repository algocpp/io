
// algocpp/io/input.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#ifndef ALGOCPP_IO_INPUT
#define ALGOCPP_IO_INPUT

#include <iostream>
#include <sstream>
#include <vector>
#include <string>

template <typename T>
std::istream &operator>>(std::istream &os, std::vector<T> &v)
{
	if (v.size() != 0)
	{
		for (unsigned long long i = 0; i < v.size(); i++)
		{
			os >> v[i];
		}
	}
	else
	{
		std::string inp;
		std::stringstream ss;

		std::getline(os, inp);
		ss << inp;

		T tmp;
		while (!ss.eof())
		{
			ss >> tmp;

			v.emplace_back(tmp);
		}
	}

	return os;
}

#endif // ALGOCPP_IO_INPUT
