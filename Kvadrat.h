#pragma once
#include<iostream>
#include "Pryamoyg.h"
#include <string>
#include "MyException.h"

//Êëàññ êâàäðàò
class Kvadrat :public Pryamoyg
{
protected:

	std::string name = "Êâàäðàò:";

public:
	Kvadrat()
	{
		std::string name;
		this->a = b;
		this->c = d;

	}
	Kvadrat(int a, int b, int c, int d, int A, int B, int C, int D)
	{
		this->b = b;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
		this->name = "Êâàäðàò:";

		if (a != b || b != c || c != d)
		{
			throw MyException("Ошибка создания фигуры. Причина: стороны не равны");
		}
		if (A != 90 || B != 90 || C != 90 || D != 90)
		{
			throw MyException("Ошибка создания фигуры. Причина: углы не равны 90");
		}
	}
	void print_info() override;

};

