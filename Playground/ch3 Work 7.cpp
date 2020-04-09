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


int BinSearch(int p_data[], int p_numElements, int p_searchKey);

int main() {
	int myArray[23] = { 1, 4, 5, 6, 9, 14, 21, 23, 28, 31, 35, 42, 46, 50, 53, 57, 62, 63, 65, 74, 79, 89, 95 };
	int l_length = sizeof(myArray) / sizeof(myArray[0]), l_key = 0;
	string l_selection = "";
	bool l_quit = false;

	// Print the array
	cout << "{ ";
	for (int i = 0; i < l_length; i++) {
		if (i == l_length - 1) {
			cout << myArray[i] << endl;
		}
		cout << myArray[i] << ", ";
	}
	cout << " }" << endl;

	// user input loop
	while (!l_quit) {
		// Get input
		cout << "Enter search key (or 'x' to exit): ";
		cin >> l_selection;
		
		// If x then quit
		if (l_selection == "x" || l_selection == "X") {
			cout << "Exiting..." << endl;
			l_quit = true;
			break;
		}
	
		// turn selection into a usable int for the algo search key
		l_key = atoi(l_selection.c_str());
		int l_returnkey = BinSearch(myArray, l_length, l_key);
		if (l_returnkey == -1) {
			cout << l_key << " not found" << endl;
			continue;
		}
		else {
			cout << l_key << " is in position: " << l_returnkey << endl;
			continue;
		}
	}
}

int BinSearch(int p_data[], int p_numElements, int p_searchKey) {
	int l_low = 0, l_middle = 0, l_high = p_numElements - 1;
	// Algo loop
	while (l_low <= l_high) {
		l_middle = (l_low + l_high) / 2;

		if (p_data[l_middle] == p_searchKey) {
			return l_middle;
		}
		else if (p_searchKey > p_data[l_middle]) {
			l_low = l_middle + 1;
		}
		else {
			l_high = l_middle - 1;
		}
	}
	return -1;
}