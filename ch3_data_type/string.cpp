/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : string.cpp
#   Last Modified : 2020-09-15 16:38
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;


int main(void)
{
	char str[100] = "rose";

	// cout << (void*)str << endl;
	printf("%s address:%p\n", "hello rose", "hello rose");
	cout << "\"hello rose\" at " << (void*)"hello rose" << endl;

	return 0;
}
