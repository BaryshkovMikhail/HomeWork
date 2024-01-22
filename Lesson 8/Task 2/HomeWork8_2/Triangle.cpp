#include "triangle.h"
#include "MyException.h"

    Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
        name = "Треугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;

        if ((A+B+C) != 180)
        {
            throw MyException("сумма углов не равна 180");
        }
    };
