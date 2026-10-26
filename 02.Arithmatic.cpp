//main.cpp

#include "Arithmatic.h"
#include <iostream>

int main()
{
	double x{input()};
	char y{input2()};
	double z{input()};

	operation(x, y, z);

	return 0;
}

//input.cpp

#include "Arithmatic.h"
#include <iostream>

double input()
{
	std::cout << "Enter the  number : ";
	double x{};
	std::cin >> x;

	return x;
}


char input2()
{
	std::cout << "Enter the operation (+, - , * , /) : ";
	char z{};
	std::cin >> z;

	return z;
}

operation.cpp

#include "Arithmatic.h"
#include <iomanip>
#include <iostream>

void operation(double a, char b, double c)
{
	std::cout << std::setprecision(9);

	char z1{'+'};
	char z2{'-'};
	char z3{'*'};
	char z4{'/'};

	if (b == z1)
		std::cout << "Answer : " << a+c;

	if (b == z2)
		std::cout << "Answer : " << a-c;

	if(b == z3)
		std::cout << "Answer : " << a*c;

	if(b == z4)
		std::cout << "Answer : " << a/c;


	return;
}

//Arithmatic.h

#ifndef ARITHMATIC_H
#define ARITHMATIC_H

double input();
char input2();
void operation(double a, char b, double c);

#endif
