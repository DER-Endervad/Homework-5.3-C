#pragma once
#include "Quadrangle.h"
class Rectangle_Q : public Quadrangle
{
public:
	Rectangle_Q(int l_a, int l_b, int l_c, int l_d, int a_a, int a_b, int a_c, int a_d, std::string name = "Прямоугольник") : Quadrangle(l_a, l_b, l_c, l_d, a_a, a_b, a_c, a_d, name) {}

	bool check() override {
		if (length_a == length_c && length_b == length_d && angel_a == 90 && angel_b == 90 && angel_c == 90 && angel_d == 90) {
			Quadrangle::check();
		}
		else {
			return false;
		}
	}
};

