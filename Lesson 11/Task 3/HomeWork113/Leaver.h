#pragma once
#include <string>

/*
#ifdef LEAVERDYNAMICLIBRARY_EXPORTS
#define LEAVERDYNAMICLIB_API __declspec(dllexport)
#else
#define LEAVERDYNAMICLIB_API __declspec(dllimport)
#endif
*/

namespace lib
{
	class Leaver
	{
	public:
		 std::string leave(std::string name);
	};
}