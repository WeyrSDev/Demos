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

void BubbleSort(int p_data[], int p_number);
void PrintArray(int p_data[], int p_number);

int main() {
	int l_selection = 0, aData[10], l_length = sizeof(aData) / sizeof(aData[0]);

	// Input Loop
	

		// Input
		cout << "Enter ten unsorted integers...\n" << endl;
		for (int i = 0; i < l_length; i++) {
			cout << "[" << i << "] = ";
			cin >> l_selection;
			aData[i] = l_selection;	
		}

	
		// Unsorted list
		cout << "Unsorted List = ";
		PrintArray(aData, l_length);

		VISPACE;

		cout << "Sorting..." << endl;
		BubbleSort(aData, l_length);

		VISPACE;

		cout << "Sorted List = ";
		PrintArray(aData, l_length);
}

void PrintArray(int p_data[], int p_number) {
	for (int i = 0; i < p_number; i++) {
		cout << p_data[i] << ", ";
	}
}


void BubbleSort(int p_data[], int p_number) {
	// Algo loop
	for (int i = 0; i < p_number - 1; i++) {
		for (int j = 0; j < p_number - i - 1; j++)
			if (p_data[j] > p_data[j + 1]) {
				int l_temp = p_data[j];
				p_data[j] = p_data[j + 1];
				p_data[j + 1] = l_temp;
			}
	}
}