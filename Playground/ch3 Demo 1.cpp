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
	float l_pi = 3.14f;

	float l_radius = 0.0f;
	cout << "Enter a radius of a circle: ";
	cin >> l_radius;

	float l_area = l_pi * l_radius * l_radius;
	cout << "Area = " << l_area << endl;

	cout << "Other Work..." << endl;

	cout << "Enter a radius of a circle: ";
	cin >> l_radius;
	l_area = l_pi * l_radius * l_radius;
	cout << "Area = " << l_area << endl;

	cout << "Other work..." << endl;

	cout << "Enter the radius of a circle: ";
	cin >> l_radius;
	l_area = l_pi * l_radius * l_radius;
	cout << "Area = " << l_area << endl;

}