/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : fun_over.cpp
#   Last Modified : 2020-10-04 19:26
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;

#if 1
inline int addition(int a, int b)
{
	return (a + b);
}

inline char addition(char a, char b)
{
	return (a + b);
}

inline double addition(double a, double b = 20)	// defalut argument
{
	return (a + b);
}
#endif


int main(void)
{
	cout << addition(1, 2) << endl;
	cout << addition('b', '-') << endl;
	cout << addition(22.32, 10.36) << endl;

	return 0;
}
