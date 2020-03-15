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
	float n1 = 0;
	float n2 = 3;

	cout << "Enter a real number: ";
	cin >> n1;

	float a = n1;

	// Cube
	a = n1*n1*n1;

	cout << n1 << " ^ " << n2 << " = " << a << endl << endl;
}