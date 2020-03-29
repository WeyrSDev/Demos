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

float gPI = 3.14f;

float SphereVolume(float radius);

int main() {
	cout << "PI = " << gPI << endl;
	cout << endl;

	float input0 = 0.0f;
	cout << "Enter a sphere radius: ";
	cin >> input0;

	float V = SphereVolume(input0);
	cout << "V = " << V << endl;
}

float SphereVolume(float radius) {
	float V = (4.0f / 3.0f) * gPI * radius * radius * radius;
	return V;
}