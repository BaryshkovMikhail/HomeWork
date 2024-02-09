#pragma once
#include <string>

#ifdef DINAMICLIB_EXPORTS
#define DINAMICLIB_API __declspec(dllexport)
#else
#define DINAMICLIB_API __declspec(dllimport)
#endif

namespace lib
{
	class Leaver
	{
	public:
		DINAMICLIB_API std::string  leave(std::string name);
	};
}