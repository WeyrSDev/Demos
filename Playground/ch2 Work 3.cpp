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
	int l_input = 0, l_output = 0;

	cout << "Enter a positive integer to compute the factorial of: ";
	cin >> l_input;
	VISPACE
	for (int i = 0; i < l_input; i++) {
		if (i == 0) {
			l_output = l_input;
		}
		else {
			l_output *= (l_input - i);
		}
	}
	cout << l_input << "! = " << l_output << endl;
}