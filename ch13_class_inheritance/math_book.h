/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : math_book.h
#   Last Modified : 2020-11-15 10:11
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

class Math_book : public Book
{

private:
	char *author;

public:
	Math_book(void);
	Math_book(const char *isbn, const char *name, double price, const char *author);
	Math_book(const char *author, Book &b);
	
	// Copy Constructor function
	Math_book(const Math_book &m);

	// virtual function
	virtual Math_book & sale(float sl) override;

	const Math_book & operator=(const Math_book &m);

	friend ostream & operator<<(ostream &os, const Math_book &m);
	
	~Math_book(void);
};

} // end namespace home_book

#endif // _MATH_BOOK_H
