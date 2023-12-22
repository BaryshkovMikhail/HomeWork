#include <iostream>
#include<windows.h>


class Counter
{
private:
    int num;


public:

    void set_num(int num) { this->num = num; }
    int  get_num() { return num; }

    int plus(int& num1, std::string znak) {
        if (znak == "+") {
            num = ++num1;

        }
        return num;
    }
    int minus(int& num1, std::string znak) {
        num = num1;
        if (znak == "-") {
            num = --num1;
        }
        return num;
    }

    Counter(int num) {
        this->num = num;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string q;
    std::string znak;
    Counter counter(1);
    int num1 = 0;

    do {
        std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет:";
        std::cin >> q;
        if (q == "да") {
            std::cout << "Введите начальное значение счётчика:";
            std::cin >> num1;
            
        }
        if (q == "нет") {
            std::cout << "Начатльное значение счетчика = 1" << std::endl;
            num1 = 1;
        }
        if (q != "да" && q != "нет") {
            std::cout << "Не верный ответ! Пропробуйте снова." << std::endl;
        }
    } while (q != "да" && q != "нет");

    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> znak;
        if (znak == "+") {
            counter.plus(num1, znak);
        }
        if (znak == "-") {
            counter.minus(num1, znak);
        }
        if (znak == "=") {
            std::cout << counter.get_num() << std::endl;
        }
        if (znak != "+" && znak != "-" && znak != "=" && znak != "x" && znak != "х") {
            std::cout << "Не верная команда!" << std::endl;
        }
    } while (znak != "x" && znak != "х");
    std::cout << "До свидания!";


    return 0;
}

