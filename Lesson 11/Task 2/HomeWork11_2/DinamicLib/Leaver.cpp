#include <string>
#include "Leaver.h"


namespace lib {

	std::string lib::leave(std::string name) {
		std::string stroka = ("�� ��������, " + name + " !\n");
		return stroka;
	}

}