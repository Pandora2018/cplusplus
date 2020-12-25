/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : cin_input.cpp
#   Last Modified : 2020-09-18 18:53
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;


int main(void)
{
	int a;
	cout << "Enter a integer:";

	while (cin >> a)
	{
		cout << a << "\n";
		cout << "Please input integer:";
	}

	cout << "eof:" << cin.eof() << endl;
	cout << "Input error after fail:" << cin.fail() << endl;
	cin.clear();
	cout << "Clear fail flags:" << cin.fail() << endl;

	// cout << endl;

	return 0;
}
