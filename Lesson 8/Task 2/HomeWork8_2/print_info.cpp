#include "print_info.h"
#include "Figure.h"
#include <iostream>
#include "MyException.h"

void print_info(Figure* figure) {
    std::cout << figure->get_name();
    std::cout << " (cтороны: " << figure->get_a() << ", " << figure->get_b() << ", " << figure->get_c();
    if (figure->getFourSides())
    {
        std::cout << ", " << figure->get_d() << "; ";
    }
    else { std::cout << "; "; }
    std::cout << "yглы: " << figure->get_A() << ", " << figure->get_B() << ", " << figure->get_C() ;
    if (figure->getFourSides())
    {
        std::cout << ", " << figure->get_D() << ") ";
    }
    else { std::cout << ") "; }
}