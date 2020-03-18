//////////////////////////////////////////////////
//
//           
//           
//           Copyright (c) 2020 WeyrSoftware
//
//////////////////////////////////////////////////
//
//           Includes
//////////////////////////////////////////////////
#include "Common.h"
//////////////////////////////////////////////////
using namespace std;

int main() {
	int num = 0;
	cout << "Enter an integer number: ";
	cin >> num;

	// Test: if the input number is >= to zero
	if (num >= 0) {
		// if true
		cout << num << " is greater than or equal to zero.";
		VISPACE
	}
	else
	{
		// if false
		cout << num << " is less than zero.";
		VISPACE
	}
}