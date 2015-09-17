#include <iostream>
#include "Board.h"

int main()
{
	Board board;
	board.DrawBoard();
	
	std::cout << "Press Enter to continue";
	std::cin.get();
	return 0;
}