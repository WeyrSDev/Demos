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
	// Output selection text
	cout << "Welcome to Text-RPG 1.0" << endl;
	cout << "Please select a character class..." << endl;
	cout << "[1]Fighter, [2]Wizard, [3]Cleric, [4]Thief: ";

	// User Prompt
	int l_characterNum = 1;
	cin >> l_characterNum;

	// Init default values
	int l_numHitPoints = 0;
	int l_numMagicPoints = 0;
	string l_weaponName = "";
	string l_className = "";

	if (l_characterNum == 1) {
		l_numHitPoints = 10;
		l_numMagicPoints = 4;
		l_weaponName = "Sword";
		l_className = "Fighter";
	}
	else if (l_characterNum == 2) {
		l_numHitPoints = 4;
		l_numMagicPoints = 10;
		l_weaponName = "Magic Staff";
		l_className = "Wizard";
	}
	else if (l_characterNum == 3) {
		l_numHitPoints = 7;
		l_numMagicPoints = 7;
		l_weaponName = "Magic Staff";
		l_className = "Cleric";
	}
	else { // none of the above
		l_numHitPoints = 8;
		l_numMagicPoints = 6;
		l_weaponName = "Short Sword";
		l_className = "Thief";
	}

	VISPACE

	cout << "Character properties: " << endl;
	cout << "Class = " << l_className << endl;
	cout << "Health Points = " << l_numHitPoints << endl;
	cout << "Magic Points = " << l_numMagicPoints << endl;
	cout << "Weapon = " << l_weaponName << endl;
}