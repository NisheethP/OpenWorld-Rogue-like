#include "Board.h"
#include <iostream>

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
			Tile* tempTile = new Tile();
			board[i].push_back(tempTile);
		}
	}
}


Board::~Board()
{
}


void Board::DrawBoard()
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cout << board[i][j]->getTileSymbol();
			std::cout << ' ';
		}		
		std::cout << '\n';
	}
	
	

}