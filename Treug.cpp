#include "Treug.h"
#include "Figura.h"
#include <iostream>
#include <string>

void Treug::print_info()
{
	std::cout << name << " : " << std::endl;
	std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << std::endl;
	std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << std::endl;
	std::cout << '\n';
}
