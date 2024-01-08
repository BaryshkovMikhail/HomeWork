#include <iostream>
#include <windows.h>

class Figure {
private:
    int sides = 0;
    std::string name;
public:
    int get_sides_count() {
        return sides;
    }

    std::string get_name() {
        return name;
    }

    Figure(int sides, std::string name) : sides(sides), name(name) {};
    Figure() : Figure(0, "Фигура"){}
};
    
class Triangle : public Figure {
public:
    Triangle(): Figure(3, "Треугольник"){}
};

class Quadrangle : public Figure {
public:
    Quadrangle() : Figure(4, "Четырехугольник"){}
};


int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;

    std::cout << "Количество сторон: " << std::endl;
    std::cout << figure.get_name() << " " << figure.get_sides_count() << std::endl;
    std::cout << triangle.get_name() << " " << triangle.get_sides_count() << std::endl;
    std::cout << quadrangle.get_name() << " " << quadrangle.get_sides_count() << std::endl;

    return 0;
}
