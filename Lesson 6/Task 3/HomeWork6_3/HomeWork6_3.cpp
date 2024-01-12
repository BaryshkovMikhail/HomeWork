#include <string>
#include <windows.h>
#include "Figure.h"
#include "Triangle.h"
#include "Triangle_90.h"
#include "Triangle_AB.h"
#include "Triangle_ABC.h"
#include "Quadrangle.h"
#include "Quadrangle_A.h"
#include "Quadrangle_AB.h"
#include "Quadrangle_ab_AB.h"
#include "Quadrangle_Romb.h"
#include "print_info.h"
#include <iostream>




int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Triangle triangle(10, 20, 30, 50, 60, 70);
    Triangle* new_triangle = &triangle;
    print_info(new_triangle);

    Triangle_90 triangle_90(10, 20, 30, 50, 60);
    Triangle* new_triangle_90 = &triangle_90;
    print_info(new_triangle_90);

    Triangle_AB triangle_AB(10, 20, 50, 60);
    Triangle* new_triangle_AB = &triangle_AB;
    print_info(new_triangle_AB);

    Triangle_ABC triangle_ABC(30);
    Triangle* new_triangle_ABC = &triangle_ABC;
    print_info(new_triangle_ABC);

    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    Quadrangle* new_quadrangle = &quadrangle;
    print_info(new_quadrangle);

    Quadrangle_AB quadrangle_AB(10, 20);
    Quadrangle* new_quadrangle_AB = &quadrangle_AB;
    print_info(new_quadrangle_AB);

    Quadrangle_A quadrangle_A(20);
    Quadrangle* new_quadrangle_A = &quadrangle_A;
    print_info(new_quadrangle_A);

    Quadrangle_ab_AB quadrangle_ab_AB(20, 30, 30, 40);
    Quadrangle* new_quadrangle_ab_AB = &quadrangle_ab_AB;
    print_info(new_quadrangle_ab_AB);

    Quadrangle_Romb quadrangle_Romb(30, 30, 40);
    Quadrangle* new_quadrangle_Romb = &quadrangle_Romb;
    print_info(new_quadrangle_Romb);

    return 0;
}