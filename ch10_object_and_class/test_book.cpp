/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : test_book.cpp
#   Last Modified : 2020-10-24 09:24
#   Describe      : 
#
# ====================================================*/

#include <iostream>
#include "book.h"

using namespace std;
using home_book::Book;

int main(void)
{
	Book b2("123456", "c++", "plihe", 123.36, "hello c++");
	// Book b2 = Book("9787801146274", "English of Magic", "XuanYuanYou", 123.36, "Language");

	if (! b2.sell(150.36))
		cout << "sell not fail\n";

	Book b[5] = 
	{
		Book(),
		Book("1265478", "English Grammer", "Jim Labor", 45.50, "Hello English"),
	};

	// cout << sizeof(b) << " bytes: object array use menmorys\n";
	
	b2.show();
	cout << endl;
	b[1].show();
	cout << endl;

	return 0;
}
