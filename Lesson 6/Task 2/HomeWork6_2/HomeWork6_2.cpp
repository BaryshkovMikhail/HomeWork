﻿#include <iostream>
#include <windows.h>
#include "Counter.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string q;
    std::string znak;
    Counter c(0);
    int num1 = 0;

    do {
        std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет:";
        std::cin >> q;
        if (q == "да") {
            std::cout << "Введите начальное значение счётчика:";
            std::cin >> num1;
            do {
                if (!std::cin) {
                    std::cout << "Вы ввели не кореектные данные" << std::endl;
                    std::cout << "Введите начальное значение счётчика:";
                    std::cin.clear();
                    std::cin.ignore(10000, '\n');
                }
            } while (!std::cin);
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            c = num1;
        }
        if (q == "нет") {
            std::cout << "Начатльное значение счетчика = 1" << std::endl;
            c = 1;
        }
        if (q != "да" && q != "нет") {
            std::cout << "Не верный ответ! Пропробуйте снова." << std::endl;
        }
    } while (q != "да" && q != "нет");

    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> znak;
        if (znak == "+") {
            c.plus();
        }
        if (znak == "-") {
            c.minus();
        }
        if (znak == "=") {
            std::cout << c.get_num() << std::endl;
        }
        if (znak != "+" && znak != "-" && znak != "=" && znak != "x" && znak != "х") {
            std::cout << "Не верная команда!" << std::endl;
        }
    } while (znak != "x" && znak != "х");
    std::cout << "До свидания!";


    return 0;
}