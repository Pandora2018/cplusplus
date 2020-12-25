/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : english_book.cpp
#   Last Modified : 2020-11-13 18:56
#   Describe      : 
#
# ====================================================*/

#include <iostream>
#include <cstring>
#include "english_book.h"

using namespace std;

namespace home_book
{


English_book::English_book(const char *isbn, const char *name, double price, const char *author)
	: Book(isbn, name, price)
{
	strncpy(this->author, author, 20);
}


English_book::English_book(const char *author, Book &b) : Book(b)
{
	strncpy(this->author, author, 20);
}


English_book::English_book(void) : Book()
{
	strncpy(this->author, "\0", 20);
}


#if 0
English_book::English_book(const English_book &e) : Book(e)
{
	strncpy(this->author, e.author, 20);
}
#endif


// virtual function
English_book & English_book::sale(float sl)
{
	sl = (sl > 0 && sl < 0.75) ? sl : 0.75;
	float pr = this->Book::get_price();
	pr *= sl;
	this->Book::set_price(pr);
	return *this;
}


#if 0
const English_book & English_book::operator=(const English_book &e)
{
	if (this == &e)
		return *this;
	
	Book::operator=((Book &)e);		// copy base(Book) class member
	strncpy(this->author, e.author, 20);

	return *this;
}
#endif

ostream & operator<<(ostream &os, const English_book &e)
{
	os << (Book &)e;
	os << "Book author:" << e.author << endl;
	os << "------------------\n";
	
	return os;
}


#if 0
English_book::~English_book(void)
{

}
#endif



}	// end namespace home_book
