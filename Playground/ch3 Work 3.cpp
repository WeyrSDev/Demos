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

float Dist3D(float ux, float uy, float uz, float vx, float vy, float vz);

int main() {
	cout << Dist3D(1, 2, 3, 0, 0, 0) << endl;
	cout << Dist3D(1, 2, 3, 1, 2, 3) << endl;
	cout << Dist3D(1, 2, 3, 7, -4, 5) << endl;
}

float Dist3D(float ux, float uy, float uz, float vx, float vy, float vz) {
	cout << "Distance between (" << ux << "," << uy << "," << ")" << uz << ") and (" << vx << "," << vy << vz << ") = ";

	return (sqrtf((powf((vx - ux), 2.0f)) + (powf((vy - uy), 2.0f)) + (powf((vz - uz), 2.0f))));
}