
// algocpp/io/input.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#ifndef ALGOCPP_IO_INPUT
#define ALGOCPP_IO_INPUT

#include <iostream>
#include <sstream>
#include <vector>
#include <array>
#include <list>
#include <string>

template <typename T>
std::istream &operator>>(std::istream &is, std::vector<T> &v)
{
	if (v.size() != 0)
	{
		for (unsigned long long i = 0; i < v.size(); i++)
		{
			is >> v[i];
		}
	}
	else
	{
		std::string inp;
		std::stringstream ss;

		std::getline(is, inp);
		ss << inp;

		T tmp;
		v.clear();

		while (!ss.eof())
		{
			ss >> tmp;

			v.emplace_back(tmp);
		}
	}

	return is;
}

template <typename T, std::size_t N>
std::istream &operator>>(std::istream &is, std::array<T, N> &v)
{
	for (unsigned long long i = 0; i < v.size(); i++)
	{
		is >> v[i];
	}

	return is;
}

template <typename T>
std::istream &operator>>(std::istream &is, std::list<T> &v)
{
	std::string inp;
	std::stringstream ss;

	getline(is, inp);
	ss << inp;

	T tmp;
	v.clear();

	while (!ss.eof())
	{
		is >> tmp;
		v.emplace_back(tmp);
	}

	return is;
}

#endif // ALGOCPP_IO_INPUT
