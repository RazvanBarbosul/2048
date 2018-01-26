#include <stdlib.h>
#include <time.h>
#include <SFML\Graphics.hpp>
#include "Tile.h"

Tile::Tile()
{
	this->color = sf::Color(255, 255, 122);
	this->value = rand() % 2 * 2 + 2;

	int x = rand() % 4;
	int y = rand() % 4;
	this->position = sf::Vector2i(x, y);
}

Tile::~Tile()
{
}

int Tile::getValue()
{
	return value;
}

sf::Vector2i Tile::getPosition()
{
	return position;
}
