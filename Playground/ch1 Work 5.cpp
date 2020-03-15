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
	float a0 = 0;
	float a1 = 0;
	float a2 = 0;
	float a3 = 0;
	float a4 = 0;

	float average = 0;

	cout << "Enter a0: ";
	cin >> a0;
	cout << "Enter a1: ";
	cin >> a1;
	cout << "Enter a2: ";
	cin >> a2;
	cout << "Enter a3: ";
	cin >> a3;
	cout << "Enter a4: ";
	cin >> a4;

	cout << endl;

	average = (a0 + a1 + a2 + a3 + a4) / 5;

	cout << "The average of the five inputs a0-a4 = " << average << endl << endl;
}