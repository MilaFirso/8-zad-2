#pragma once
#include<iostream>
#include "Pryamoyg.h"
#include <string>
#include "MyException.h"

//����� �������
class Kvadrat :public Pryamoyg
{
protected:

	std::string name = "�������:";

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
		this->name = "�������:";

		if ((a != b) && (c != d))
		{
			throw MyException("������ �������� ������. �������: ������� �� �����");
		}
		if (A != B != C != D != 90)
		{
			throw MyException("������ �������� ������. �������: ���� �� ����� 90");
		}
	}
	void print_info() override;

};

