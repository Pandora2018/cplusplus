/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : float_point.cpp
#   Last Modified : 2020-09-06 10:56
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;


int main(void)
{
	float mass = 0.0000000023F;
	long double weight = -45.6L;
	double length = 2.36;

	cout << "mass:" << mass << endl;
	cout  << "weight:" << weight << endl;
	cout << "length:" << length << endl;
	
	// cout << "float:" << sizeof(float) << "\n" << "double:" << sizeof(double) << "\n" << "long double:" << sizeof(long double) <<"\n";

	return 0;
}
