/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : book.cpp
#   Last Modified : 2020-11-05 18:31
#   Describe      : 
#
# ====================================================*/

#include "book.h"
#include <cstring>

namespace home_book
{

int Book::obj_cnt = 0;

// class implement
Book::Book(const char *_isbn, const char *_name, float pr)
{
	++obj_cnt;

	int len_isbn = strlen(_isbn);
	int len_name = strlen(_name);

	isbn = new char[len_isbn + 1];
	strcpy(isbn, _isbn);
	name = new char[len_name + 1];
	strcpy(name, _name);

	price = pr;
}

Book::Book(void)
{
	++obj_cnt;

	isbn = new char[1];
	isbn[0] = '\0';

	name = new char[1];
	name[0] = '\0';

	price = 0.00;
}

Book::Book(const char* name)
{
	++obj_cnt;

	isbn = new char[1];
	isbn[0] = '\0';

	int len_name = strlen(name);
	this->name = new char[len_name + 1];
	strcpy(this->name, name);
	
	price = 0.00;
}

Book::Book(const Book &book)
{
	++obj_cnt;

	int len_isbn = strlen(book.isbn);
	int len_name = strlen(book.name);

	isbn = new char[len_isbn + 1];
	strcpy(isbn, book.isbn);
	name = new char[len_name + 1];
	strcpy(name, book.name);

	price = book.price;
}

Book & Book::operator*(double sale)
{
	return (
				(sale > 0 && sale < 1.00) ?
				(this->price *= sale, *this) :
				(*this)
			);
}

Book & Book::operator=(const Book &book)
{	// deep copy
	if (this == &book)
		return *this;
	
	delete [] this->isbn;
	delete [] this->name;

	int len_isbn = strlen(book.isbn);
	isbn = new char[len_isbn + 1];
	strcpy(isbn, book.isbn);

	int len_name = strlen(book.name);
	name = new char[len_name + 1];
	strcpy(name, book.name);

	price = book.price;

	return *this;
}

// friend funtion
Book & operator*(double sale, Book &b)
{
	return b * sale;
}

ostream & operator<<(ostream &os, const Book &book)
{
	os << "Book ISBN:" << book.isbn << endl;
	os << "Book name:" << book.name << endl;
	os << "Book price:" << book.price << endl;
	os << "------------------\n";
	return os;
}

Book::~Book(void)
{
	cout << obj_cnt << ":[ " << name << " ]" << " from memory delete\n";
	--obj_cnt;
	delete [] isbn;
	delete [] name;
}

}	// end namespace 
