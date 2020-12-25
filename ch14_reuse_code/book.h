/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : book.h
#   Last Modified : 2020-11-20 20:05
#   Describe      : 
#
# ====================================================*/

#ifndef  _BOOK_H
#define  _BOOK_H

#include <iostream>

using std::string;
using std::ostream;
using std::cin;
using std::cout;
using std::endl;

namespace home_book
{

class Book
{

private:
	static int obj_cnt;	// Object of count
	string name;
	double price;

public:
	// Constructor funtion prototype
	Book(const char* p_name, double price);
	Book(void);
	explicit Book(const char* p_name);
	Book(const Book &book);

	// Destructor funtion prototype
	~Book(void);

	// Operator overloading
	Book & operator*(double sales);
	const Book & operator=(const Book &book);
	
	// Friend function
	friend Book & operator*(double sales, Book &book);
	friend ostream & operator<<(ostream &os, const Book &book);

	// virtual Book & sale(double sl);

	double get_price() { return (this->price); }

protected:
	void set_price(float price) { this->price = price; }

};


}

#endif // _BOOK_H
