#include <SFML\OpenGL.hpp>
#include <SFML\Graphics.hpp>
#include <SFML\System\Vector2.hpp>
using namespace std;

class Tile
{
public:
	// constructor
	Tile();
	~Tile();

	// variabile
	int getValue();

	// metode
	sf::Vector2i getPosition();

private:
	// variabile
	sf::Vector2i position;
	int value;
	sf::Color color;

};