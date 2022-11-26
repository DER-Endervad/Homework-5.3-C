#pragma once
#include "Figure.h"
#include <iostream>

class Triangle:public Figure
{
protected:
	int length_a;
	int length_b;
	int length_c;
	int angel_a;
	int angel_b;
	int angel_c;

public:
	Triangle(int l_a, int l_b, int l_c, int a_a, int a_b, int a_c) {
			sides_count = 3;
			name = "Треугольник";
			length_a = l_a;
			length_b = l_b;
			length_c = l_c;
			angel_a = a_a;
			angel_b = a_b;
			angel_c = a_c;
	}

	Triangle(int l_a, int l_b, int l_c, int a_a, int a_b, int a_c, std::string name) {
			sides_count = 3;
			this->name = name;
			length_a = l_a;
			length_b = l_b;
			length_c = l_c;
			angel_a = a_a;
			angel_b = a_b;
			angel_c = a_c;
	}

	void get_triangle() {
		std::cout << name << ": " << std::endl;
		std::cout << "Стороны: a=" << length_a << " b=" << length_b << " c=" << length_c << std::endl;
		std::cout << "Углы: A=" << angel_a << " B=" << angel_b << " C=" << angel_c << std::endl;
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
		std::cout << "Стороны: a=" << length_a << " b=" << length_b << " c=" << length_c << std::endl;
		std::cout << "Углы: A=" << angel_a << " B=" << angel_b << " C=" << angel_c << std::endl;
	}

	bool check() override {
		if ((angel_a + angel_b + angel_c) == 180) {
			return true;
		}
		else {
			return false;
		}
	}
};

