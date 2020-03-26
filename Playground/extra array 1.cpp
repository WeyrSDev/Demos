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

const int l_cities = 5;
const int l_years = 4;

int main() {
	const char* Cities[l_cities] = {
		"Gribble City",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Vista"
	};

	int Maxtemps[l_years][l_cities] = {
		{ 96, 100, 87, 101, 105 },
	    { 96, 98, 91, 107, 104 },
	    { 97, 101, 93, 109, 108 },
	    { 98, 103, 95, 109, 108 }
	};

	cout << "Maximum temperatures for 2008 - 2011\n\n";
	for (int City = 0; City < l_cities; ++City) {
		cout << Cities[City] << ":\t";
		for (int year = 0; year < l_years; ++year)
			cout << Maxtemps[year][City] << "\t";
		    VISPACE
	}
	return 0;
}