#pragma once
#include "Figure.h"

class Quadrangle :public Figure
{
protected:
	int length_a;
	int length_b;
	int length_c;
	int length_d;
	int angel_a;
	int angel_b;
	int angel_c;
	int angel_d;

public:
	Quadrangle(int l_a, int l_b, int l_c, int l_d, int a_a, int a_b, int a_c, int a_d) {
		sides_count = 4;
		name = "Четырёхугольник";
		length_a = l_a;
		length_b = l_b;
		length_c = l_c;
		length_d = l_d;
		angel_a = a_a;
		angel_b = a_b;
		angel_c = a_c;
		angel_d = a_d;
	}

	Quadrangle(int l_a, int l_b, int l_c, int l_d, int a_a, int a_b, int a_c, int a_d, std::string name) {
		sides_count = 4;
		this->name = name;
		length_a = l_a;
		length_b = l_b;
		length_c = l_c;
		length_d = l_d;
		angel_a = a_a;
		angel_b = a_b;
		angel_c = a_c;
		angel_d = a_d;
	}

	void get_quadrangle() {
		std::cout << name << ": " << std::endl;
		std::cout << "Стороны: a=" << length_a << " b=" << length_b << " c=" << length_c << " d=" << length_d << std::endl;
		std::cout << "Углы: A=" << angel_a << " B=" << angel_b << " C=" << angel_c << " D=" << angel_d << std::endl;
	}

	void print_info() override {
		std::cout << name << ": " << std::endl;
		if (check()) {
			std::cout << "Правильная" << std::endl;
		}
		else
		{
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << sides_count << std::endl;
		std::cout << "Стороны: a=" << length_a << " b=" << length_b << " c=" << length_c << " d=" << length_d << std::endl;
		std::cout << "Углы: A=" << angel_a << " B=" << angel_b << " C=" << angel_c << " D=" << angel_d << std::endl;
	}

	bool check() override {
		if (sides_count == 4 && (angel_a + angel_b + angel_c + angel_d) == 360) {
			return true;
		}
		else {
			return false;
		}
	}
};

