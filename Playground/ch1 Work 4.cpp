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
	float area = 0;
	float circum = 0;

	cout << "Enter the radius of a circle: ";
	cin >> n1;

	// 3.14 = pi
	area = 3.14*n1*n1;
	circum = 2 * 3.14*n1;

	cout << endl << endl;

	cout << "The area A of a circle with radius: " << n1 << " = " << area << endl;
	cout << "The Circumference C of a circle with radius: " << n1 << " = " << circum << endl;
}