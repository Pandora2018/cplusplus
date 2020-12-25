/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : const.cpp
#   Last Modified : 2020-09-06 09:52
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;

void const_func(void);

int main(void)
{
	// Symbolic constant
	const int MONTHS = 12;

	#define YEARS 2020
	#define MY_DAYS 30
	const_func();

	cout << "MONTHS:" << MONTHS << endl;
	cout << "year:" << YEARS << endl;

	return 0;
}

void const_func(void)
{
	const int DAYS = MY_DAYS;
	cout << "days:" << DAYS << endl;

	return;
}
