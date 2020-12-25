/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : structure.cpp
#   Last Modified : 2020-09-16 17:42
#   Describe      : 
#
# ====================================================*/

#include <iostream>
#include <cstring>
using namespace std;

struct ball
{
	char name[20];
	double price;
	float weight;
};


int main(void)
{
	ball* pb = new ball[100];
	strcpy((pb+1)->name, "Basketball");
	(pb+1)->price = 40.36;
	(pb+1)->weight = 2.50f;

	// print ball member
	cout << (pb+1)->name << " price $" << (pb+1)->price << ",it's weight "<< (pb+1)->weight << endl;

/*
 *     cout << "Enter name:";
 *     cin.getline(ps->name, 20);
 * 
 *     cout << ps->name << endl;
 */
	
	// ball b = {"Basketball", 20.36, 4.02, 1, 100};
	// ball c = {"football", 45.32, 5.02, 2, "9787801146274"};

	// cout << c.name << "'s price ￥" << c.price << endl;

	/*
	 * ball arr[2] = {b ,c};
	 * cout << arr[1].name << "'s price ￥" << arr[1].price << endl;
	 */

	delete [] pb;

	return 0;
}
