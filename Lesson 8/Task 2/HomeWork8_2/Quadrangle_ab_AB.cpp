#include "Quadrangle_ab_AB.h"
#include "MyException.h"

Quadrangle_ab_AB::Quadrangle_ab_AB(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
    name = "Параллелограмм:";
    if ((a != c) && (b != d)  && (A != C) && (B != D))
    {
        throw MyException("стороны a,c и b,d попарно не равны, углы A,C и B,D попарно не равны");
    }
}