/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : default_argument.cpp
#   Last Modified : 2020-10-04 09:51
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;

double cube(double v = 2.0);

int main(void)
{
	double res = cube();
	cout << res << " = res\n";

	return 0;
}


double  cube(double v)
{
	return v *= (v * v);
}
