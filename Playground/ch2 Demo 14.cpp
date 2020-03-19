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
	while (true) {
		char inputChar = 'n';
		cout << "Continue to play [Y]es / [N]o...";
		cin >> inputChar;

		if (inputChar == 'n' || inputChar == 'N') {
			cout << "Exiting..." << endl;
			break;
		}
		else
			cout << "Playing game..." << endl;
	}
}