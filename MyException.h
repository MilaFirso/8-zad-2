#pragma once
#include <stdexcept>
#include "Figura.h"
#include <string>
#include <iostream>


class MyException : public std::domain_error
{
public: using domain_error::domain_error;
};

/*class MyException :public std::exception
{
private:
	std::string m_error;
public:
	MyException(std::string err) :m_error(err){}

	const char* what() const override
	{
		return m_error.c_str();
	}
};*/
