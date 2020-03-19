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
	/*
	for(Part 1; Part 2; Part 3) {
		Part 4;
	}

	• Part 1: This can be any C++ statement(s). However, it is usually used to initialize a counting
	variable; that is, a variable that counts the loop cycles. The code of Part 1 is executed first and
	only executed once. Program 2.9 declares and initializes a counting variable called cnt to zero;
	that is, “ int cnt = 0 .”
	
	• Part 2: This is the conditional part; that is, the loop continues to loop only so long as this
	condition is true. This condition is tested in every loop cycle. Program 2.9 makes the condition
	that the program should continue to loop as long as the counting variable is less than ten; that is,
	“ cnt < 10 .”
	
	• Part 3: This can be any C++ statement(s). However, it is usually used to modify the counting
	variable in some way. The statement(s) of Part 3 are executed for every loop cycle. In Program
	2.9, we increment the counter variable so that cnt is increased by one for every loop cycle.
	Because cnt is initialized to zero and it is incremented by one for every loop cycle, it follows
	that Program 2.9’s for-loop will repeat exactly ten times.

	Part 4: This part contains the statement(s) which you want to execute for every cycle of the loop.
	Just as in an “if” statement, the curly braces are optional for one statement. However, if you need
	to execute several statements per cycle then you need the curly braces to form a compound
	statement.
	*/

	for (int cnt = 0; cnt < 10; ++cnt) {
		cout << cnt << " : Hello World!" << endl;
	}

	VISPACE

	int cnt1 = 0;
	for (; cnt1 < 10;)
	{
		cout << cnt1 << " : Hello, Again!" << endl;
		++cnt1;
	}
}