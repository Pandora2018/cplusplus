/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : array.cpp
#   Last Modified : 2020-09-18 18:29
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;


int main(void)
{
#if 0
	int year;
	char desc[30];

	cout << "Enter year:";
	cin >> year;
	cout << "Enter desc:";
	cin.get();
	cin.get(desc, 30);

	cout << "year:" << year << " desc:" << desc << endl;

#endif

	int days[12][2] = 
	{
		{1, 31}, {2, 29}, {3, 31}, {4, 30}, {5, 31}, {6, 30},
		{7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}
	};

	/*
	 * cout << (void*)(*(days+1)+1) << endl;
	 * cout << *(*(days+1)+1) << endl;
	 */

	const char* name[3] =
	{
		"Jim", "Lily", "Jason"
	};

	cout << *(*(name+2)+3) << endl;
	cout << *(name+2) << endl;

	return 0;
}
