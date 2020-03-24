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
	int Matrix2A[2][3] = { {-5, 2, 8},{1, 0, 0} };
	int Matrix2B[2][3] = { {1, 0, 2},{0, 3, -6} };
	int Matrix2C[2][3];
	

	// C = A+B 
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			Matrix2C[i][j] = Matrix2A[i][j] + Matrix2B[i][j];
		}
	}

	// A,B,C Matrix Output
	cout << "A = ";
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << Matrix2A[i][j];
		}
		VISPACE
	}

	cout << "B = ";
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << Matrix2B[i][j];
		}
		VISPACE
	}

	cout << "A + B = ";
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << Matrix2C[i][j];
		}
		VISPACE
	}
}