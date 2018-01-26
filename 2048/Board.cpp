#include "Board.h"

Board::Board()
{

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
