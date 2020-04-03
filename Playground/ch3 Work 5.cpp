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
	int l_inputmenu = 0, l_quit = 0;
	float l_inputnumber = 0, l_inputnumber2 = 0;

	while (!l_quit) {
		// First choice to select function
		cout << "1) cos(x), 2) sin(x), 3) tan(x), 4) atan2(y, x), 5) sqrt(x), 6) x^y, 7) ln(x), 8)e^x, 9) | x | , 10) floor(x), 11) ceil(x), 12) Exit.";
		cin >> l_inputmenu;

		
		switch (l_inputmenu) {
		case 1:
			cout << "Enter x: ";
			cin >> l_inputnumber;
			VISPACE;
			cout << "cos(x) = " << cosf(l_inputnumber) << endl;
			break;
		case 2:
			cout << "Enter x: ";
			cin >> l_inputnumber;
			VISPACE;
			cout << "sin(x) = " << sinf(l_inputnumber) << endl;
			break;
		case 3:
			cout << "Enter x: ";
			cin >> l_inputnumber;
			VISPACE;
			cout << "tan(x) = " << tanf(l_inputnumber) << endl;
			break;
		case 4:
			cout << "Enter x: ";
			cin >> l_inputnumber;

			cout << "Enter y: ";
			cin >> l_inputnumber2;

			cout << "atanf(y, x) = " << atanf(l_inputnumber2/l_inputnumber) << endl;
			break;
		case 5:
			cout << "Enter x: ";
			cin >> l_inputnumber;
			cout << "sqrt(x) = = " << sqrt(l_inputnumber) << endl;
			break;
		case 6:
			cout << "Enter x: ";
			cin >> l_inputnumber;

			cout << "Enter y: ";
			cin >> l_inputnumber2;

			cout << "x^y: = " << powf(l_inputnumber, l_inputnumber2) << endl;
			break;
		case 7:
			cout << "Enter x: ";
			cin >> l_inputnumber;
			cout << "In(x) = " << logf(l_inputnumber) << endl;
			break;
		case 8:
			cout << "Enter x: ";
			cin >> l_inputnumber;
			cout << "e^x = " << expf(l_inputnumber) << endl;
			break;
		case 9:
			cout << "Enter x: ";
			cin >> l_inputnumber;
			cout << "|X| = " << fabsf(l_inputnumber) << endl;
			break;
		case 10:
			cout << "Enter x: ";
			cin >> l_inputnumber;
			cout << "floor(x) = " << floorf(l_inputnumber) << endl;
			break;
		case 11:
			cout << "Enter x: ";
			cin >> l_inputnumber;
			cout << "ceil(x) = " << ceilf(l_inputnumber) << endl;
			break;
		case 12:
			l_quit = true;
			cout << "Exiting..." << endl;
			break;
		default:
			break;
		}

	}
}