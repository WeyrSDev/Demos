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
	const int l_arraysize = 7;
	int Frequency[l_arraysize] = { 0 };

	srand(time(0));
	for (int roll = 1; roll <= 6000000; roll++) {
		Frequency[1 + rand() % 6]++;
	}

	cout << "Face" << setw(13) << "Frequency" << endl;
	for (int face = 1; face < l_arraysize; face++) {
		cout << setw(4) << face << setw(13) << Frequency[face] << endl;
	}
	return 0;
}