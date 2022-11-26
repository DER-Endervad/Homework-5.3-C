#pragma once
#include "Triangle.h"
class Isosceles_triangle : public Triangle
{
public:
	Isosceles_triangle(int l_a, int l_b, int l_c, int a_a, int a_b, int a_c, std::string name = "Равнобедренный треугольник") : Triangle(l_a, l_b, l_c, a_a, a_b, a_c, name) {}

	bool check() override {
		if (length_a == length_c && angel_a == angel_c) {
			Triangle::check();
		}
		else {
			return false;
		}
	}
};

