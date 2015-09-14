#pragma once

#ifndef _BOARD_H_
#define _BOARD_H_
#include <vector>
#include "Tile.h"

using std::vector;
using tileVector = vector<Tile>;
using tileVector2d = vector<tileVector>;

class Board
{
public:
	Board();
	~Board();
};

#endif