/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : expression.cpp
#   Last Modified : 2020-09-16 17:44
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;


int main(void)
{
	int x, y;
	y = (x = 5);
	// y = x = 10;

	cout << x << "\t" << y << endl;
	cout << (x < 10) << endl;

	return 0;
}
