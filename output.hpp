
// algocpp/io/output.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <locale>
#include <codecvt>
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

std::ostream &operator<<(std::ostream &os, const std::u32string &s)
{
	std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> utf32conv;

	os << utf32conv.to_bytes(s);

	return os;
}

std::ostream &operator<<(std::ostream &os, const std::u16string &s)
{
	std::wstring_convert<std::codecvt_utf8<char16_t>, char16_t> utf16conv;

	os << utf16conv.to_bytes(s);

	return os;
}

std::ostream &operator<<(std::ostream &os, const char32_t &c)
{
	os << std::u32string{c};

	return os;
}

std::ostream &operator<<(std::ostream &os, const char16_t &c)
{
	os << std::u16string{c};

	return os;
}

template <typename T1, typename T2>
std::ostream &operator<<(std::ostream &os, const std::map<T1, T2> &x)
{
	os << algocpp::type::format(x);

	return os;
}

#endif // ALGOCPP_IO_OUTPUT
