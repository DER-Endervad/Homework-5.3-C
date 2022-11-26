#pragma once
#include "Triangle.h"

class Right_triangle : public Triangle
{
public:
	Right_triangle(int l_a, int l_b, int l_c, int a_a, int a_b, int a_c, std::string name = "Прямоугольный треугольник") : Triangle(l_a, l_b, l_c, a_a, a_b, a_c, name) {}

	bool check() override {
		if (angel_c == 90) {
			Triangle::check();
		}
		else {
			return false;
		}
	}
};

