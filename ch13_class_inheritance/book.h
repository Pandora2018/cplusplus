/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : book.h
#   Last Modified : 2020-11-15 10:12
#   Describe      : 
#
# ====================================================*/

#ifndef  _BOOK_H
#define  _BOOK_H

#include <iostream>
using namespace std;

namespace home_book
{

// Abstract base class
class Book
{

private:
	static int obj_cnt;	// Object of count
	char* isbn;
	char* name;
	float price;

public:
	// Constructor funtion prototype
	Book(const char *_isbn, const char *_name, float pr);
	Book(void);
	explicit Book(const char* name);
	Book(const Book &book);

	// Destructor funtion prototype
	~Book(void);

	// Operator overloading
	Book & operator*(double sales);
	const Book & operator=(const Book &book);
	
	// Friend function
	friend Book & operator*(double sales, Book &book);
	friend ostream & operator<<(ostream &os, const Book &book);

	// Pure virtual function
	// virtual Book & sale(float sl) = 0;
	virtual Book & sale(float sl);

	float get_price() { return this->price; }

protected:
	void set_price(float price) { this->price = price; }

};


}

#endif // _BOOK_H
