/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : arr_elem_cnt.cpp
#   Last Modified : 2020-09-27 19:54
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;


ptrdiff_t elem_cnt(const int* begin, const int* end);

int main(void)
{
	const int arr[] = {2, 3, 5, 6, 7, 10};
	
	ptrdiff_t cnt = elem_cnt(arr, arr+6);
	cout << "arr has " << cnt << " elements\n";

	return 0;
}


ptrdiff_t elem_cnt(const int* begin, const int* end)
{
	cout << "begin:" << begin << ", end:" << end << endl;
	return (end - begin);
}
