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

char ToUpperCase(char c);
char ToLowerCase(char c);

int main() {
	char input = 0;

	for (int i = 97; i <= 122; i++) {
		if (i % 5 == 0) {
			cout << endl;
			cout << ToUpperCase(i) << ", ";
		}
	}

	VISPACE;

	for (int i = 65; i <= 90; i++) {
		if (i % 5 == 0) {
			cout << endl;
			cout << ToLowerCase(i) << ", ";
		}
	}

	cout << "Enter a lower case char: ";
	cin >> input;

	VISPACE;

	cout << "Your char = " << ToUpperCase(input) << endl;

	VISPACE;

	cout << "Enter upper case char: ";
	cin >> input;

	VISPACE;

	cout << "Your char = " << ToLowerCase(input) << endl;
}

char ToUpperCase(char c) {
	if (c < 65 || (c > 91 && c < 96) || c > 122) {
		return '\0';
	}
	else {
		if (c - 32 < 65) {
			return c;
		}
		else {
			return (c - 32);
		}
	}
}

char ToLowerCase(char c) {
	if (c < 65 || (c > 91 && c < 97) || c > 122) {
		return '\0';
	}
	else {
		if (c + 32 > 122) {
			return c;
		}
		else {
			return (c + 32);
		}
	}
}