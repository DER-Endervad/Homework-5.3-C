#pragma once
#include "Quadrangle.h"
class Parallelogram : public Quadrangle
{
public:
	Parallelogram(int l_a, int l_b, int a_a, int a_b, std::string name = "��������������") : Quadrangle(l_a, l_b, l_a, l_b, a_a, a_b, a_a, a_b, name) {}
};

