#include "StaticLib.h"
#include <string>


namespace lib {

	std::string Greeter::greet(std::string name) {
		std::string stroka = ("������������, " + name );
		return stroka;
	}

}