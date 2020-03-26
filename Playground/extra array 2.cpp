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
	const int l_arraysize = 11;
	int Array[l_arraysize] = { 0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1 };

	cout << "Grade distribution: " << endl;
	for (int i = 0; i < l_arraysize; i++) {
		if (i == 0) {
			cout << " 0-9: ";
		}
		else if (i == 10) {
			cout << " 100: ";
		}
		else {
			cout << i * 10 << "-" << (i * 10) + 9 << ": ";
		}

		for (int stars = 0; stars < Array[i]; stars++) {
			cout << '*';
		}
		VISPACE
	}
	return 0;
}