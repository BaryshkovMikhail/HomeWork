#include "StaticLib.h"
#include <string>


namespace lib {

	std::string Greeter::greet(std::string name) {
		std::string stroka = ("Здравствуйте, " + name );
		return stroka;
	}

}