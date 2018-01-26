#pragma once
#include "Tile.h"

class Board
{
public:
	//constructor
	~Board();
	
	// variabile
	Tile board[4][4]; //tabla de joc

	// metode
	Board* getInstance(); // imi arat daca a fost instantiata tabla de joc, folosesc Singleton

private:
	// constructor
	Board(); // instantiez o singura data tabla de joc
			 // creez tabla de joc cu toate patratelele goale
	
	// metode
	static Board* instance; // mereu intoarce instanta tablei
};