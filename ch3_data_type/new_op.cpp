/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : new_op.cpp
#   Last Modified : 2020-09-14 15:13
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;


int main(void)
{
	int length;

	cout << "Enter array length:";
	cin >> length;

	int* pi = (int*)new int [length];
	// int* pi = (int*)new int;
	// int* pi = (int*)malloc(length * sizeof(int));

	for (int i=0;i<length;++i)
		*(pi+i) = 10 * i;

	for (int j=0;j<length;++j)
		cout << "pi[" << j << "]=" << pi[j] << endl;

	// cout << "pi=" << pi << endl;
	// cout << "*pi=" << *pi << endl;
	
	cout << "sizeof(pi):" << sizeof(pi) << " Bytes\n";

	// free(pi);
	delete [] pi;
	// delete pi;

	// pi = NULL;
	cout << "pi=" << pi << endl;

	return 0;
}
