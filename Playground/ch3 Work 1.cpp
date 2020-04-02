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

int Factorial(int n);

int main() {
	

	cout << "5! = " << Factorial(5) << endl;
	cout << "0! = " << Factorial(0) << endl;
	cout << "9! = " << Factorial(9) << endl;
	cout << "3! = " << Factorial(3) << endl;

}

int Factorial(int input) {
	int l_output = 1;

	for (int i = 1; i <= input; i++) {
		l_output = l_output * i;
	}
	return l_output;
}