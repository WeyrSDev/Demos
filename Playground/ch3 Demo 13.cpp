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

void PrintSomethingLoop(string text = "Default", int n = 5);

int main() {

	PrintSomethingLoop("Hello, World", 2);
	PrintSomethingLoop("Hello, Again");
	PrintSomethingLoop();
}

void PrintSomethingLoop(string text, int n) {
	for (int i = 0; i < n; ++i) {
		cout << text << endl;
	}
	VISPACE
}