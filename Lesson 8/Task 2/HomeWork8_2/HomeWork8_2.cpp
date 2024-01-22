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
#include <stdexcept>
#include "MyException.h"




int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    try {
        Triangle triangle(10, 20, 30, 50, 60, 70);
        Triangle* new_triangle = &triangle;
        print_info(new_triangle);
        std::cout << "создан." << std::endl;
    }
    catch (const std::exception& t)
    {
        std::cerr << "Ошибка создания треуголника. Причина: " << t.what() << std::endl;
    }

    try {
        Triangle_90 triangle_90(10, 20, 30, 30, 60, 90);
        Triangle* new_triangle_90 = &triangle_90;
        print_info(new_triangle_90);
        std::cout << "создан." << std::endl;
    }
    catch (const std::exception& t_90)
    {
        std::cerr << "Ошибка создания прямоугольного треуголника. Причина: " << t_90.what() << std::endl;
    }

    try {
        Triangle_AB triangle_AB(10, 20,30, 50, 60, 70);
        Triangle* new_triangle_AB = &triangle_AB;
        print_info(new_triangle_AB);
        std::cout << "создан." << std::endl;
    }
    catch (const std::exception& t_AB)
    {
        std::cerr << "Ошибка создания равнобедренного труголника. Причина: " << t_AB.what() << std::endl;
    }

    try {
        Triangle_ABC triangle_ABC(30,30,30,60,60,60);
        Triangle* new_triangle_ABC = &triangle_ABC;
        print_info(new_triangle_ABC);
        std::cout << "создан." << std::endl;
    }
    catch (const std::exception& t_ABC)
    {
        std::cerr << "Ошибка создания равностороннего треуголника. Причина: " << t_ABC.what() << std::endl;
    }

    try {
        Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
        Quadrangle* new_quadrangle = &quadrangle;
        print_info(new_quadrangle);
        std::cout << "создан." << std::endl;
    }
    catch (const std::exception& q)
    {
        std::cerr << "Ошибка создания четырёхугольник. Причина: " << q.what() << std::endl;
    }

    try {
        Quadrangle_AB quadrangle_AB(10, 20, 10, 20, 110, 100, 70, 80);
        Quadrangle* new_quadrangle_AB = &quadrangle_AB;
        print_info(new_quadrangle_AB);
        std::cout << "создан." << std::endl;
    }
    catch (const std::exception& q_AB)
    {
        std::cerr << "Ошибка создания прямоугольника. Причина: " << q_AB.what() << std::endl;
    }

    try {
        Quadrangle_A quadrangle_A(40, 40, 40, 40, 90, 90, 90, 90);
        Quadrangle* new_quadrangle_A = &quadrangle_A;
        print_info(new_quadrangle_A);
        std::cout << "создан." << std::endl;
    }
    catch (const std::exception& q_A)
    {
        std::cerr << "Ошибка создания квадрата. Причина: " << q_A.what() << std::endl;
    }

    try {

        Quadrangle_ab_AB quadrangle_ab_AB(20,40,20,40, 60, 120, 60, 120);
        Quadrangle* new_quadrangle_ab_AB = &quadrangle_ab_AB;
        print_info(new_quadrangle_ab_AB);
        std::cout << "создан." << std::endl;
    }
    catch (const std::exception& q_ab_AB)
    {
        std::cerr << "Ошибка создания параллелограмма.Причина: " << q_ab_AB.what() << std::endl;
    }

    try {
        Quadrangle_Romb quadrangle_Romb(30, 30, 30,30, 40,140,40,140);
        Quadrangle* new_quadrangle_Romb = &quadrangle_Romb;
        print_info(new_quadrangle_Romb);
        std::cout << "создан." << std::endl;
    }
    catch (const std::exception& q_Romb)
    {
        std::cerr << "Ошибка создания ромба. Причина: " << q_Romb.what() << std::endl;
    }
    return 0;
}