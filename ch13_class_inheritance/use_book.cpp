/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : use_book.cpp
#   Last Modified : 2020-11-15 10:11
#   Describe      : 
#
# ====================================================*/

#include "book.h"
#include "math_book.h"

using home_book::Book;
using home_book::Math_book;

int main(void)
{
	Book b1("123456", "C++", 100.00);
	// Book b2 = Book("9787801146274", "English of Magic", 200.00);

	Math_book m1("123456789", "What is math?", 100.00, "Ko.Lang");
	// Math_book m2("Ken.Tom", b2);

	/*
	 * cout << "b1 use memory:" << sizeof(b1) << endl;
	 * cout << "m1 use memory:" << sizeof(m1) << endl;
	 */

#if 1
	Book *p1;
	
	p1 = &b1;
	cout << p1->sale(0.85) << endl;

	p1 = &m1;
	cout << p1->sale(0.85) << endl;
#endif

}
