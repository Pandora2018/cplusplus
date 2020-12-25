/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : english_book.h
#   Last Modified : 2020-11-13 18:56
#   Describe      : 
#
# ====================================================*/

#ifndef  _MATH_BOOK_H
#define  _MATH_BOOK_H

#include <iostream>
#include "book.h"

using namespace std;

// Inheriter class from base class : Book
namespace home_book
{

class English_book : public Book
{

private:
	char author[20];

public:
	English_book(void);
	English_book(const char *isbn, const char *name, double price, const char *author);
	English_book(const char *author, Book &b);
	
	// Copy Constructor function
	// English_book(const English_book &me);

	// virtual function
	virtual English_book & sale(float sl) override;

	// const English_book & operator=(const English_book &me);

	friend ostream & operator<<(ostream &os, const English_book &me);
	
	// ~English_book(void);
};

} // end namespace home_book

#endif // _MATH_BOOK_H
