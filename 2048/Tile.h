#include <SFML\OpenGL.hpp>
#include <SFML\Graphics.hpp>
#include <SFML\System\Vector2.hpp>
using namespace std;

class Tile
{
public:
	Tile();
	~Tile();
	int getValue();

	sf::Vector2i getPosition();

private:
	sf::Vector2i position;
	int value;
	sf::Color color;

};