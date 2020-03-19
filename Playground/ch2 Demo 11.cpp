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
	bool quit = false;

	while (!quit) {
		char inputChar = 'n';
		cout << "Continue to play? [Y]es / [N]o...";
		cin >> inputChar;

		if (inputChar == 'n' || inputChar == 'N') {
			cout << "Exiting..." << endl;
		}
		else
			cout << "Playing game..." << endl;
	}

}