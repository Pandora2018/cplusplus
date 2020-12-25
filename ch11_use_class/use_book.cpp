/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : use_book.cpp
#   Last Modified : 2020-10-26 16:32
#   Describe      : 
#
# ====================================================*/

#include <iostream>
#include "book.h"

using namespace std;
using home_book::Book;

int main(void)
{
	Book b1("123456", "C++", "Plihe", 100.00, "Hello C++");
	Book b2 = Book("9787801146274", "English of Magic", "XuanYuanYou", 200.00, "Language");
	b1.show();
	cout << endl;

	// Operator overloading
	/*
	 * b1 = b1 * 0.75;
	 * cout << "b1 book info:\n";
	 * b1.show();
	 * cout << endl;
	 */

	Book res;
	sum(b1, b2, res);
	res.show();
	cout << endl;

	return 0;
}
