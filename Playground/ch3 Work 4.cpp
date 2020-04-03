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

const float PI = 3.14f;

float MyArcTangent(float y, float x);


int main() {
	cout << MyArcTangent(4, 2) << endl;
	cout << MyArcTangent(5, -1) << endl;
	cout << MyArcTangent(-4, -6) << endl;
	cout << MyArcTangent(-6, 4) << endl;

	VISPACE;



}

float MyArcTangent(float y, float x) {
	float l_theta = atanf(y / x);

	cout << "MyArcTangent (" << y << ", " << x << ") = ";

	if ((l_theta < PI/2) && (l_theta > -PI/2) && x > 0.0f) {
		return atanf(y / x) * (180 / PI);
	}
	else if (x < 0.0f) {
		return (atanf(y / x) + (180 * PI / 180))* (180 / PI);
	}
}