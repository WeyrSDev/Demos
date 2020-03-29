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

float Cube(float x);

int main() {
	float input0 = 0.0f;
	cout << "Enter a real number: ";
	cin >> input0;

	cout << input0 << "^3 = " << Cube(input0) << endl;

	float input1 = 0.0f;
	cout << "Enter another real number: ";
	cin >> input1;

	cout << input1 << "^3 = " << Cube(input1) << endl;
}

float Cube(float x) {
	float result = x * x * x;
	return result;
}