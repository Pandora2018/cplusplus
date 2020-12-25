/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : fun_template.cpp
#   Last Modified : 2020-11-13 17:56
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;

template <typename R, typename T> R addition(T a, T b);		// #2
template <typename R> R addition(void);

struct work
{
	char company[10];
	double slary;
};

template <> double addition<double, const work &>(const work &a, const work &b); //	#1

// explicit instatation
template int addition<int, char>(char, char);


int main(void)
{
	work enginer = {"apple", 10000.50};
	work program = {"google", 8000.60};
	
	// call #1
	cout << addition<double, const work &>(enginer, program) << endl;
	// call #2
	cout << addition<int, char>('4', '5') << endl;

	return 0;
}

template <typename R, typename T>
R addition(T a, T b)
{
	return (R)(a + b);
}

template <typename R>
R addition(void)
{
	return 1;
}

template <> double addition<double, const work &>(const work &a, const work &b)
{
	// explicit specialization
	return (a.slary + b.slary);
}
