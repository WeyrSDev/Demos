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
	int l_positionx = 0;
	int l_positiony = 0;
	char l_positionNext = 0;
	bool l_quit = false;

	while (!l_quit) {
		cout << "Current Position = [" << l_positionx << " ,  " << l_positiony << "]" << endl;
		cout << "Move [N]orth, [E]east, [S]outh, [W]est, [Q]uit?";
		cin >> l_positionNext;
		switch (l_positionNext) {
		case 'n':
		case 'N':
			l_positiony += 1;
			break;
		case 'e':
		case 'E':
			l_positionx += 1;
			break;
		case 's':
		case 'S':
			l_positiony -= 1;
			break;
		case 'w':
		case 'W':
			l_positionx -= 1;
			break;
		case 'q':
		case 'Q':
			l_quit = true;
			cout << "Exiting.." << endl;
			break;
		default:
			cout << "Error: " << endl;
			break;
		}
	}
}