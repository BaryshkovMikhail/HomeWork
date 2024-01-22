#include "Quadrangle_ab_AB.h"
#include "MyException.h"

Quadrangle_ab_AB::Quadrangle_ab_AB(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
    name = "��������������:";
    if ((a != c) && (b != d)  && (A != C) && (B != D))
    {
        throw MyException("������� a,c � b,d ������� �� �����, ���� A,C � B,D ������� �� �����");
    }
}