/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : if.cpp
#   Last Modified : 2020-09-20 18:22
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;

void nested_if_else(int a)
{
	if (a >= 10 && a < 20)	
		cout << "a bettwen 10 and 20\n";
	else if (a >= 20 && a < 30)
		cout << "a bettwen 20 and 30\n";
	else
		cout << "a great than 30\n";

	return;
}

int main(void)
{
	char ch;

	cout << "Enter character:\n";
	cin.get(ch);

#if 1
	while (! cin.fail())
	{
		if (ch == '\n')
			cout << endl;
		else
			cout << ++ch;

		cin.get(ch);
	}

	cout << endl;
#endif

/*
 *     int a;
 *     cin >> a;
 * 
 *     nested_if_else(a);
 */

	return 0;
}
