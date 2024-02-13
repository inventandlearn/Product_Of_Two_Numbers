// ProductOfTwoNumbers.cpp
// ET-505 
// 10.08.17
// A program that calculates the product of two numbers

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	float var1(100.000), var2(100.000), result(100.000);

	var1 = 89.308;
	var2 = 172.54;
	result = var1 * var2;

	cout << " The value of var1 is " << var1 << endl
		<< " The value of var2 is " << var2 << endl
		<< " The product of var1 and var2 is " << result << endl;

    return 0;
}

/*

Case *1

The value of var1 is 89.308
The value of var2 is 172.54
The product of var1 and var2 is 15409.2

*/
