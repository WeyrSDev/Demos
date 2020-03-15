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
	float f1 = 10.0f * 10.0f;
	float f2 = f1 / 10.0f;
	float fdif = f1 - f2;

	cout << f1 << " - " << f2 << " = " << fdif;
	cout << endl << endl;

	int i1 = 19 + 4;
	int i2 = 10 - 3;
	int remainder = i1 % i2;
	cout << i1 << " % " << i2 << " = " << remainder;
	cout << endl << endl;

	string s1 = "Oi! Shit head,";
	string s2 = "You stink!";
	string stringSum = s1 + s2;
	cout << s1 << " +  " << s2 << " = " << stringSum;
	cout << endl << endl;
}