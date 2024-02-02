#include <iostream>
#include <Windows.h>
#include <string>
#include "StaticLib.h"




int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);

    std::string name, srtoka;
    std::cout << "Введите имя: ";

    std::cin >> name;

    lib::Greeter z;
    srtoka = z.greet(name);

    std::cout << srtoka;

    system("pause");



}