#include "Triangle_90.h"
#include "MyException.h"


 Triangle_90::Triangle_90(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
    name = "������������� �����������";
	if (C != 90)
	{
		throw MyException("���� C �� ����� 90");
	}
}