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
	int arrayA[10] = { 0 }, l_length = sizeof(arrayA) / sizeof(arrayA[0]), l_value = 0, l_position = 0, l_smallest = 0;

	for (int i = 0; i < l_length; i++) {
		cout << "[" << i << "] " << "Enter a unsorted integer: ";
		cin >> l_value;
		arrayA[i] = l_value;
	}

	cout << "Unsorted List = ";
	for (int i = 0; i < l_length; i++) {
		cout << arrayA[i] << ", ";
	}

	VISPACE

	cout << "Sorting..." << endl;
	cout << "Sorted List = ";
	for (int i = 0; i < l_length- 1; i++) {
		l_smallest = arrayA[i];
		for (int j = i; j < l_length; j++) {
			if (arrayA[j] < l_smallest) {
				l_smallest = arrayA[j];
				l_position = j;
			}

		}
		if (l_smallest != arrayA[i]) {
			int l_temp;
			l_temp = arrayA[l_position];
			arrayA[l_position] = arrayA[i];
			arrayA[i] = l_temp;
		}
		cout << arrayA[i] << ", ";
	}
	cout << arrayA[l_length - 1];
	VISPACE
}