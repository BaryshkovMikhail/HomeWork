#include <iostream>
#include <windows.h>
#include "Math.h"

int main() {

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    double firstNumber = 0;
    double secondNumber = 0;
    int operationSelection = 0;
    bool checkingValue = false;

    std::cout << "Введите первое число: ";
    std::cin >> firstNumber;

    std::cout << "Введите второе число: ";
    std::cin >> secondNumber;

    do
    {
        std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
        std::cin >> operationSelection;

        if (operationSelection == 4 && secondNumber == 0)
        {
            std::cout << " Делить на ноль нельзя... " << std::endl;
        }
        else if (operationSelection <= 5 && operationSelection >= 1)
        {
            checkingValue = true;
        }
        else
        {
            std::cout << "Не допустимое значение. Выберете еще раз: " << std::endl;
        }
    } while (!checkingValue);


    if (operationSelection == 1)
    {
        std::cout << firstNumber << " " << "плюс" << " " << secondNumber << " = " << plus(firstNumber, secondNumber);
    }
    else if (operationSelection == 2)
    {
        std::cout << firstNumber << " " << "минус" << " " << secondNumber << " = " << minus(firstNumber, secondNumber);
    }
    else if (operationSelection == 3)
    {
        std::cout << firstNumber << " " << "умножение" << " " << secondNumber << " = " << multiplication(firstNumber, secondNumber);
    }
    else if (operationSelection == 4)
    {
        std::cout << firstNumber << " " << "деление" << " " << secondNumber << " = " << delenie(firstNumber, secondNumber);
    }
    else
    {
        std::cout << firstNumber << " " << "в степени" << " " << secondNumber << " = " << stepen(firstNumber, secondNumber);
    };


	return 0;
}