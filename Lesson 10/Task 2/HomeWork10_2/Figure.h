#pragma once
#include <string>
#include "Figure.h"

class Figure {
protected:
    std::string name;
    bool FourSides = false;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;

public:
    int get_a() const;
    int get_b() const;
    int get_c() const;
    int get_d() const;
    int get_A() const;
    int get_B() const;
    int get_C() const;
    int get_D() const;
    int getFourSides() const;
    std::string get_name();
};