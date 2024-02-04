#include <string>
#include "Leaver.h"


namespace lib {

	std::string Leaver::leave(std::string name) {
		std::string stroka = ("До свиданья, " + name + " !\n");
		return stroka;
	}

}