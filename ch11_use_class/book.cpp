/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : book.cpp
#   Last Modified : 2020-10-26 16:32
#   Describe      : 
#
# ====================================================*/

#include <iostream>
#include <cstring>
#include "book.h"
using namespace std;

namespace home_book
{
// class implement
Book::Book(const char *_isbn, const char *_name, const char *au, float pr, const char *ty)
{
	strncpy(isbn, _isbn, SIZE);
	strncpy(name, _name, SIZE);
	strncpy(author, au, SIZE);
	strncpy(type, ty, SIZE);
	price = pr;
}

Book::Book(void)
{
	strcpy(isbn, "No isbn");
	strcpy(name, "No name");
	strcpy(author, "No author");
	strcpy(type, "No type");
	price = 0.00;
}

bool Book::sell(double price)
{
	if (price < this->price)
	{
		cout << this->name << " price low than " << this->price << ".\n";
		return false;
	}

	this->price = price;

	return true;
}

Book & Book::operator*(double sale)
{
	return (
				(sale > 0 && sale < 1.00) ?
				(this->price *= sale, *this) :
				(*this)
			);
}

// friend funtion
Book & operator*(double sale, Book &b)
{
	return b * sale;
}

// friend funtion
void sum(const Book &one, const Book &two, Book &res)
{
	res.price = one.price + two.price;
}

void Book::show(void) const
{
	cout << "Book name:" << name << endl;
	cout << "Book author:" << author << endl;
	cout << "Book ISBN:" << isbn << endl;
	cout << "Book type:" << type << endl;
	cout << "Book price:" << price << endl;
}

Book::~Book(void)
{
	cout << "\"" << name << "\" Good Bye!\n";
}

}	// end namespace 
