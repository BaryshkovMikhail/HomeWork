#pragma once
#include <string>

#ifdef LEAVERDYNAMICLIBRARY_EXPORTS
#define LEAVERDYNAMICLIB_API __declspec(dllexport)
#else
#define LEAVERDYNAMICLIB_API __declspec(dllimport)
#endif

namespace lib
{
	class Leaver
	{
	public:
		LEAVERDYNAMICLIB_API std::string leave(std::string name);
	};
}