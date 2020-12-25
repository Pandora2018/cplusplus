/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : reference.cpp
#   Last Modified : 2020-10-02 10:48
#   Describe      : 
#
# ====================================================*/

#include <iostream>
#include <cstring>
using namespace std;

struct shop_info
{
	char name[20];
	unsigned char age;
};

shop_info & clone(const shop_info &in);

int main(void)
{
	double d = 10.0;
	double  &ref_d = d;

	int i;
	int &ref_i = i;

	// cout << "int & ref_i: " << sizeof ref_i << endl;
	// cout << "double ref_d: " << sizeof ref_d << endl;

	/*
	 * cout << "sizeof(int &):" << sizeof(int &) << endl;
	 * cout << "sizeof(double &):" << sizeof(double &) << endl;
	 * cout << "sizeof(char &):" << sizeof(char &) << endl;
	 */

	
	// cout << sizeof ref_i << " Bytes\n";
	
	// cout << "&i = " << &i << endl;
	// cout << "ref_i = " << &ref_i << endl;
	// cout << "i = " << i << endl;

	shop_info shop = {"bbg", 10};
	
	shop_info & new_shop = clone(shop);
	cout << new_shop.name << "\t" << (int)new_shop.age << endl;
	// cout << clone(shop).name << "\t" << (int)clone(shop).age << endl;

	// clone(shop).age = 100;
	cout << strcpy(clone(shop).name, "Su Ning") << "\t"
		<< (int)(clone(shop).age = 20) << endl;

	return 0;
}


shop_info & clone(const shop_info &in)
{
	shop_info* i = new shop_info;
	*i = in;
	return *i;
}
