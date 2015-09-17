#pragma once
#ifndef _TILE_H_
#define _TILE_H_

#include <utility>

enum TileType
{
	tileDefault
};



class Tile
{
	std::pair<TileType, char> tile;
	
public:
	Tile(TileType type = tileDefault);
	char getTileSymbol();
	~Tile();
};

#endif