#include <iostream>
#include <Windows.h>
#define MODE 1

#ifndef MODE
#error "необходимости определить MODE"
#endif

#ifdef MODE
static double add(double& a, double& b)
{
	return a + b;
}
#endif

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	double a=0, b=0;
#ifdef MODE
#if MODE == 0
	std::cout << "Работаю в режиме тренировки";
#elif (MODE == 1) 
		std::cout << "Работаю в боевом режиме" << std::endl;
		std::cout << "Введите число 1:";
		std::cin >> a;
		std::cout << "Введите число 2:";
		std::cin >> b;
		std::cout << "Результат сложениия: " << add(a, b);
#else MODE
	std::cout << "Неизвестный режим. Завершение работы";
#endif
#endif
	return 0;

}

