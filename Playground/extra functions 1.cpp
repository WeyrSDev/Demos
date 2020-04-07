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

// Numeric

// Basic Math


// Exponential Functions


// Logarithmic Functions


// Power Functions


// Trigonometric Functions


// Hyperbolic Functions


// Integral Rounding



// Function Declarations
viFloat viArea(viFloat p_radius);	
viFloat viCube(viFloat p_number);
viInt viFactorial(viInt p_number);
viInt viRandom(viInt p_range1, viInt p_range2);
viInt viToRadian();
viInt viToDegree();
viChar viToLowerCase(viChar p_char);
viChar viToUpperCase(viChar p_char);
viFloat viDistance3D(viFloat p_ux, viFloat p_uy, viFloat p_uz, viFloat p_vx, viFloat p_vy, viFloat p_vz);
viFloat viSphereVolume(viFloat p_radius);

viInt viLinearSearch(int p_data[], int p_numElements, int p_searchKey);
viInt viBinarySearch(int p_data[], int p_numElements, int p_searchKey);

viInt viSelectionSort();
viInt viBubbleSort(int p_data[], int p_number);



// Application Main
int main() {
	cout << "WTF" << endl;


}

viInt viLinearSearch(int p_data[], int p_numElements, int p_searchKey) {

}

viInt viBinarySearch(int p_data[], int p_numElements, int p_searchKey) {

}

viInt viSelectionSort(int p_data[], int p_number) {

}

viInt viBubbleSort(int p_data[], int p_number) {


}

viFloat viCube(viFloat p_number) {
	viReal l_result = p_number * p_number * p_number;
	return l_result;
}

viFloat viArea(viFloat p_radius) {
	return VI_PI * p_radius * p_radius;
}

viFloat viSphereVolume(viFloat p_radius) {
	viReal l_result = (4.0f / 3.0f) * VI_PI * p_radius * p_radius * p_radius;
	return l_result;
}

viInt viRandom(viInt p_range1, viInt p_range2) {
	srand(time_t(0));
	return (p_range1 + rand() % ((p_range2 + 1) - p_range1));
}

viInt viFactorial(viInt p_number) {
	if (p_number == 0) {
		return 1;
	}
	else {
		return p_number * viFactorial(p_number - 1);
	}
}

viFloat viDistance3D(viFloat p_ux, viFloat p_uy, viFloat p_uz, viFloat p_vx, viFloat p_vy, viFloat p_vz) {
	return (sqrtf((powf((p_vx - p_ux), 2.0f)) + (powf((p_vy - p_uy), 2.0f)) + (powf((p_vz - p_uz), 2.0f))));
}

viFloat viArcTangent(viFloat p_valuey, viFloat p_valuex) {
	float l_theta = atanf(p_valuey / p_valuex);

	if ((l_theta < VI_PI / 2) && (l_theta > -VI_PI / 2) && p_valuex > 0.0f) {
		return atanf(p_valuey / p_valuex) * (180 / VI_PI);
	}
	else if (p_valuex < 0.0f) {
		return (atanf(p_valuey / p_valuex) + (180 * VI_PI / 180))* (180 / VI_PI);
	}
}

viChar viToUpperCase(viChar p_char) {
	if (p_char < 65 || (p_char > 91 && p_char < 96) || p_char > 122) {
		return '\0';
	}
	else {
		if (p_char - 32 < 65) {
			return p_char;
		}
		else {
			return (p_char - 32);
		}
	}
}

viChar viToLowerCase(viChar p_char) {
	if (p_char < 65 || (p_char > 91 && p_char < 97) || p_char > 122) {
		return '\0';
	}
	else {
		if (p_char + 32 > 122) {
			return p_char;
		}
		else {
			return (p_char + 32);
		}
	}
}