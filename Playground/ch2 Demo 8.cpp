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
	int num = 0;
	cout << "Enter an even integer in the range [2, 8]: ";
	cin >> num;

	switch (num) {
	case 2:
		cout << "Case 2!" << endl;
	case 4:
		cout << "Case 4!" << endl;
	case 6:
		cout << "Case 6!" << endl;
	case 8:
		cout << "Case 8!" << endl;
	default:
		cout << "Default Case" << endl;
		cout << "Enter a even number!" << endl;
	}
}