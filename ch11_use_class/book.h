/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : book.h
#   Last Modified : 2020-10-26 16:32
#   Describe      : 
#
# ====================================================*/

#ifndef  _BOOK_H
#define  _BOOK_H

#define OK 1
#define ERR -1

namespace home_book
{
	class Book	// class declaration
	{
		private:
			static const int SIZE = 30;
			char isbn[SIZE];
			char name[SIZE];
			char author[SIZE];
			float price;
			char type[SIZE];

		public:
			// Constructor funtion prototype
			Book(const char *_isbn, const char *_name, const char *_au, float pr, const char * ty);
			Book(void);
			// Destructor funtion prototype
			~Book(void);
			bool sell(double price);
			// Operator overloading
			Book & operator*(double sales);
			// friend function
			friend Book & operator*(double sales, Book &);
			friend void sum(const Book &one, const Book &two, Book &res);
			void show(void) const;
	};
}

#endif // _BOOK_H
