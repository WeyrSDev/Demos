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
	const float PI = 3.14f;
	const float QUATER_PI = PI / 4.0f;

	cout << "cosf(0.0f) = " << cosf(0.0f) << endl;
	cout << "sinf(QUATER_PI) = " << sinf(QUATER_PI) << endl;
	cout << "sqrtf(2.0fg) = " << sqrtf(2.0f) << endl;
	cout << "logf(expf(1.0f)) = " << logf(expf(1.0f)) << endl;
	cout << "powf(2.0f, 3.0f) = " << powf(2.0f, 3.0f) << endl;
	cout << "fabsf(-5.0f) = " << fabsf(-5.0f) << endl;
	cout << "floorf(2.3f) = " << floorf(2.3f) << endl;
	cout << "ceilf(2.3f) = " << ceilf(2.3f) << endl;
}