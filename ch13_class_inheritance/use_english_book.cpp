/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : use_english_book.cpp
#   Last Modified : 2020-11-13 18:56
#   Describe      : 
#
# ====================================================*/

#include "book.h"
#include "english_book.h"

using home_book::Book;
using home_book::English_book;

int main(void)
{
	English_book e1("9787801146274", "English of Magic", 41.80, "Jack Xuan");
	English_book e2;

	// e2 = e1;

	// cout << e1 << e2.sale(0.70);
	// cout << e1 << e2;

	Book *b = &e1;
	
	cout << (English_book &)(b->sale(0.36));

}
