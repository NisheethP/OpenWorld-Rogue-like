#pragma once

#ifndef _BOARD_H_
#define _BOARD_H_
#include <vector>
#include "Tile.h"

using std::vector;
using tileVector = vector<Tile*>;
using tileVector2d = vector<tileVector>;

class Board
{
	int width;
	int height;

	tileVector2d board;
public:
	Board();
	void DrawBoard();
	~Board();
};

#endif