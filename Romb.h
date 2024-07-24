#pragma once
#include<iostream>
#include "Parallelog.h"
#include <string>
#include "MyException.h"

//Класс ромб
class Romb :public Parallelog
{
protected:

	std::string name = "Ромб:";

public:
	Romb()
	{
		std::string name;
		this->a = b;
		this->c = d;

	}
	Romb(int a, int b, int c, int d, int A, int B, int C, int D)
	{
		this->b = b;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
		this->name = "Ромб:";

		if (a != c != b != d)
		{
			throw MyException("Ошибка создания фигуры. Причина: стороны не равны");
		}
		if ((A != C) || (B != D))
		{
			throw MyException("Ошибка создания фигуры. Причина: углы попарно не равны");
		}
	}
	void print_info() override;

};

