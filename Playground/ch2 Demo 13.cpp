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
		for (int cnt = 0; cnt < 10; ++cnt)
			cout << cnt << " ";
		VISPACE

		char inputChar = 'n';
		cout << "Print next 10 integers [Y]es / [N]o? ";
		cin >> inputChar;

		if( inputChar == 'n' || inputChar == 'N' ) {
			cout << "Exiting..." << endl;
			quit = true;
		}
	}
}