#pragma once
#include "Treug.h"
#include <iostream>
#include <string>
#include "MyException.h"

//����� ������������� �����������
class Treug_pryamoyg :public Treug
{
protected:
	std::string name = "������������� �����������";
public:
	Treug_pryamoyg()
	{
		std::string name = "������������� �����������";
		this->C = 90;
	}

	Treug_pryamoyg(int a, int b, int c, int A, int B, int C)
	{
		this->name = "������������� �����������";
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = 90;

		if (C != 90)
		{
			throw MyException("������ �������� ������. �������: ���� � �� ����� 90");

		}

	}

	void print_info() override;


};

