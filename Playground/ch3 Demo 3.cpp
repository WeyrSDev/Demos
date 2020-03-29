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

float Area();

int main() {
	cout << "Area = " << Area() << endl;
	cout << "Other work..." << endl;

	cout << "Area = " << Area() << endl;
	cout << "Other work..." << endl;

	cout << "Area = " << Area() << endl;
}

float Area() {
	float PI = 3.14f;
	float l_radius = 0.0f;
	cout << "Enter a radius of a circle: ";
	cin >> l_radius;

	float l_area = PI * l_radius * l_radius;
	return l_area;
}