/*
 * Use private inheritance implement "has-a" relationship
 */


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

class Book : private string<char>
{

private:
	static int obj_cnt;
	double price;

public:
	Book(const char* p_name, double price);
	Book(void);
	explicit Book(const char* p_name);
	Book(const Book &book);

	~Book(void);

	Book & operator*(double sales);
	const Book & operator=(const Book &book);
	
	friend Book & operator*(double sales, Book &book);
	friend ostream & operator<<(ostream &os, const Book &book);

	// virtual Book & sale(double sl);

	double get_price() { return (this->price); }

};


}

#endif // _BOOK_H
