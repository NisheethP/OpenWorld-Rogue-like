#pragma once
#ifndef _TILE_H_
#define _TILE_H_

#include <utility>
#include "Helper.h"

enum TileType
{
	tileDefault,
	tileEntity
};



class Tile
{
protected:
	TileType tileType;
	char tileSymbol;
	Helper::Colour tileColour;
public:
	Tile(TileType type = tileDefault);
	char getTileSymbol();
	~Tile();
};

#endif