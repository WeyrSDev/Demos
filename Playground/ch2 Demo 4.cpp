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
	float num = 0.0f;

	cout << "Enter a real number: ";
	cin >> num;

	char cube = 0;
	cout << "Cube " << num << " ??? (Y)es / (N)o: ";
	cin >> cube;

	if (cube == 'y' || cube == 'Y') {
		cout << "Cubing num..." << endl;
		num = num * num * num;
		cout << "Done Cubing..." << endl;
	}
	cout << "num = " << num << endl;
}