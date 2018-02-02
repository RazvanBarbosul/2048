#include <stdlib.h>
#include <time.h>
#include <SFML\Graphics.hpp>
#include "Tile.h"

Tile::Tile()
{
}

Tile::Tile(sf::Vector2i pos)
{	// imi genereaza o patratica goala
	this->color = sf::Color(255, 255, 122);
	this->value = 0;
	this->pos = pos;
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


sf::VertexArray Tile::quads(float size)
{
	sf::VertexArray tile(sf::Quads, 4);
	
	float x = pos.x;
	float y = pos.y;

	tile[0].position = sf::Vector2f(x, y);
	tile[1].position = sf::Vector2f(x, y + size);
	tile[2].position = sf::Vector2f(x + size, y + size);
	tile[3].position = sf::Vector2f(x + size, y);

	for (int i = 0; i < 4; i++)
		tile[i].color = color;

	return tile;
}
