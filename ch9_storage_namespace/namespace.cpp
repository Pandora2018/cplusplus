/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : namespace.cpp
#   Last Modified : 2020-10-11 19:36
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;
// using std::cout, std::cin;	// -std=c++17

namespace One
{
	int id;
	float price;
	double height;
	void fun(void);
}

namespace Two
{
	int id;
	float price;
	double height;
	int fun(void);
}

// Append name to namespace One and Two
namespace One
{
	void fun(void)
	{
		return;
	}
}

namespace Two
{
	int fun(void)
	{
		return 1;
	}
}

int id = 10;

int main(void)
{
	using One::id;
	id = 20;

	One::price = 2.13;
	Two::price = 3.00;

	cout << id << " = id\n";
	// cout << &::id << " = ::id\n";
	cout << &One::price << " = One::price\n";
	cout << &Two::price << " = Two::price\n";

	return 0;
}
