/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : book.h
#   Last Modified : 2020-11-05 18:32
#   Describe      : 
#
# ====================================================*/

#ifndef  _BOOK_H
#define  _BOOK_H

#include <iostream>
using namespace std;

namespace home_book
{
	class Book
	{
		private:
			char* isbn;
			char* name;
			float price;
			static int obj_cnt;	// Object of count

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
			Book & operator=(const Book &book);
			// friend function
			friend Book & operator*(double sales, Book &book);
			friend ostream & operator<<(ostream &os, const Book &book);
	};
}

#endif // _BOOK_H
