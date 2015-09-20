#include "Tile.h"
#include "Constants.h"

Tile::Tile(TileType type)
{
	switch (type)
	{
	case tileDefault:
	default:
		tileType = tileDefault;
		tileSymbol = Constant::Tiles::charTileDefault;
		tileColour = Helper::Colour::Gray;
	}
	
}


Tile::~Tile()
{
}

char Tile::getTileSymbol()
{
	return tileSymbol;
}