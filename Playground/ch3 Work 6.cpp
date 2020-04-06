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
// Starting amount default
const int STARTING_AMMOUNT = 1000;

// Forward Declare
int Random(int low, int high);

int main() {
	// Setup Locals
	int l_playerCash = 0, l_amountWon = 0, l_amountBet = 0, l_selection = 0;
	bool l_quit = false;
	srand(time_t(0));
	
	// Main Loop
	while (!l_quit) {

		// Player need chips?
		if (l_playerCash == 0) {
			cout << "Buy more chips 1)Yes, 2)Mo \n";
			cin >> l_selection;

			if (l_selection == 1) {
				cout << "Thank you!" << endl;
				l_playerCash = STARTING_AMMOUNT;
			}
			else {
				cout << "Please buy chips to play..." << endl;
				cout << "Exiting..." << endl;
				l_quit = true;
				break;
			}
		}

		// Main Menu....LOL
		cout << "Player's chips: $" << l_playerCash << endl;
		cout << "1) Play slot. 2) Exit ";
		cin >> l_selection;
		switch (l_selection) {
		default:
			cout << "You did not enter a valid selection..." << endl;
			break;
		case 1:
			cout << "Enter your bet: $ ";
			cin >> l_amountBet;
			// Player have the correct amount of credits?
			if (l_amountBet > l_playerCash) {
				cout << "You did not enter a valid bet." << endl;
				break;
			}
			else if (l_amountBet < 0) {
				cout << "Please enter a positive amount" << endl;
				break;
			}
			else {
				// Run The RNG
				int slot1 = Random(2, 7), slot2 = Random(2, 7), slot3 = Random(2, 7);
				cout << slot1 << ", " << slot2 << ", " << slot3 << ", " << endl;
				if (slot1 == 7 && slot2 == 7 && slot3 == 7) {
					cout << "Jack Pot!!";
					cout << "You won $" << l_amountBet << " x10" << endl;
					l_playerCash += l_amountBet * 10;
				}
				else if (slot3 == slot2 && slot2 == slot1) {
					cout << "Big Win!!";
					cout << "You won $" << l_amountBet << " x5" << endl;
					l_playerCash += l_amountBet * 5;
				}
				else if (slot1 == slot2 && slot2 != slot3) {
					cout << "Winner!!";
					cout << "You won $" << l_amountBet << " x3" << endl;
					l_playerCash += l_amountBet * 3;
				}
				else {
					cout << "Sucker!" << endl;
					l_playerCash -= l_amountBet;
				}
				break;
			}
			break;
		case 2:
			cout << "Exiting..." << endl;
			l_quit = true;
			break;
		}
	}
}

int Random(int low, int high) {
	return (low + rand() % ((high + 1) - low));
}