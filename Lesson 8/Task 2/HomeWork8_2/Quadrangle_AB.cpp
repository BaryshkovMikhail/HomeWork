#include "Quadrangle_AB.h"
#include "MyException.h"

Quadrangle_AB::Quadrangle_AB(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
    name = "Прямоугольник:";
    if ((a != c) && (b != d) && (A != 90) && (B != 90) && (C != 90) && (D != 90))
    {
        throw MyException("стороны a,c и b,d попарно не равны, все углы не равны 90");
    }
}