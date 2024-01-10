#include <iostream>
#include <windows.h>

class Figure
{
protected:
    std::string name = "Фигура";
    bool check = false;
    int sides = 0;

    virtual bool Check() 
    {
        if (sides == 0) { return true; }
        else { return false; }
    };
public:
    std::string get_name() { return name; }

    virtual void print_info()
    {
        std::cout << std::endl;
        std::cout << name << ":" << std::endl;
        if (Check()) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }

        std::cout << "Количество сторон: " << sides << std::endl;
    }
};



class Triangle : public Figure {
protected:
    int a = 0;
    int b = 0;
    int c = 0;
    int A = 0;
    int B = 0;
    int C = 0;

    bool Check() override {
        if ((A + B + C) == 180) {
            return true;
        }
        else {
            return false;
        }
    }

public:
    int  get_a() const { return a; };
    int  get_b() const { return b; };
    int  get_c() const { return c; };
    int  get_A() const { return A; };
    int  get_B() const { return B; };
    int  get_C() const { return C; };

    void print_info() override {
        Figure::print_info();
        std::cout << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << std::endl;
        std::cout << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << std::endl;
    }
    Triangle(int a, int b, int c, int A, int B, int C) :a(a), b(b), c(c), A(A), B(B), C(C) {
        name = "Треугольник";
        sides = 3;
        check = Check();
    };
};

class Triangle_90 : public Triangle {
protected:
    bool Check() override
    {
        if (Triangle::Check() && (C == 90)) {return true;}
        else{return false;}
    };
public:
    Triangle_90(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {Triangle::name = "Прямоугольный треугольник";}
};

class Triangle_AB : public Triangle {
protected:
    bool Check() override
    {
        if (Triangle::Check() && ((a == c)&&(A==C))) { return true; }
        else { return false; }
    };

public:
    Triangle_AB(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A) {Triangle::name = "Равнобедренный треугольник: ";}
};

class Triangle_ABC : public Triangle {
protected:
    bool Check() override
    {
        if (Triangle::Check() && ((a==b) && (a==c) && (b=c)) && ((A == 60) && (B==60) && (C==60))) { return true; }
        else { return false; }
    };

public:
    Triangle_ABC(int a) : Triangle(a, a, a, 60, 60, 60) {Triangle::name = "Равносторонный треугольник: ";}
};

class Quadrangle : public Figure {
protected:
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;

    virtual bool Check() 
    {
        if ((A + B + C + D) == 360) {return true;}
        else{return false;}
    };

public:
    int get_a() const { return a; };
    int get_b() const { return b; };
    int get_c() const { return c; };
    int get_d() const { return d; };
    int get_A() const { return A; };
    int get_B() const { return B; };
    int get_C() const { return C; };
    int get_D() const { return D; };

    void print_info() override {
        Figure::print_info();
        std::cout << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << " d=" << get_d() << std::endl;
        std::cout << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << " D=" << get_D() << std::endl;
    }
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) :a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
        name = "Четырёхугольник "; sides = 4;
    };
};

class Quadrangle_AB : public Quadrangle {
protected:
    bool Check() override
    {
        if (Quadrangle::Check() && ((a == c) && (b == d) && (A == 90) && (B == 90) && (C == 90) &&(D == 90))) { return true; }
        else { return false; }
    };
public:
    Quadrangle_AB(int a, int b) : Quadrangle(a, b, a, b, 90, 90, 90, 90) {
        name = "Прямоугольник";
    }
};

class Quadrangle_A : public Quadrangle {
protected:
    bool Check() override
    {
        if (Quadrangle::Check() && ((a == b) && (b == c) && (c == d) && (A == 90) && (B == 90) && (C == 90) && (D == 90))) { return true; }
        else { return false; }
    };
public:
    Quadrangle_A(int a) : Quadrangle(a, a, a, a, 90, 90, 90, 90) {
        Quadrangle::name = "Квадрат";
    }
};

class Quadrangle_ab_AB : public Quadrangle {
protected:
    bool Check() override
    {
        if (Quadrangle::Check() && (((a == c) && (b == d)) && ((A == C) && (B == D)))) { return true; }
        else { return false; }
    };
public:
    Quadrangle_ab_AB(int a, int b, int A, int B) : Quadrangle(a, b, a, b, A, B, A, B) {
        name = "Параллелограмм";
    }
};

class Quadrangle_Romb : public Quadrangle {
protected:
    bool Check() override
    {
        if (Quadrangle::Check() && (((a == b) && (b == c) && (c == d)) && ((A == C) && (B == D)))) { return true; }
        else { return false; }
    };
public:
    Quadrangle_Romb(int a, int A, int B) : Quadrangle(a, a, a, a, A, B, A, B) {
        name = "Ромб";
    }
};
int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figure figure;
    Figure* new_figure = &figure;
    new_figure->print_info();

    Triangle triangle(10, 20, 30, 50, 60, 70);
    Triangle* new_triangle = &triangle;
    new_triangle->print_info();

    Triangle_90 triangle_90(10, 20, 30, 50, 60);
    Triangle* new_triangle_90 = &triangle_90;
    new_triangle_90->print_info();

    Triangle_AB triangle_AB(10, 20, 50, 60);
    Triangle* new_triangle_AB = &triangle_AB;
    new_triangle_AB->print_info();

    Triangle_ABC triangle_ABC(30);
    Triangle* new_triangle_ABC = &triangle_ABC;
    new_triangle_ABC->print_info();

    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    Quadrangle* new_quadrangle = &quadrangle;
    new_quadrangle->print_info();

    Quadrangle_AB quadrangle_AB(10,20);
    Quadrangle* new_quadrangle_AB = &quadrangle_AB;
    new_quadrangle_AB->print_info();

    Quadrangle_A quadrangle_A(20);
    Quadrangle* new_quadrangle_A = &quadrangle_A;
    new_quadrangle_A->print_info();

    Quadrangle_ab_AB quadrangle_ab_AB(20, 30, 30, 40);
    Quadrangle* new_quadrangle_ab_AB = &quadrangle_ab_AB;
    new_quadrangle_ab_AB->print_info();

    Quadrangle_Romb quadrangle_Romb(30, 30, 40);
    Quadrangle* new_quadrangle_Romb = &quadrangle_Romb;
    new_quadrangle_Romb->print_info();

    return 0;
}
