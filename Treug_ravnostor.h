#pragma once
#include "Treug.h"
#include <iostream>
#include <string>

//����� �������������� �����������
class Treug_ravnostor :public Treug
{
protected:
	std::string name = "�������������� �����������";

public:
	Treug_ravnostor()
	{
		std::string name = "�������������� �����������:";
		this->c = a;
		this->b = a;
		this->A = B;
		this->C = B;
	}

	Treug_ravnostor(int a, int b, int c, int A, int B, int C)
	{
		this->name = "�������������� �����������:";
		this->a = a;
		this->B = B;

		if (a != b != c)
		{
			throw MyException("������ �������� ������. �������: ������� �� �����");
		}
		if (a != b != c != 60)
		{
			throw MyException("������ �������� ������. �������: ���� �� ����� 60");
		}




	}
	void print_info() override;


};


