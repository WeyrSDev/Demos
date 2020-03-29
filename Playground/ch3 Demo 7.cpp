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

// wrong
/*
int main() {
	for (int i = 0; i < 5; ++i) {
		int cnt;
		cout << "Hello, World!" << endl;
		++cnt;
	}
	cout << "cnt = " << cnt << endl;
}
*/

// correct
int main() {
	int cnt = 0;

	for (int i = 0; i < 5; ++i) {
		cout << "Hello, World!" << endl;
		++cnt;
	}
	cout << "cnt = " << cnt << endl;
}