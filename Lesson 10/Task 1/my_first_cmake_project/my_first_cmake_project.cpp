#include <Windows.h>
#include <string>
#include <iostream>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << "\nЗдравствуйте, " << name << "!\n";

    system("pause");
    return 0;
}
