/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : book.cpp
#   Last Modified : 2020-11-20 20:04
#   Describe      : 
#
# ====================================================*/

#include "book.h"

namespace home_book
{

int Book::obj_cnt = 0;

// Class implement
Book::Book(const char* p_name, double price)
{
	++obj_cnt;
	
	// name = p_name;
	name = string(p_name);
	this->price  = price;
}


Book::Book(void)
{
	++obj_cnt;

	char temp[50];
	
	cout << "Please write book name:";
	cin.get(temp, 50);
	name = string(temp);
	// name = temp;
	
	cout << "Please write \"" << name << "\" price:";
	cin >> price;
}


Book::Book(const char* p_name)
{
	++obj_cnt;
	
	name = string(p_name);

	cout << "Please write \"" << name << "\" price:";
	std::cin >> price;
}


Book::Book(const Book &book)
{
	++obj_cnt;

	name = book.name;
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


const Book & Book::operator=(const Book &book)
{	// deep copy
	if (this == &book)
		return (*this);
	
	name = book.name;
	price = book.price;

	return (*this);
}


// friend funtion
Book & operator*(double sale, Book &b)
{
	return (b * sale);
}


ostream & operator<<(ostream &os, const Book &book)
{
	os << "The price of " << "\"" << book.name << "\""
		<< " : " << book.price << endl;
	return os;
}


#if 0
// virtual function
Book & Book::sale(double sl)
{
	sl = (sl > 0 && sl < 0.90) ? sl : 1.00;
	this->price *= sl;
	return (*this);
}
#endif


Book::~Book(void)
{
	cout << obj_cnt << ":[ " << name << " ]" << " from memory delete\n";
	--obj_cnt;
}

}	// end namespace 
