#include <stdlib.h>
#include <time.h>
#include <SFML\Graphics.hpp>
#include "Tile.h"

Tile::Tile()
{
}

Tile::Tile(sf::Vector2i position)
{	// imi genereaza o patratica goala
	this->color = sf::Color(255, 255, 122);
	this->value = 0;
	this->position = position;
}

Tile::~Tile()
{
}

int Tile::getValue()
{
	return value;
}

void Tile::setValue()
{
	value = (rand() % 2 + 1) * 2;
}

sf::Vector2i Tile::getPosition()
{
	return position;
}
