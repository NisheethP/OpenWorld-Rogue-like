#include "Tile.h"
#include "Constants.h"

Tile::Tile(TileType type)
{
	switch (type)
	{
	case tileDefault:
	default:
		tile.first = tileDefault;
		tile.second = Constant::Tiles::charTileDefault;
	}
	
}


Tile::~Tile()
{
}

char Tile::getTileSymbol()
{
	return tile.second;
}