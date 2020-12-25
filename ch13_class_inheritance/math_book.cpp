/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : math_book.cpp
#   Last Modified : 2020-11-15 10:11
#   Describe      : 
#
# ====================================================*/

#include <iostream>
#include <cstring>
#include "math_book.h"

using namespace std;

namespace home_book
{


Math_book::Math_book(const char *isbn, const char *name, double price, const char *author)
	: Book(isbn, name, price)
{
	int len = strlen(author);
	this->author = new char[len + 1];
	strcpy(this->author, author);
}


Math_book::Math_book(const char *author, Book &b) : Book(b)
{
	int len = strlen(author);
	this->author = new char[len + 1];
	strcpy(this->author, author);
}


Math_book::Math_book(void) : Book()
{
	author = new char[1];
	author[0] = '\0';
}


Math_book::Math_book(const Math_book &m) : Book(m)
{
	author = new char[strlen(m.author) + 1];
	strcpy(author, m.author);
}


#if 1
// virtual function
Math_book & Math_book::sale(float sl)
{
	sl = (sl > 0 && sl < 0.75) ? sl : 0.75;
	float pr = Book::get_price();
	pr *= sl;
	Book::set_price(pr);
	return *this;
}
#endif


const Math_book & Math_book::operator=(const Math_book &m)
{
	if (this == &m)
		return *this;
	
	delete [] author;

	Book::operator=((Book &)m);		// copy base(Book) class member
	author = new char[strlen(m.author) + 1];
	strcpy(author, m.author);

	return *this;
}


ostream & operator<<(ostream &os, const Math_book &m)
{
	os << (Book &)m;
	os << "Book author:" << m.author << endl;
	os << "------------------\n";
	
	return os;
}


Math_book::~Math_book(void)
{
	delete [] author;
}



}	// end namespace home_book
