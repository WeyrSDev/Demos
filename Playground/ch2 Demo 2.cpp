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
//////////////////////////////////////////////////
using namespace std;

int main() {
	// set bool value to true/false
	cout.setf(ios_base::boolalpha);

	bool B0 = false;
	bool B1 = false;
	bool B2 = false;

	cout << "Enter 0 for false or 1 for true: ";
	cin >> B0;

	cout << "Enter 0 for false or 1 for true: ";
	cin >> B1;

	cout << "Enter 0 for false or 1 for true: ";
	cin >> B2;

	bool notB0 = !B0;
	bool notB1 = !B1;
	bool notB2 = !B2;

	bool isB0AndB1 = B0 && B1;
	bool isB0AndB1AndB2 = B0 && B1 && B2;

	bool isB0OrB1 = B0 || B1;
	bool isB1OrB2 = B1 || B2;

	// Exclusive Or
	bool isB0ExclOrB1 = (B0 || B1) && !(B0 && B1);

	// Complex logical expression
	bool isComplex = (B0 && (B1 || B2)) && !((B0 && B1) || (B0 && B2));

	cout << "B0 = " << B0 << endl;
	cout << "B1 = " << B1 << endl;
	cout << "B2 = " << B2 << endl;
	cout << "notB0 = " << notB0 << endl;
	cout << "notB1 = " << notB1 << endl;
	cout << "notB2 = " << notB2 << endl;
	cout << "isB0AndB1 = " << isB0AndB1 << endl;
	cout << "isB0AndB1AndB2 = " << isB0AndB1AndB2 << endl;
	cout << "isB0OrB1 = " << isB0OrB1 << endl;
	cout << "isB1OrB2 = " << isB1OrB2 << endl;
	cout << "isB0ExclOrB1 = " << isB0ExclOrB1 << endl;
	cout << "isComplex = " << isComplex << endl;
}