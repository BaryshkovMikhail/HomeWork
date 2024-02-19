#pragma once
#include <string>

#ifdef DINAMICLIB_EXPORTS
#define DINAMICLIB_API __declspec(dllexport)
#else
#define DINAMICLIB_API __declspec(dllimport)
#endif

namespace dinam_lib_Race
{
	class base {
	public:
		int speed;
		int time_to_rest;
	};

	class camel : public base {   // Верблюд
	public:
		DINAMICLIB_API camel() {
			this->speed = 10;
			this->time_to_rest = 30;
		}
		double DINAMICLIB_API time_camel(int distance) const;
	};

	class fastcamel : public base {   // Верблюд-быстроход
	public:
		DINAMICLIB_API fastcamel() {
			this->speed = 40;
			this->time_to_rest = 10;
		}
		double DINAMICLIB_API time_fastcamel(int distance) const;
	};

	class centaur : public base {   // Кентавр
	public:
		DINAMICLIB_API centaur() {
			this->speed = 15;
			this->time_to_rest = 8;
		}
		double DINAMICLIB_API time_centaur(int distance) const;
	};

	class all_terrain_boots : public base {   // Ботинки-вездеходы
	public:
		DINAMICLIB_API all_terrain_boots() {
			this->speed = 6;
			this->time_to_rest = 60;
		}
		double DINAMICLIB_API time_all_terrain_boots(int distance) const;
	};

	class air {
	protected:
		int speed;
	};

	class eagle : public air {   // Орёл
	public:
		DINAMICLIB_API eagle() {
			this->speed = 8;
		}
		double DINAMICLIB_API time_eagle(int distance) const;
	};

	class metla : public air {   // Метла
	public:
		DINAMICLIB_API metla() {
			this->speed = 20;
		}
		double DINAMICLIB_API time_metla(int distance) const;
	};

	class Magic_carpet : public air {   // Ковёр-самолёт
	public:
		DINAMICLIB_API Magic_carpet() {
			this->speed = 10;
		}
		double DINAMICLIB_API time_Magic_carpet(int distance) const;
	};


}