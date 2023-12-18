#include <iostream>
#include<windows.h>

struct person {
        unsigned int nomer = 0;
        std::string name;
        double Balance = 0;
        double NewBalance =0;
    };

void changeBalance(person& pers) {
    pers.Balance = pers.NewBalance;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    person person;
    std::cout << "Ввидите номер счета: ";
    std::cin >> person.nomer;
    std::cout << "Введите имя владельца : ";
    std::cin >> person.name;
    std::cout << "Введите баланс: ";
    std::cin >> person.Balance;
    std::cout << "Введите новый баланс: ";
    std::cin >> person.NewBalance;
    changeBalance(person);
    std::cout << "Ваш счёт: " << person.name << ", " << person.nomer << ", " << person.Balance;

    return 0;
}

