#include "print_info.h"
#include "Figure.h"
#include <iostream>

void print_info(Figure* figure) {
    std::cout << figure->get_name() << std::endl;
    std::cout << "Стороны: ";
    std::cout << "a=" << figure->get_a() << " b=" << figure->get_b() << " c=" << figure->get_c();
    if (figure->getFourSides())
    {
        std::cout << " d =" << figure->get_d() << std::endl;
    }
    else { std::cout << std::endl; }
    std::cout << "Углы: ";
    std::cout << "A=" << figure->get_A() << " B=" << figure->get_B() << " C=" << figure->get_C();
    if (figure->getFourSides())
    {
        std::cout << " D =" << figure->get_D() << std::endl;
    }
    else { std::cout << std::endl; }
    std::cout << std::endl;
}