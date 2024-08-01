#include <iostream>
#include <string>
#include "Figura.h"
#include "Treug.h"
#include "Treug_pryamoyg.h"
#include "Treug_ravnobed.h"
#include "Treug_ravnostor.h"
#include "Cheterexyg.h"
#include "Pryamoyg.h"
#include "Kvadrat.h"
#include "Parallelog.h"
#include "Romb.h"
#include "MyException.h"
#include <stdexcept>


//Функция печати
void print_info(Figura* a)
{
	a->print_info();
};

int main()
{
	setlocale(LC_ALL, "rus");
	system("chcp 1251");

	try {
		Treug treug(10,20,30,40,50,60);
		print_info(&treug);
		std::cout << "Создан" << std::endl;
	}
	catch (const std::exception& Tr)
	{
		std::cerr << "Треугольник не был создан. " << std::endl << "Причина: ";
		std::cerr << Tr.what() << std::endl;
	}

	try
	{
		Treug_pryamoyg treug_pryamoyg(10, 20, 30, 40, 50, 60);
		print_info(&treug_pryamoyg);
		std::cout << "Создан" << std::endl;

	}
	catch (const std::exception& Tr_pr)
	{
		std::cerr << "Треугольник не был создан. " << std::endl << "Причина: ";
		std::cerr << Tr_pr.what() << std::endl;
	}
	try
	{
		Treug_ravnobed treug_ravnobed(10, 20, 30, 40, 50, 60);
		print_info(&treug_ravnobed);
		std::cout << "Создан" << std::endl;
	}
	catch (const std::exception& Tr_ra)
	{
		std::cerr << "Треугольник не был создан. " << std::endl << "Причина: ";
		std::cerr << Tr_ra.what() << std::endl;
	}

	try
	{
		Treug_ravnostor treug_ravnostor(10, 20, 30, 40, 50, 60);
		print_info(&treug_ravnostor);
		std::cout << "Создан" << std::endl;
	}
	catch (const std::exception& Tr_rav)
	{
		std::cerr << "Треугольник не был создан. " << std::endl << "Причина: ";
		std::cerr << Tr_rav.what() << std::endl;
	}
	try
	{
		Cheterexyg сheterexyg(10,20,30,40,90,90,90,90);
		print_info(&сheterexyg);
		std::cout << "Создан" << std::endl;
	}
	catch (const std::exception& Chet)
	{
		std::cerr << "Четырехугольник не был создан. " << std::endl << "Причина: ";
		std::cerr << Chet.what() << std::endl;
	}
	try
	{
		Pryamoyg pryamoyg(10, 20, 30, 40, 90, 90, 90, 90);
		print_info(&pryamoyg);
		std::cout << "Создан" << std::endl;
	}
	catch (const std::exception& Pr)
	{
		std::cerr << "Прямоугольник не был создан. " << std::endl << "Причина: ";
		std::cerr << Pr.what() << std::endl;
	}
	try
	{
		Kvadrat kvadrat(20,20,20,30,90,90,90,90);
		print_info(&kvadrat);
		std::cout << "Создан" << std::endl;
	}
	catch (const std::exception& Kv)
	{
		std::cerr << "Квадрат не был создан. " << std::endl << "Причина: ";
		std::cerr << Kv.what() << std::endl;
	}

	try
	{
		Parallelog parallelog(10, 20, 30, 40, 90, 90, 90, 90);
		print_info(&parallelog);
		std::cout << "Создан" << std::endl;
	}
	catch (const std::exception& Par)
	{
		std::cerr << "Параллелограм не был создан. " << std::endl << "Причина: ";
		std::cerr << Par.what() << std::endl;
	}

	try
	{
		Romb romb(10, 20, 30, 40, 90, 90, 90, 90);
		print_info(&romb);
		std::cout << "Создан" << std::endl;
	}
	catch (const std::exception& Ro)
	{
		std::cerr << "Параллелограм не был создан. " << std::endl << "Причина: ";
		std::cerr << Ro.what() << std::endl;
	}


	return 0;

}

