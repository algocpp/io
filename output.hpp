
// algocpp/io/output.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#ifndef ALGOCPP_IO_OUTPUT
#define ALGOCPP_IO_OUTPUT

#include <iostream>
#include <vector>
#include <array>
#include <list>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <queue>
#include <locale>
#include <codecvt>
#include <algocpp/type/format.hpp>
#include <algocpp/string/wconvert.hpp>

#if !defined(ALGOCPP_DONT_LIB) && __has_include(<boost/array.hpp>)
#include <boost/array.hpp>
#endif

template <typename T>
std::ostream &operator<<(std::ostream &os, const std::vector<T> &v)
{
	os << algocpp::type::format(v);

	return os;
}

template <typename T, std::size_t x>
std::ostream &operator<<(std::ostream &os, const std::array<T, x> &v)
{
	os << algocpp::type::format(v);

	return os;
}

#ifdef BOOST_ARRAY_HPP

template <typename T, std::size_t n>
std::ostream &operator<<(std::ostream &os, const boost::array<T, n> &v)
{
	os << algocpp::type::format(v);

	return os;
}

#endif

template <typename T>
std::ostream &operator<<(std::ostream &os, const std::list<T> &v)
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

template <typename T>
std::ostream &operator<<(std::ostream &os, const std::unordered_set<T> &x)
{
	os << algocpp::type::format(x);

	return os;
}

std::ostream &operator<<(std::ostream &os, const std::u32string &s)
{
	os << algocpp::string::utf32conv.to_bytes(s);

	return os;
}

std::ostream &operator<<(std::ostream &os, const char32_t &c)
{
	os << std::u32string{c};

	return os;
}

std::ostream &operator<<(std::ostream &os, const std::u16string &s)
{
	os << algocpp::string::utf16conv.to_bytes(s);

	return os;
}

std::ostream &operator<<(std::ostream &os, const char16_t &c)
{
	os << std::u16string{c};

	return os;
}

std::ostream &operator<<(std::ostream &os, const std::wstring &s)
{
	os << algocpp::string::wstrconv.to_bytes(s);

	return os;
}

std::ostream &operator<<(std::ostream &os, const wchar_t &c)
{
	os << std::wstring{c};

	return os;
}

// C++20
#if __cplusplus >= 202002LL

std::ostream &operator<<(std::ostream &os, const std::u8string &s)
{
	os << std::string(s.begin(), s.end());

	return os;
}

std::ostream &operator<<(std::ostream &os, const char8_t &c)
{
	os << std::u8string{c};

	return os;
}

#endif

template <typename T1, typename T2>
std::ostream &operator<<(std::ostream &os, const std::map<T1, T2> &x)
{
	os << algocpp::type::format(x);

	return os;
}

template <typename T1, typename T2>
std::ostream &operator<<(std::ostream &os, const std::unordered_map<T1, T2> &x)
{
	os << algocpp::type::format(x);

	return os;
}

template <typename T>
std::ostream &operator<<(std::ostream &os, const std::queue<T> &x)
{
	os << algocpp::type::format(x);

	return os;
}

#endif // ALGOCPP_IO_OUTPUT
