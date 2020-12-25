/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : use_book.cpp
#   Last Modified : 2020-11-05 19:34
#   Describe      : 
#
# ====================================================*/

#include "book.h"

using home_book::Book;

int main(void)
{
	Book b1("123456", "C++", 100.00);
	Book b2 = Book("9787801146274", "English of Magic", 200.00);
	Book b3 = Book("English");
	Book *b4 = new Book(b2);
	// b4 = b1;

	cout << b1 << b2 << b3 << *b4 << endl;

	delete b4;

	return 0;
}
