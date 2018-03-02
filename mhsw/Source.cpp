#include <SFML/Graphics.hpp>
#include <iostream>
#include "button.h"

using namespace sf;

//Window size constants
#define WINDOW_WIDTH 1280
#define WINDOW_HEIGHT 720

int main()
{
	//Create menu window
	RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Monster Hunter Small World");

	//std::cout << font.getLineSpacing(32) << std::endl;

	//Create play button
	Button playButton(300,50,"Play");
	playButton.setPosition(WINDOW_WIDTH / 2 - 150, WINDOW_HEIGHT / 2 - 25);

	//Main loop
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();
		//Draw objects
		playButton.draw(&window);
		window.display();
	}

	return 0;
}