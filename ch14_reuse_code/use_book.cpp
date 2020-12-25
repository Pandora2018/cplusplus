#include "book.h"

using home_book::Book;

int main(void)
{
	Book b1("C++ primer plus", 48.98);
	// Book b2 = Book("9787801146274", "English of Magic", 200.00);

	// Math_book m1("123456789", "What is math?", 100.00, "Ko.Lang");
	// Math_book m2("Ken.Tom", b2);
	
	Book b2 = Book("The history of mathematic");
	// Book b2;
	
	cout << b2 << b1;
	cout << endl;

}
