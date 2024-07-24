#pragma once
#include<iostream>
#include "Figura.h"
#include <string>
#include "MyException.h"


//Класс параллелограмм
class Parallelog :public Figura
{
protected:
	int a = 20;
	int b = 30;
	int c = 20;
	int d = 30;
	int A = 30;
	int B = 40;
	int C = 30;
	int D = 40;
	std::string name = "Параллелограмм:";

public:
	Parallelog()
	{
		std::string name;
	}
	Parallelog(int a, int b, int c, int d, int A, int B, int C, int D)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
		this->name = "Параллелограмм:";

		if ((a != c) || (b != d))
		{
			throw MyException("Ошибка создания фигуры. Причина: стороны попарно не равны");
		}
		if ((A != C) || (B != D))
		{
			throw MyException("Ошибка создания фигуры. Причина: углы попарно не равны");
		}
	}
	void print_info() override;

};

