/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : integer.cpp
#   Last Modified : 2020-08-29 13:43
#   Describe      : 
#
# ====================================================*/

#include <iostream>
#include <climits>
using namespace std;


int main(void)
{
#if 0
	short int age;
	age = 88;

	int num;
	num = 10098;

	long int large_num;
	large_num = 34343434;

	cout << "Print number info:\n";
	cout << "age:" << age << endl;
	cout << "num:" << num << endl;
	cout << "large_num:" << large_num << endl;
#endif
	
	/*
	 * int __fool = 100;
	 * int _food = 23;
	 */
#if 0
	cout << "Data type use members bytes:\n";
	cout << "int:" << sizeof(int) << endl;
	cout << "short:" << sizeof(short) << endl;
	cout << "long:" << sizeof(long) << endl;
	cout << "char:" << sizeof(char) << endl;
	cout << "float:" << sizeof(float) << endl
		<< "double:" << sizeof(double) << endl;
	cout << "long long int:" << sizeof(long long int) << endl;
#endif

	int i = INT_MAX;
	int i_min = INT_MIN;;
	unsigned int ui = UINT_MAX;

	long int long_int_max = LONG_MAX;
	long int long_int_min = LONG_MIN;

	cout << "i_min = " << i_min << endl;
	cout << "ui = " << ui << endl;

	cout << "long_int_max = " << long_int_max << endl;
	cout << "long_int_min = " << long_int_min << endl;

	cout << "unsigned long int max = " << ULONG_MAX << endl;

	// c++ add new initialization
	short new_init(234);
	cout << "new_init:" << new_init << endl;

#if 0
	int dec_int = 2345;
	int oct_int = 0345;
	int hex_int = 0x1234;
	
	cout << "dec_int:" << dec_int << endl;
	cout << oct;
	cout << "oct_int:" << oct_int << endl;
	cout << hex;
	cout << "hex_int:" << hex_int << endl;
#endif

	unsigned int un_int = 100U;
	long int long_int = 123L;
	unsigned long int ulong_int = 456UL;

	cout << oct;
	cout << "un_int:" << un_int << endl;
	cout << "long_int:" << long_int << endl;
	cout << hex;
	cout << "ulong_int:" << ulong_int << endl;


	return 0;
}
