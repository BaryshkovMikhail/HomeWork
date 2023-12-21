#include <iostream>
#include<windows.h>

class Calculator
{
public:
    int num1 = 0;
    int num2 = 0;
    double result = 0.0;

    double add(const int& num1, const int& num2) {
        result = num1 + num2;
        return result;
    }
    double subtract_1_2(const int& num1, const int& num2) {
        result = num1 - num2;
        return result;
    }
    double subtract_2_1(const int& num1, const int& num2) {
        result = num2 - num1;
        return result;
    }
    double multiply(const int& num1, const int& num2) {
        result = num1 * num2;
        return result;
    }
    double divide_1_2(const double& num1, const double& num2) {
        result = num1 / num2;
        return result;
    }
    double divide_2_1(const double& num1, const double& num2) {
        result = num2 / num1;
        return result;
    }
    bool set_num1(double num1) {
        if (this->num1 == 0)

            return false;
        else
            return true;
    }
    bool set_num2(double num2) {
        if (this->num2 == 0)

            return false;
        else
            return true;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Calculator calc;
    do {
        std::cout << "Введите num1:";
        std::cin >> calc.num1;
        if (!calc.set_num1(calc.num1)) {
            std::cout << "Неверный ввод!" << std::endl;
        }
    } while (!calc.set_num1(calc.num1));

    do {
        std::cout << "Введите num2:";
        std::cin >> calc.num2;
        if (!calc.set_num2(calc.num2)) {
            std::cout << "Неверный ввод!" << std::endl;
        }
    } while (!calc.set_num2(calc.num2));

    std::cout << "num1 + num2 = " << calc.add(calc.num1, calc.num2) << std::endl;
    std::cout << "num1 - num2 = " << calc.subtract_1_2(calc.num1, calc.num2) << std::endl;
    std::cout << "num2 - num1 = " << calc.subtract_2_1(calc.num1, calc.num2) << std::endl;
    std::cout << "num1 * num2 = " << calc.multiply(calc.num1, calc.num2) << std::endl;
    std::cout << "num1 / num2 = " << calc.divide_1_2(calc.num1, calc.num2) << std::endl;
    std::cout << "num2 / num1 = " << calc.divide_2_1(calc.num1, calc.num2) << std::endl;
    

    return 0;
}

