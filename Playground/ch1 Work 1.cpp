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
#include <iostream>
#include <string>
//////////////////////////////////////////////////
using namespace std;

int main() {
	// n1 real number
	float n1 = 0;

	cout << "Enter a real number n1: ";
	cin >> n1;

	// n2 real number
	float n2 = 0;

	cout << "Enter a real number n2: ";
	cin >> n2;

	// readability line
	cout << endl;

	// result vars 
	float a = n1;
	float b = n1;
	float c = n1;
	float d = n1;

	// sums
	a += n2;
	b -= n2;
	c *= n2;
	d /= n2;

	// output
	cout << n1 << " + " << n2 << " = " << a << endl << endl;
	cout << n1 << " - " << n2 << " = " << b << endl << endl;
	cout << n1 << " * " << n2 << " = " << c << endl << endl;
	cout << n1 << " / " << n2 << " = " << d << endl << endl;
}