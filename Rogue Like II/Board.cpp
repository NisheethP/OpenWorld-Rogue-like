#include "Board.h"
#include <iostream>
#include "Helper.h"
#include "Entity.h"

using Helper::Coord;
using Helper::Colour;
using Helper::SetColour;

Board::Board()
{	
	height = 20;
	width = 10;
	for (int i = 0; i < height; i++)
	{
		tileVector tempVector;
		board.push_back(tempVector);
	}

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (i == 0 && j == 0)
			{
				Tile* tempTile = new Entity(PlayerEntity);
				board[i].push_back(tempTile);
			}
			else
			{
				Tile* tempTile = new Tile();
				board[i].push_back(tempTile);
			}
			
		}
	}
}


Board::~Board()
{
}

void Board::DrawBoard()
{
	for (int i = 0; i < board.size(); i++)
	{
		for (int j = 0; j < board[i].size(); j++)
		{
			std::cout << board[i][j]->getTileSymbol();
			Helper::SetColour(Coord(2*j, i), 1, board[i][j]->getTileColour(), Colour::None);
			std::cout << ' ';
		}		
		std::cout << '\n';
	}
}

void Board::DrawMap()
{
	for (int i = 0; i < board.size(); i++)
	{
		for (int j = 0; j < board[i].size(); j++)
		{
			std::cout << map[i][j]->getTileSymbol();
			std::cout << ' ';
		}
		std::cout << '\n';
	}
}

void Board::GenerateMap()
{

}