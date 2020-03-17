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
#include <iostream>
//////////////////////////////////////////////////
using namespace std;

int main() {
	float num = 0.0f;
	cout << "Enter a real number: ";
	cin >> num;

	cout << endl;
	char cube = 0;
	cout << "Cube " << num << " ??? (Y)es / (N)o: ";
	cin >> cube;

	// did the user choose yes/no
	if (cube == 'y' || cube == 'Y')
		num = num * num * num;

	cout << endl;
	cout << "num = " << num << endl;
}