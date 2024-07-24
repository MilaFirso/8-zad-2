#pragma once
#include<iostream>

// Класс обычной фигуры
class Figura
{
protected: std::string name = "Фигура";

public:	Figura()
{
	std::string name;
}

	  std::string get_name();


	  virtual void print_info();


};

