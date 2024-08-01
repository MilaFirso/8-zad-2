#pragma once
#include<iostream>
#include "Figura.h"
#include <string>
#include "MyException.h"

//Êëàññ ïðÿìîóãîëüíèê
class Pryamoyg :public Figura
{
protected:
	int a = 10;
	int b = 20;
	int c = 10;
	int d = 20;
	int A = 90;
	int B = 90;
	int C = 90;
	int D = 90;
	std::string name = "Ïðÿìîóãîëüíèê:";

public:
	Pryamoyg()
	{
		std::string name;
	}
	Pryamoyg(int a, int b, int c, int d, int A, int B, int C, int D)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
		this->name = "Ïðÿìîóãîëüíèê:";

		if ((a != c) || (b != d))
		{
			throw MyException("Ошибка создания фигуры. Причина: стороны попарно не равны");
		}
		if (A != 90 || B != 90 || C != 90 || D != 90)
		{
			throw MyException("Ошибка создания фигуры. Причина: углы не равны 90");
		}
	}
	void print_info() override;

};

