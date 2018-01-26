#pragma once
#include <SFML\System\ve>
class Board
{
public:
	//constructor
	~Board();
	
	// variabile

	// metode
	Board* getInstance();

private:
	// constructor
	Board();
	
	// metode
	static Board* instance;
};