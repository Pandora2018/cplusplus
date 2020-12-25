/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : book.cpp
#   Last Modified : 2020-10-24 09:23
#   Describe      : 
#
# ====================================================*/

#include <iostream>
#include <cstring>
#include "book.h"

using namespace std;
using home_book::Book;

// class implement
Book::Book(const char *_isbn, const char *_name, const char *au, float pr, const char *ty)
{
	strncpy(isbn, _isbn, 20);
	strncpy(name, _name, 20);
	strncpy(author, au, 20);
	strncpy(type, ty, 20);
	price = pr;
}

Book::Book(float pr)
{
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

int Book::sell(double price)
{
	if (price < this->price)
	{
		cout << this->name << " price low than " << this->price << ".\n";
		return ERR;
	}

	this->price = price;

	return OK;
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
