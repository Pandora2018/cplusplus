/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : test_main.cpp
#   Last Modified : 2020-09-30 18:11
#   Describe      : 
#
# ====================================================*/

#include <iostream>
using namespace std;


int main(int argc, char** argv)
{

	cout << "main() functin address:" << (void *)main << endl;
	// printf("main() functin address:%p\n", &main);
	cout << argc << " = argc(s)\n";
	cout << argv[0] << " : file path\n";
	cout << *(argv+1) << " : first value\n";
	cout << *(argv+2)<< " : second value\n";

	return 0;
}
