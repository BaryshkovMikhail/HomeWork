#include <iostream>
#include <windows.h>

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
    int get_a() const { return a; };
    int get_b() const { return b; };
    int get_c() const { return c; };
    int get_d() const { return d; };
    int get_A() const { return A; };
    int get_B() const { return B; };
    int get_C() const { return C; };
    int get_D() const { return D; };
    int getFourSides() const { return FourSides; }
    std::string get_name() { return name; }
};

class Triangle : public Figure {

public:
    Triangle(int a, int b, int c, int A, int B, int C) { 
        name = "Треугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    };
};

class Triangle_90 : public Triangle {
public:  
    Triangle_90(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B,90) {
        name = "Прямоугольный треугольник";
    }
};

class Triangle_AB : public Triangle {
public:
    Triangle_AB(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A) {
        name = "Равнобедренный треугольник: ";
    }
};

class Triangle_ABC : public Triangle {
public:
    Triangle_ABC(int a) : Triangle(a, a, a, 60, 60, 60) {
        name = "Равносторонный треугольник: ";
    }
};

class Quadrangle : public Figure {
    
public:
    
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
        name = "Четырёхугольник: ";
        FourSides = true;
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    };
};

class Quadrangle_AB : public Quadrangle {
public:
    Quadrangle_AB(int a, int b) : Quadrangle(a, b, a, b, 90, 90, 90, 90) {
        name = "Прямоугольник:";
    }
};

class Quadrangle_A : public Quadrangle {
public:
    Quadrangle_A(int a) : Quadrangle(a,a,a,a,90,90,90,90) {
        name = "Квадрат:";
    }
};

class Quadrangle_ab_AB : public Quadrangle {
public:
    Quadrangle_ab_AB(int a,int b, int A, int B) : Quadrangle(a, b, a, b, A, B, A, B) {
        name = "Параллелограмм:";
    }
};

class Quadrangle_Romb : public Quadrangle {
public:
    Quadrangle_Romb(int a, int A, int B) : Quadrangle(a, a, a, a, A, B, A, B) {
        name = "Ромб:";
    }
};

static void print_info(Figure* figure) {
    std::cout << figure->get_name() << std::endl;
    std::cout << "Стороны: ";
    std::cout << "a=" << figure->get_a() << " b=" << figure->get_b() << " c=" << figure->get_c();
    if (figure->getFourSides())
    {std::cout << " d =" << figure->get_d() << std::endl;}
    else { std::cout << std::endl; }
    std::cout << "Углы: ";
    std::cout << "A=" << figure->get_A() << " B=" << figure->get_B() << " C=" << figure->get_C();
    if (figure->getFourSides())
    {std::cout << " D =" << figure->get_D() << std::endl;}
    else { std::cout << std::endl; }
    std::cout << std::endl;
}


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

    Quadrangle_AB quadrangle_AB(10,20);
    Quadrangle* new_quadrangle_AB = &quadrangle_AB;
    print_info(new_quadrangle_AB);

    Quadrangle_A quadrangle_A(20);
    Quadrangle* new_quadrangle_A = &quadrangle_A;
    print_info(new_quadrangle_A);

    Quadrangle_ab_AB quadrangle_ab_AB(20,30, 30,40);
    Quadrangle* new_quadrangle_ab_AB = &quadrangle_ab_AB;
    print_info(new_quadrangle_ab_AB);

    Quadrangle_Romb quadrangle_Romb(30, 30, 40);
    Quadrangle* new_quadrangle_Romb = &quadrangle_Romb;
    print_info(new_quadrangle_Romb);

    return 0;
}
