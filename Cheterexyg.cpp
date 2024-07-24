#include "Cheterexyg.h"
#include "Figura.h"
#include <iostream>
#include <string>

void Cheterexyg::print_info()
{
	std::cout << name << " : " << std::endl;
	std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
	std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
	std::cout << '\n';
};
