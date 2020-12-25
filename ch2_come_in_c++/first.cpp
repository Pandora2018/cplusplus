/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : first.cpp
#   Last Modified : 2020-08-26 19:28
#   Describe      : 
#
# ====================================================*/

#include <iostream>
#include <stdio.h>
using namespace std;

void myFunc(double);

int main(void)		// function header
{	// function body
	// using namespace std;
	cout << "hello world";
	cout << endl;
	cout << "This is my first c++ problem\n";
	
	int num = 10;
	cout << "num = " << num << endl;

	printf("use c library\n");
	printf("num = %d\n", num);

	char str[] = "hello c++";
	cout << str << endl;

	const char* ps = "hello c++ string";
	printf("%s\n", ps);
	cout << ps << endl;

	// call function
	myFunc(11.23);

/*
 *     float price;
 * 
 *     // >> and << : operator overload
 * 
 *     cout << "Please input apple price:";
 *     cin >> price;
 *     cout << "price = " << price << endl;
 * 
 *     printf("price = %.2f\n", price);
 */

	// return 0;		// return statment
}

void myFunc(double price)
{
	/*
	 * using std::cout;
	 * using std::endl;
	 */
	// using namespace std;
	cout << "Enter price :";
	// cin >> price;
	scanf("%lf", &price);
	cout << "price = " << price << endl;

	return;
}
