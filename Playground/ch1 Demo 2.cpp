//////////////////////////////////////////////////
//
//           File Name
//           22:15 8/3/2020
//           Copyright (c) 2011 WeyrSoftware
//
//////////////////////////////////////////////////
#include <iostream>
#include <string>
//////////////////////////////////////////////////
using namespace std;
//////////////////////////////////////////////////
int main() {
	char letter = 'A';
	int integer = 0;
	float dec = 0.0f;

	cout << "Enter a letter: ";
	cin >> letter;

	cout << "Enter a integer: ";
	cin >> integer;

	cout << "Enter a float number: ";
	cin >> dec;

	cout << endl;

	cout << "Letter: " << letter << endl;
	cout << "Integer: " << integer << endl;
	cout << "Float: " << dec << endl;
}