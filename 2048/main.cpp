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
	quads[0].position = sf::Vector2f(10, 80);
	quads[1].position = sf::Vector2f(100, 80);
	quads[2].position = sf::Vector2f(100, 170);
	quads[3].position = sf::Vector2f(10, 170);

	sf::Color tailColor = sf::Color(255, 255, 122);

	// define the color of the triangle's points
	for (int i = 0; i < 4; i++)
		quads[i].color = tailColor;
	
	Tile sibel = Tile(sf::Vector2i(10, 100));

	

	/***************************************************/
	/*
	* 2048 text
	*/
	sf::Text text;
	sf::Font font;

	// Load it from a file
	if (!font.loadFromFile("arial.ttf"))
	{

	}
	text.setFont(font);
	text.setString("2048");
	text.setCharacterSize(60);
	text.setFillColor(sf::Color(0, 0, 122));
	text.setStyle(sf::Text::Bold);
	/******************************************************/

	/******************************************************/
	/*
	* gupdate din OpenGL
	*/
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color(0, 122, 255, 255));
		//	window.draw(quads);
		window.draw(text);
		window.draw(sibel.quads(100.f));
		window.display();
	}
	/*********************************************************/

	return 0;
}