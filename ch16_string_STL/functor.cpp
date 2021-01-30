


#include <iostream>
#include "functor.h"

int main(void)
{
	using namespace std;

	// Construct functor object
	Fun f;

	// f(10) ==> f.opertor()(10)
	cout << "f(10) = " << f(10) << endl;

	return 0;
}
