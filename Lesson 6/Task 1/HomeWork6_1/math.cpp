#include "Math.h"
#include <cmath>


double plus(double firstNumber, double secondNumber)
{
	return firstNumber + secondNumber;
};

double minus(double firstNumber, double secondNumber)
{
	return firstNumber - secondNumber;
};

double multiplication(double firstNumber, double secondNumber)
{
	return firstNumber * secondNumber;
};

double delenie(double firstNumber, double secondNumber)
{
	return firstNumber / secondNumber;
};

double stepen(double firstNumber, double secondNumber)
{
	return std::pow(firstNumber, secondNumber);
};