#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrangle.h"
#include "Rectangle_Q.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figure* f = new Figure(); // Фигура
    f->print_info(); std::cout << std::endl;

    Figure* t = new Triangle(10, 20, 30, 50, 60, 70); // Треугольник
    t->print_info(); std::cout << std::endl;

    Figure* rt = new Right_triangle(10, 20, 30, 50, 60, 90); // Прямоугольный треугольник
    rt->print_info(); std::cout << std::endl;

    Figure* rt2 = new Right_triangle(10, 20, 30, 50, 40, 90); // Прямоугольный треугольник 2
    rt2->print_info(); std::cout << std::endl;

    Figure* it = new Isosceles_triangle(10, 20, 10, 50, 60, 50); // Равнобедренный треугольник
    it->print_info(); std::cout << std::endl;

    Figure* et = new Equilateral_triangle(30, 30, 30, 60, 60, 60); // Равносторонний треугольник
    et->print_info(); std::cout << std::endl;

    Figure* q = new Quadrangle(10, 20, 30, 40, 50, 60, 70, 80); // Четырёхугольник
    q->print_info(); std::cout << std::endl;

    Figure* r = new Rectangle_Q(10, 20, 10, 20, 90, 90, 90, 90); // Прямоугольник
    r->print_info(); std::cout << std::endl;

    Figure* s = new Square(20, 20, 20, 20, 90, 90, 90, 90); // Квадрат
    s->print_info(); std::cout << std::endl;

    Figure* p = new Parallelogram(20, 30, 20, 30, 30, 40, 30, 40); // Параллелограмм
    p->print_info(); std::cout << std::endl;

    Figure* rh = new Rhombus(30, 30, 30, 30, 30, 40, 30, 40); // Ромб
    rh->print_info(); std::cout << std::endl;
}
