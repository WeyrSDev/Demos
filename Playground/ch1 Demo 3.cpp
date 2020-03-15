//////////////////////////////////////////////////
//
//           File Name
//           Date
//           Copyright (c) 2011 WeyrSoftware
//
//////////////////////////////////////////////////
#include <iostream>
//////////////////////////////////////////////////
using namespace std;

#define PRINTME cout << "Who you talking to fool!" << endl;

typedef unsigned char uChar;

int main() {
	// Case 1: Convert less to more precise type
	char c = 10;
	short s = c;
	int x = 666;
	float pi = 3.14f;
	cout << "char to short: " << s << endl;
	// Case 2: Convert more to less precise integer
	uChar uc = 256;
	cout << "int to uchar: " << (int)uc << endl;
	// Case 3: Convert float to int (if it can)
	int i = 496512.546f;
	cout << "float to int: " << i << endl;
	// Case 4: Convert float to short (int cant)
	s = 496512.987123f;
	cout << "float to short: " << s << endl;
	// Additional casting int to float example
	float result = static_cast<float>(x);
	cout << "int to float cast: " << result << endl;
	// float to int
	int result2 = static_cast<int>(pi);
	cout << "float to int: " << result2 << endl;
	// Macro :p
	PRINTME
	PRINTME
	PRINTME
}