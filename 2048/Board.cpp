#include "Board.h"

Board::Board()
{
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			board[i][j] = Tile(sf::Vector2i(i, j));
}

Board::~Board()
{
}

Board* Board::instance = 0;

Board* Board::getInstance()
{
	if (instance == 0)
		instance = new Board();

	return instance;
}
