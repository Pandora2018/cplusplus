/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : fun_point.cpp
#   Last Modified : 2020-09-27 10:09
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;

int show(int n);


int main(void)
{

	int (*pf)(int) = &show;
	printf("show() address:%p\n", pf);
	printf("show() calling:%d\n", (*pf)(10));

	int (**qf)(int) = &pf;
	printf("show() calling:%d\n", (**qf)(100));
	printf("pf value:%p\n", *qf);
	
	return 0;
}

int show(int n)
{
	return n;
}
