#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <stdio.h>
#include <stdlib.h>
#include "Tile.cpp"

int main()
{
	sf::RenderWindow window(sf::VideoMode(550, 700), "2048");
	// create an array of 3 vertices that define a triangle primitive
	sf::VertexArray quads(sf::Quads, 4);

	// define the position of the triangle's points
	quads[0].position = sf::Vector2f(10, 10);
	quads[1].position = sf::Vector2f(100, 10);
	quads[2].position = sf::Vector2f(100, 100);
	quads[3].position = sf::Vector2f(10, 100);

	sf::Color tailColor = sf::Color(255, 255, 122);

	Tile myTile1 = Tile::Tile();
	std::printf("value = %d\nposition (%d, %d)\n", myTile1.getValue(), myTile1.getPosition().x, myTile1.getPosition().y);

	Tile myTile2 = Tile::Tile();
	std::printf("value = %d\nposition (%d, %d)\n", myTile2.getValue(), myTile2.getPosition().x, myTile2.getPosition().y);

	//test

	// define the color of the triangle's points
	for (int i = 0; i < 4; i++)
		quads[i].color = tailColor;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color(0, 122, 255, 255));
		window.draw(quads);
		window.display();
	}


	return 0;
}