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
#pragma once
#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <string>
#include <ctime>
#include <random>
#include <conio.h>
#include <stdlib.h>
//////////////////////////////////////////////////
#define VISPACE cout << endl << endl;

typedef char                    viChar;
typedef unsigned char           viByte;
typedef char                    viInt8;
typedef unsigned char           viUInt8;
typedef short                   viInt16;
typedef unsigned short          viUInt16;
typedef long                    viInt32;
typedef unsigned long           viUInt32;
typedef signed __int64          viInt64;
typedef unsigned __int64        viUInt64;
typedef int                     viInt;      // Platform specific integer type (i.e. 32 vs 64 bit).
typedef unsigned int            viUInt;     // Platform specific unsigned integer type (i.e. 32 vs 64 bit).
typedef float                   viFloat;    // Explicit single precision.
typedef double                  viDouble;   // Explicit double precision.
typedef float                   viReal;     // Configurable single / double precision.


const auto VI_PI = (viReal)3.141592654;
const auto VI_QUARTER_PI = (viReal)VI_PI / 4.0f;
const auto VI_HALF_PI = (viReal)VI_PI / 2.0f;
const auto VI_DOUBLE_PI = (viReal)VI_PI * 2.0F;
const auto VI_EPSILON_1M = (viReal)1.0;            // 1 meter (m) tolerance (1)
const auto VI_EPSILON_1CM = (viReal)0.01;          // 1 centimeter (cm) tolerance (1e-2)
const auto VI_EPSILON_1MM = (viReal)0.001;         // 1 millimeter (mm) tolerance (1e-3)
const auto VI_EPSILON_1UM = (viReal)0.000001;      // 1 micrometer (um) tolerance (1e-6)
const auto VI_EPSILON_1NM = (viReal)0.000000001;   // 1 nanometer (nm) tolerance (1e-9) 
const auto VI_EPSILON_SINGLE = FLT_EPSILON;        // Single precision epsilon
const auto VI_EPSILON_DOUBLE = DBL_EPSILON;        // Double precision epsilon
const auto VI_EPSILON = 1e-5f;                     // Generic 0-1 range epsilon (useful for normal tests, divide by 0 tests, etc.)

/*
	Fibonacci: 1, 1, 2, 3, 5, 8, 13, 21
	Lucas: 1, 3, 4, 7, 11, 18, 29, 47
	Pell: 1, 2, 5, 12, 29, 70, 169, 408
	Triangular: 1, 3, 6, 10, 15, 21, 28, 36
	Square: 1, 4, 9, 16, 25, 36, 49, 64
	Pentagonal: 1, 5, 12, 22, 35, 51, 70, 92

	'\n' newline
	'\t' tab
	'\0' null
	'\'' single quote
	'\"' double quote
	'\\' backslash
*/