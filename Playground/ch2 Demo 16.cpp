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
	int array0[7] = { 1, 2, 3, 4, 5, 6, 7 };
	int array1[7] = { -9, -8, -7, -6, -5, -4, -3 };

	int sum[7];
	for (int i = 0; i < 7; i++) {
		sum[i] = array0[i] + array1[i];
		cout << array0[i] << " + " << array1[i] << " = ";
		cout << sum[i] << endl;
	}
}