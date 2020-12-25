/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : const_ref.cpp
#   Last Modified : 2020-10-04 10:11
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;

double cube(const double & v);

int main(void)
{
	char i = 'a';

	double res = cube(i);

	cout << "res = " << res << endl;
	cout << "i = " << (int)i << endl;

	return 0;
}

double cube(const double & v)
{
	return (v * v * v);
}
