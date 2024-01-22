#include <iostream>
#include <string>
#include <exception>
#include <Windows.h>

static int function(std::string str, int forbidden_length) {
    if (forbidden_length == str.length())
    {
        throw std::exception("Вы ввели слово запретной длины! До свидания");
    };

    return static_cast<int>(str.length());
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    std::string str;
    int length = 0;
    int forbidden_length = 0;
    bool checkForbiddenLength = false;

    do
    {
        std::cout << "Введите запретную длину:";
        std::cin >> forbidden_length;
        if (forbidden_length > 0)
        {
            checkForbiddenLength = true;
        }
        if (forbidden_length <= 0)
        {
            std::cout << "Неверная длина... Введите новую" << std::endl;
        }
    } while (!checkForbiddenLength);

    try
    {
        do
        {
            std::cout << "Введите слово:";
            std::cin >> str;
            length = function(str, forbidden_length);
            std::cout << "Длина слова " << str << " равна " << length << std::endl;
        } while (forbidden_length != length);
    }
    catch (const std::exception& ex)
    {
        std::cout << std::endl << ex.what() << std::endl;
    }

    return 0;
}
