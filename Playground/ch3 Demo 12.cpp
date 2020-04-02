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
void PrintPoint(float p[3]);

int main() {
	PrintPoint(1.0f, 2.0f, 3.0f);
	PrintPoint(-5.0f, 3.5f, 1.2f);

	float Point1[3] = { -12.0f, 2.3f, -4.0f };
	float Point2[3] = { 9.0f, 8.0f, 7.0f };

	PrintPoint(Point1);
	PrintPoint(Point2);
}

void PrintPoint(float x, float y, float z) {
	cout << "<" << x << ", " << y << ", " << z << ">" << endl;
}

void PrintPoint(float p[3]) {
	PrintPoint(p[0], p[1], p[2]);
}