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
	// output flag to true/false
	cout.setf(ios_base::boolalpha);

	float num1 = 0.0f, num2 = 0.0f;

	cout << "Enter a number: ";
	cin >> num1;

	cout << "Enter another number: ";
	cin >> num2;

	bool isEqual = num1 == num2;
	bool isNotEqual = num1 != num2;
	bool isNum1Greater = num1 > num2;
	bool isNum1Less = num1 < num2;
	bool isNum2GrterOrEql = num2 >= num1;
	bool isNum2LessOrEql = num2 <= num1;

	cout << endl;
	cout << "isEqual = " << isEqual << endl;
	cout << "isNotEqual = " << isNotEqual << endl;
	cout << "isNum1Greater = " << isNum1Greater << endl;
	cout << "isNum1Less = " << isNum1Less << endl;
	cout << "isNum2GrterOrEql = " << isNum2GrterOrEql << endl;
	cout << "isNum2LessOrEql = " << isNum1Less << endl;
}