#include "Figura.h"
#include <iostream>
#include <string>


std::string Figura::get_name()
{
	return name;
}

void Figura::print_info()
{
	std::cout << name << " : " << std::endl;

}