/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : show_stars.cpp
#   Last Modified : 2020-09-18 17:50
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;

#define ERROR -2


int main(void)
{
	int rows;
	
	cout << "Enter a integer(>0):";
	cin >> rows;

	if (rows<=0)
	{
		cout << "\"rows\" must great than 0."
			"program had finish!\n";
		exit(ERROR);
	}

	for (int line=0;line<rows;++line)
	{
		for (int point=0;point<rows-line-1;++point)
			cout << '.';

		for (int stars=0;stars<line+1;++stars)
			cout << "*";

		cout << endl;
	}

	return 0;
}
