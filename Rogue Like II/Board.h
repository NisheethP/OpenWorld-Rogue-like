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

	/*THIS IS THE ACTIVE STATE OF THE BOARD - SHOWING THE ENTIITES ON IT AS WELL*/
	tileVector2d board;
	/*THE BASE MAP ON WHICH ONLY THE LOCATIONS ARE SHOWN AND NOT ENTITIES*/
	tileVector2d map;

	void GenerateMap();
public:
	Board();
	void DrawBoard();
	void DrawMap();
	~Board();
};

#endif