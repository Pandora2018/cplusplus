/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : cin_get.cpp
#   Last Modified : 2020-09-19 17:32
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;


int main(void)
{
	int ch;
	// char ch;
	cout << "Enter character:";

	while ((ch = cin.get()) != EOF)
	// while (cin.get(ch))
		// cout << ch;
		cout.put((char)ch);

	return 0;
}
