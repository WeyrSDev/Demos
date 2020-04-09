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

int LinearSearch(int p_data[], int p_searchKey);

int main() {
	int arrayA[] = { 7, 3, 32, 2, 55, 34, 6, 13, 29, 22, 11, 9, 1, 5, 42, 39, 8 };
	int l_returnValue = 0, l_length = sizeof(arrayA) / sizeof(arrayA[0]);

	cout << "List = ";
	
	for (int i = 0; i < l_length; i++) {
		if (i == l_length- 1) {
			cout << arrayA[i] << endl;
			break;
		}
		cout << arrayA[i] << ", ";
	}

	VISPACE
	cout << "Enter an integer in the list to search for: ";
	cin >> l_returnValue;

	for (int i = 0; i < sizeof(arrayA); i++) {
		if (arrayA[i] == l_returnValue) {
			l_returnValue = i;
			break;
		}
	}

	cout << "Item found at index [" << l_returnValue << "] " << endl;
}


// needs work.
int LinearSearch(int p_data[], int p_searchKey) {
	for (int i = 0; i < sizeof(p_data); i++) {
		if (p_data[i] == p_searchKey) {
			p_searchKey = i;
			break;
		}
		else {
			p_searchKey = 0;
			break;
		}
	}
	return p_searchKey;
}