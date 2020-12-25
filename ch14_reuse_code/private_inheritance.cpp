#include "book.h"

namespace home_book
{

int Book::obj_cnt = 0;

// Class implement
Book::Book(const char* pn, double price)
{
	++obj_cnt;

	string("good");
	this->price = price;
}


Book::Book(void)
{
	++obj_cnt;

	// char tmp[50];
	
	cout << "Please write book name:";
	// cin.get(tmp, 50);

	string("lucy");
	
	cout << "Please write \"" << (string &) *this << "\" price:";
	cin >> price;
}


Book::Book(const char* pn)
{
	++obj_cnt;
	
	string("ok");
	cout << "Please write \"" << (string &) *this << "\" price:";
	cin >> price;
}


Book::Book(const Book &book)
{
	++obj_cnt;

	string((string &)book);
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
	
	string(book.name);
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
	os << "The price of " << "\"" << (string &)book << "\""
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
	cout << obj_cnt << ":[ " << (string &) *this << " ]" << " from memory delete\n";
	--obj_cnt;
}

}	// end namespace 
