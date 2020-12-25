/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : calculator_call_fun.cpp
#   Last Modified : 2020-09-30 16:11
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;

inline double add(double a, double b);
inline double sub(double a, double b);
inline double divisor(double a, double b);
inline double calculator(double a, double b,
		double (*pf)(double x, double b));

int main(void)
{
	double a, b;
	double (*pfun[3])(double, double) = {add, sub, divisor};
	char symbol[3] = {'+', '-', '/'};

	cout << "Enter two doule number:";
	while (cin >> a >> b)
	{
		for (int i=0;i<3;++i)
			cout << a << ' ' << symbol[i] << ' ' << b << " = "
				<< calculator(a, b, pfun[i]) << endl;

		cout << "Please again enter two doule number:";
	}

	return 0;
}


inline double calculator(double a, double b,
		double (*pf)(double x, double y))
{
	return (*pf)(a, b);
}


inline double add(double a, double b)
{
	return (a + b);
}


inline double sub(double a, double b)
{
	return (a - b);
}


inline double divisor(double a, double b)
{
	return (a / b);
}
