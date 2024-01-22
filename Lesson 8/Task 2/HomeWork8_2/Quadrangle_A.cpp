#include "Quadrangle_A.h"
#include "MyException.h"

Quadrangle_A::Quadrangle_A(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
    name = " вадрат:";
    if ((a != b) && (b != c) && (c != d) && (A != 90) && (B != 90) && (C != 90) && (D != 90))
    {
        throw MyException("все стороны не равны, все углы не равны 90");
    }
}