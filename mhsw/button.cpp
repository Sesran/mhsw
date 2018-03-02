#include "button.h"
#include <SFML/Graphics.hpp>

using namespace sf;

Button::Button() : Button(100, 50, "Button", NULL)
{
}

Button::Button(float width, float height, string text, void(*callback)(void))
{
	this->width = width;
	this->height = height;
	this->callback = callback;

	this->font.loadFromFile("arial.ttf");
	this->text = Text(text, font);
	this->text.setCharacterSize(30);
	FloatRect rect = this->text.getLocalBounds();
	this->text.setPosition(this->x + (this->width-rect.width)/2, this->y + (this->height - rect.height) / 2);

	this->rectangle.setSize(Vector2f(width, height));
	this->rectangle.setFillColor(this->color);

}

void Button::setWidth(float width)
{
	if (width == NULL) return;
	this->width = width;
}

void Button::setHeight(float height)
{
	if (height == NULL) return;
	this->height = height;
}

void Button::setText(string text)
{
	//this->text = text;
}

void Button::setCallback(void(*pt2Function)(void))
{
	this->callback = callback;
}

void Button::setColor(sf::Color)
{
	this->color = color;
}

void Button::setPosition(float x, float y)
{

}

void Button::draw(RenderWindow* window)
{
	window->draw(this->rectangle);
	window->draw(this->text);
}

string Button::toString()
{
	return "width:";
		//+  std::to_string(this->width) + ";height:" + std::to_string(this->height) + ";text:" + this->text;
}