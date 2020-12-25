/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : placement_new.cpp
#   Last Modified : 2020-10-11 17:55
#   Describe      : 
#
# ====================================================*/

#include <iostream>
#include <new>

using namespace std;

const int SIZE = 1000;
const int N = 10;

int buffer[SIZE];

int main(void)
{
	double *pd = new (buffer) double[N];

	for (int i=0;i<N;++i)
		*(pd+i) = 100.0 * i;

	for (int i=0;i<N;++i)
		cout << *(pd+i) << "\n";
	
	cout << "---------------\n";

	for (int i=0;i<N*2;++i)
		cout << buffer[i] << "\n";

#if 0
	int i = 20;
	int *pi = new (&i)int;	// ==> int *pi = &i;
	*pi = 1;
	cout << i << " = i\n";
#endif

	return 0;
}
