#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <stdio.h>
#include <stdlib.h>
#include "Tile.cpp"
#include "Tile.h"

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
	
	int i = 10;
	std::printf("%d\n", i);

<<<<<<< HEAD
	// print main TEst
=======
	//testez si eu acum
>>>>>>> 5c495b91e3ef4961c5d0d049787e6fc0782c8e67

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

		window.clear();
		window.draw(quads);
		window.display();
	}


	return 0;
}