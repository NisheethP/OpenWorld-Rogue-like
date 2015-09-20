#include "Tile.h"
#include "Constants.h"

Tile::Tile(TileType type)
{
	switch (type)
	{
	case tileEntity:
		tileSymbol = ' ';
		break;
	case tileDefault:
	default:
		tileType = tileDefault;
		tileSymbol = Constant::Tiles::charTileDefault;
		tileColour = Helper::Colour::White;
	}	
}


Tile::~Tile()
{
}

char Tile::getTileSymbol()
{
	return tileSymbol;
}

Helper::Colour Tile::getTileColour()
{
	return tileColour;
}