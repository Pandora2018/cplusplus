/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : enum.cpp
#   Last Modified : 2020-09-14 15:43
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;


int main(void)
{
	enum
	{ 
		age = 10,
		weight,
		height = 11
	};

	// number n = age;
	int res = height + 35;

	// cout << "n:" << n << endl;
	cout << "res:" << res << endl;

	return 0;
}
