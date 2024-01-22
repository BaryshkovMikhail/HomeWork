#include "triangle_ABC.h"
#include "MyException.h"

Triangle_ABC::Triangle_ABC(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
    name = "�������������� ����������� ";
	if ((a != c) && (a != b) && (c != b) && (A != 60) && (B != 60) && (C != 60))
	{
		throw MyException("��� ������� �� �����, ��� ���� �� ����� 60");
	}
};
