/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : char_type.cpp
#   Last Modified : 2020-08-29 14:15
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;


int main(void)
{
#if 0
	char ch = '\0110';
	int char_i = ch;

	cout << "ch:" << ch << endl;
	printf("ch:%d\n", ch);
	cout << "char_i:" << char_i << endl;
#endif

	// cout << "wcahr_t use members:" << sizeof(wchar_t) << " Bytes" << endl;
	
	wchar_t bob = L'A';
	// wcout << L"hello" << endl;
	cout << "variable \"bob\" use members:" << sizeof bob << endl;
	

	return 0;
}
