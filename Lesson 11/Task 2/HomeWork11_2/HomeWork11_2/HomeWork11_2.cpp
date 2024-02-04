#include <iostream>
#include <Windows.h>
#include <string>
#include "Leaver.h"




int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);

    std::string name, srtoka;
    std::cout << "Введите имя: ";

    std::cin >> name;

    lib::lib z;
    srtoka = z.leave(name);

    std::cout << srtoka;

    system("pause");



}