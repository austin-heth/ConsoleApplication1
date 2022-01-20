#include "peggame.h"
/******************************************************************************
* Class 'CBPegGame' for playing and running simulation of game.
*
* Author: Austin Hetherington
* Date: 27 December 2016
**/

/******************************************************************************
* Default Constructor
**/
PegGame::PegGame()
{
}

/******************************************************************************
* Destructor
**/
PegGame::~PegGame()
{
}

/******************************************************************************
* Function 'Initialize'.
**/
void PegGame::Initialize() {
	cout << "How large a size board will you be playing on?"
		<< " (side length of equilateral triangle)" << endl;
	cin >> side_length;
	if (side_length > 2) {
		for (int i = 0; i < side_length; ++i) {
			for (int j = 0; j < side_length; ++j) {
				if (j <= i) {
					main_board.at(i).at(j) = PEG;
				}
				else main_board.at(i).at(j) = OOB;
			}
		}
	}
	else {
		cout << "That input was invalid."
			<< "Please input a length greater than 2" << endl;
		exit(0);
	}

	//Ask which peg to start removed
	cout << "Which peg would you like to begin with removed?" << endl;
	cout << NumBoardToString() << endl;
	cin >> intial_empty;
}

/******************************************************************************
* Function 'NumBoardToString'. Prints out triangle board with numbers for peg
* selection.
**/
string PegGame::NumBoardToString() {
	string s = "";
	for (int i = 1; i <= side_length; ++i) {
		int j = 1;
		while (j <= side_length - i) {
			s += "\t";
			++j;
		}
		for (int k = 0; k < i; ++k) {
			++num_holes;
			s += std::to_string(num_holes);
			s += "\t";
		}
		s += "\n";
	}
	s += "Enter a number 1-" + std::to_string(num_holes);
	return s;
}