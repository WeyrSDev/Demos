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
//////////////////////////////////////////////////
using namespace std;

int main() {
	int x = 0;
	int y = 0;

	cout << "Enter your integer: ";
	cin >> x;

	cout << "Enter Second integer: ";
	cin >> y;

	int a = x;
	int b = x;
	int c = x;
	int d = x;
	int e = x;

	a += y;
	b -= y;
	c *= y;
	d /= y;
	e %= y;

	cout << "x += y = " << a << endl;
	cout << "x -= y = " << b << endl;
	cout << "x *= y = " << c << endl;
	cout << "x /= y = " << d << endl;
	cout << "x %= y = " << e << endl;
}