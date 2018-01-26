#include <stdlib.h>
#include <time.h>
#include <SFML/Graphics.hpp>
#include "Tile.h"

Tile::Tile()
{
	this->color = sf::Color(255, 255, 122);
	this->value = rand() % 2 * 2;

	/*
	int x = rand() % 4;
	int y = rand() % 4;
	*/
	this->position = sf::Vector2i(0, 0);
}

Tile::~Tile()
{
}

int Tile::getValue()
{
	return value;
}

