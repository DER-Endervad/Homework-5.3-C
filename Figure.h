#pragma once
#include <iostream>
class Figure
{
protected:
	int sides_count;
	std::string name;
	
public:
	Figure() {
		sides_count = 0;
		name = "������";
	}

	virtual void print_info() {
		std::cout << name << ": " << std::endl;
		if (check()) {
			std::cout << "����������" << std::endl;
		}
		else
		{
			std::cout << "������������" << std::endl;
		}
		std::cout << "���������� ������: " << sides_count << std::endl;
	};

	virtual bool check() {
		if (sides_count == 0) {
			return true;
		}
		else {
			return false;
		}
	}

};

