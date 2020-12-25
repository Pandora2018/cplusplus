/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : bit_field.cpp
#   Last Modified : 2020-09-12 17:54
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;


int main(void)
{
	struct bit
	{
		unsigned int flag : 6;
		unsigned int pos : 2;
		unsigned int reg : 10;
		unsigned int mem : 14;
	};

	bit b = {3, 9, 8563, 300};

	cout << "flag:" << b.flag << endl;
	cout << "pos:" << b.pos << endl;
	cout << "reg:" << b.reg << endl;
	cout << "mem:" << b.mem << endl;
	cout << "sizeof(bit):" << sizeof(bit) << endl;

	return 0;
}
