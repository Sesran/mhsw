#include <SFML/Graphics.hpp>
#include <string>

using namespace std;

class Button
{
public:
	Button();
	Button(float width = 100, float height = 50, string text = "Button", void(*callback)(void) = NULL);
	void setWidth(float width);
	void setHeight(float height);
	void setText(string text);
	void setCallback(void(*pt2Function)(void));
	void setColor(sf::Color);
	void setPosition(float x, float y);
	void draw(sf::RenderWindow* window);
	string toString();

private:

	float width;
	float height;
	float x;
	float y;
	sf::Text text;
	sf::Color color;
	sf::Font font;
	sf::RectangleShape rectangle;
	void(*callback)(void);
};