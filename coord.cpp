#include "coord.h"

/******************************************************************************
* Class 'Coord' for a single coordinate.
*
* Author:  Austin Hetherington
* Date: 28 December 2016
**/

/******************************************************************************
* Default Constructor
**/
Coord::Coord()
{
}
/******************************************************************************
* Parameterized Constructor
**/
Coord::Coord(int row, int col) {
	row_ = row;
	col_ = col;
}

/******************************************************************************
* Destructor
**/
Coord::~Coord()
{
}
