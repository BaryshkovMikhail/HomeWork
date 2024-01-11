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
    std::string nameOfOperation;
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

    switch (operationSelection)
    {
    case(1):{nameOfOperation = "плюс";break;}
    case(2):{nameOfOperation = "минус";break;}
    case(3):{nameOfOperation = "умножить";break;}
    case(4):{nameOfOperation = "разделить";break;}
    case(5):{nameOfOperation = "в степени";break;}
    };
    std::cout << firstNumber << " " << nameOfOperation << " " << secondNumber << " = ";

    if (operationSelection == 1)
    {
        std::cout << plus(firstNumber, secondNumber);
    }
    else if (operationSelection == 2)
    {
        std::cout << minus(firstNumber, secondNumber);
    }
    else if (operationSelection == 3)
    {
        std::cout << multiplication(firstNumber, secondNumber);
    }
    else if (operationSelection == 4)
    {
        std::cout << delenie(firstNumber, secondNumber);
    }
    else
    {
        std::cout << stepen(firstNumber, secondNumber);
    };


	return 0;
}