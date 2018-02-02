#include <SFML\OpenGL.hpp>
#include <SFML\Graphics.hpp>
#include <SFML\System\Vector2.hpp>
#include <SFML\Graphics\Vertex.hpp>
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
	
	sf::VertexArray quads(float size); // afisez patratica

	// variabile
	sf::Vector2i pos;
	int value;
	sf::Color color;

};