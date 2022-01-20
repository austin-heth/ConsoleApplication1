#include "jump.h"
/******************************************************************************
* Class 'Jump' for a single jump.
*
* Author:  Austin Hetherington
* Date: 3 January 2017
**/

/******************************************************************************
* Default Constructor
**/
Jump::Jump()
{
}
/******************************************************************************
* Parameterized Constructor
**/
Jump::Jump(Coord a_coord, Coord b_coord, Coord c_coord)
{
	jumping_peg = a_coord;
	jumped_peg = b_coord;
	landing_hole = c_coord;
}
/******************************************************************************
* Destructor
**/
Jump::~Jump()
{
}
