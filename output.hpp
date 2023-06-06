
// algocpp/io/output.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#include <iostream>
#include <algocpp/type/format.hpp>

#ifndef ALGOCPP_IO_OUTPUT
#define ALGOCPP_IO_OUTPUT

template <typename T>
std::ostream &operator<<(std::ostream &os, const std::vector<T> &v)
{
	os << algocpp::type::format(v);

	return os;
}

template <typename T1, typename T2>
std::ostream &operator<<(std::ostream &os, const std::pair<T1, T2> &p)
{
	os << algocpp::type::format(p);

	return os;
}

template <typename T>
std::ostream &operator<<(std::ostream &os, const std::set<T> &x)
{
	os << algocpp::type::format(x);

	return os;
}

#endif // ALGOCPP_IO_OUTPUT
