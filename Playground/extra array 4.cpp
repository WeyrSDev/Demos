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
	vector<int> MyVec;
	int l_value = 0;

	while (cin >> l_value) {
		MyVec.push_back(l_value);


		for (int sum = 0, ix = 0; ix < MyVec.size(); ++ix) {
			sum += MyVec[ix];
			int average = sum / MyVec.size();
			cout << "Sum of " << MyVec.size() << " elements: " << sum << ". Average: " << average << endl;
		}
	}
}