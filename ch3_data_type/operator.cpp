/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : operator.cpp
#   Last Modified : 2020-09-06 17:08
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;


int main(void)
{

	// "/" operator overloading
	int div_int = 10 / 6;		// int divide
	float div_float = 10.0f / 2.4f;		// float divide
	double div_double = 11.23 / 34.98;	// double divide
	double div_mix = 23.09 / 23;		// mix divide

	// cout << "res:" << div_mix << endl;
	
	/*
	 * int days = 3265456;
	 * cout <<  days / 365 << " Year(s)," << days % 365 << " Day(s)" << endl;
	 */

	char ch = 88;

	/*
	 * cout << "ch:" << ch << endl;
	 * cout << "char(88):" << char(88) << endl;
	 * cout << "(char)88:" << (char)88 << endl;
	 */

	// cout << "3.1236 conver to int:" << (int)3.1236 << endl;
	

	return 0;
}
