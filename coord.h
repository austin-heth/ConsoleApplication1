#pragma once
/****************************************************************
* Header file for a single coordinate.
*
* Author/copyright:  Austin Hetherington
* Date: 28 December 2016
*
**/

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

const int kDummyInt = -1;

class Coord
{
public:
	Coord();
	Coord(int row, int col);
	virtual ~Coord();

private:
	int row_ = kDummyInt;
	int col_ = kDummyInt;

};