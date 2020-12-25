/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : calculator_call_fun_other.cpp
#   Last Modified : 2020-09-30 16:43
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;

double add(double a, double b);
double sub(double a, double b);
double divisor(double a, double b);
double calculator(double a, double b,
		double (*pf)(double x, double b));

int main(int argc, char** argv) // "char** argv" also write "char* argv[]"
{
	double a, b;
	a = atof(*(argv+1));
	b = atof(*(argv+2));

	double (*pfun[3])(double, double) = {add, sub, divisor};
	char symbol[3] = {'+', '-', '/'};

	for (int i=0;i<3;++i)
		cout << a << ' ' << symbol[i] << ' ' << b << " = "
			<< calculator(a, b, pfun[i]) << endl;

	return 0;
}


double calculator(double a, double b,
		double (*pf)(double x, double y))
{
	return (*pf)(a, b);
}


double add(double a, double b)
{
	return (a + b);
}


double sub(double a, double b)
{
	return (a - b);
}


double divisor(double a, double b)
{
	return (a / b);
}
