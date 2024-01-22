#include "Quadrangle.h"
#include "MyException.h"

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
    name = "Четырёхугольник: ";
    FourSides = true;
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;

    if ((A + B + C +D) != 360)
    {
        throw MyException("сумма углов не равна 360");
    }
};

