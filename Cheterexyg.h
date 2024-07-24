#pragma once
#include<iostream>
#include "Figura.h"
#include <string>

// Класс четырехугольник
class Cheterexyg :public Figura
{
protected:
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	int A = 50;
	int B = 60;
	int C = 70;
	int D = 80;
	std::string name = "Четырёхугольник:";

public:
	Cheterexyg()
	{
		std::string name;
	}
	Cheterexyg(int a, int b, int c, int d, int A, int B, int C, int D)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = a;
		this->B = B;
		this->C = C;
		this->D = D;
		this->name = "Четырёхугольник:";
	}
	void print_info() override;

};
