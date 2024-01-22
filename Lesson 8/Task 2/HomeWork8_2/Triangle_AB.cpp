#include "triangle_AB.h"
#include "MyException.h"

Triangle_AB::Triangle_AB(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
    name = "�������������� ����������� ";
	if ((a != c) && (A != B))
	{
		throw MyException("������� a � c �� �����, ���� A � C �� �����");
	}
};