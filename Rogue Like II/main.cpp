#include <iostream>
#include "Board.h"
#include "Helper.h"
int main()
{
	Helper::SetDefaultColour(Helper::Colour::Red);
	Board board;
	board.DrawBoard();
	
	std::cout << "Press Enter to continue";
	std::cin.get();
	return 0;
}