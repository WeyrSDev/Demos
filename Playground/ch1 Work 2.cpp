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
#include <iostream>
#include <string>
//////////////////////////////////////////////////
using namespace std;

int main() {
	// strings
	string fullname = "";
	cout << "Enter full name: ";
	getline(cin, fullname);

	cout << endl;

	cout << "Hello again, " << fullname;
	cout << endl << endl;
}