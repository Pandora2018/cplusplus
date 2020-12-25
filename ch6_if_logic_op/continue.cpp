/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : continue.cpp
#   Last Modified : 2020-09-20 18:42
#   Describe      : 
#
# ====================================================*/

/*
 * #include <iostream>
 * using namespace std;
 */
#include <stdio.h>


int main(void)
{
	for (int i = 1; i <= 100; ++i)
	{
		if (i > 50)
			break;

		if (i % 3 != 0)
			continue;
		
		// cout << i << ' ';
		printf("%d ", i);
	}

	// cout << endl;
	putchar('\n');

	return 0;
}
