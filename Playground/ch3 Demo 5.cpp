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

void PrintPoint(float x, float y, float z);

int main() {
	PrintPoint(1.0f, 2.0f, 3.0f);
	PrintPoint(-5.0f, 3.5f, 1.2f);
	PrintPoint(-12.0f, 2.3f, -4.0f);
	PrintPoint(9.0f, 8.0f, -7.0f);
}

void PrintPoint(float x, float y, float z) {
	cout << "<" << x << ", " << y << ", " << z << ">" << endl;
}