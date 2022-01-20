#pragma once
/****************************************************************
* Header file for the class to run CBPegGame simulation.
*
* Author/copyright:  Austin Hetherington
* Date: 27 December 2016
*
**/

//#ifndef GAME_H
//#define GAME_H

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

#include "jump.h"

class PegGame
{
public:
	PegGame();
	virtual ~PegGame();

	void Initialize();
	string NumBoardToString();

	enum PIECE_TYPE { PEG, EMPTY, OOB };

private:
	vector< vector<PIECE_TYPE> > main_board;
	int side_length = 0;
	int num_holes = 0;
	int intial_empty;
};

