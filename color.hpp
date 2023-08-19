
// algocpp/io/color.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#ifndef ALGOCPP_IO_COLOR
#define ALGOCPP_IO_COLOR

#include <process.h>

namespace algocpp
{
	namespace io
	{
		bool color = false;

		inline void enable_color() noexcept
		{
			system("");
			color = true;
		}
	}
}

#endif // ALGOCPP_IO_COLOR
