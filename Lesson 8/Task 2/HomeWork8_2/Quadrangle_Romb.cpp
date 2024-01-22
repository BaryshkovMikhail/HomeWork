#include "Quadrangle_Romb.h"
#include "MyException.h"

Quadrangle_Romb::Quadrangle_Romb(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
    name = "Ромб:";
    if ((a != c) && (b != c) && (c != d) && (A != C) && (B != D))
    {
        throw MyException("все стороны не равны, углы A,C и B,D попарно не равны");
    }
}