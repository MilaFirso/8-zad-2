#pragma once
#include "Treug.h"
#include <iostream>
#include <string>

//Класс равносторонний треугольник
class Treug_ravnostor :public Treug
{
protected:
	std::string name = "Равносторонний треугольник";

public:
	Treug_ravnostor()
	{
		std::string name = "Равносторонний треугольник:";
		this->c = a;
		this->b = a;
		this->A = B;
		this->C = B;
	}

	Treug_ravnostor(int a, int b, int c, int A, int B, int C)
	{
		this->name = "Равносторонний треугольник:";
		this->a = a;
		this->B = B;

		if (a != b != c)
		{
			throw MyException("Ошибка создания фигуры. Причина: стороны не равны");
		}
		if (a != b != c != 60)
		{
			throw MyException("Ошибка создания фигуры. Причина: углы не равны 60");
		}




	}
	void print_info() override;


};


