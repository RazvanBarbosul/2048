#include <SFML\OpenGL.hpp>
#include <SFML\Graphics.hpp>
#include <SFML\System\Vector2.hpp>
using namespace std;

class Tile
{
public:
	// constructor
	Tile();
	Tile(sf::Vector2i position); // pe o anumita pozitie imi face patratele goale
	~Tile();

	// variabile

	// metode
	int getValue(); // imi da valoarea patratului
	void setValue(); // seteaza valoarea patratului cu un nr aleatoriu
	sf::Vector2i getPosition(); // imi da pozitia patratelului

private:
	// variabile
	sf::Vector2i position;
	int value;
	sf::Color color;

};