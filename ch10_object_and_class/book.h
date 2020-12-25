/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : book.h
#   Last Modified : 2020-10-24 09:24
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
			static const int SIZE = 20;
			char isbn[SIZE];
			char name[SIZE];
			char author[SIZE];
			float price;
			char type[SIZE];

		public:
			// Constructor funtion prototype
			Book(const char *_isbn, const char *_name, const char *_au, float pr, const char * ty);
			Book(float pr);
			Book(void);
			// Destructor funtion prototype
			~Book(void);
			int sell(double price);
			void show(void) const;
	};
}

#endif // _BOOK_H
