#pragma once
/****************************************************************
* Header file for a single coordinate.
*
* Author/copyright:  Austin Hetherington
* Date: 3 January 2017
*
**/

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

#include "coord.h"

class Jump
{
public:
	Jump();
	Jump(Coord a_coord, Coord b_coord, Coord c_coord);
	virtual ~Jump();

private:
	Coord jumping_peg;
	Coord jumped_peg;
	Coord landing_hole;
};

