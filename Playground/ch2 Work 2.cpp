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
	int l_average = 0, l_number = 0, l_value = 0, l_total = 0;

	cout << "Enter the number of values to average: ";
	cin >> l_number;

	for (int i = 0; i < l_number; i++) {
		cout << "Enter a positive value: ";
		cin >> l_value;
		cout << "[" << i << "] = " << l_value << endl;
		l_total += l_value;
	}

	VISPACE
	cout << "Average = " << l_total / l_number << endl;
}